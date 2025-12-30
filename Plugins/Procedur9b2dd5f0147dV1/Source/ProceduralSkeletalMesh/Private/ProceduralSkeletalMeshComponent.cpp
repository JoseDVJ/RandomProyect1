// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#include "ProceduralSkeletalMeshComponent.h"
#include "Engine/SkinnedAssetCommon.h"
#include "Components/CapsuleComponent.h"
#include "Components/DynamicMeshComponent.h"
#include "ProceduralMeshComponent.h"
#include "DynamicMesh/MeshAttributeUtil.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "MeshDescription.h"
#include "StaticMeshAttributes.h"

// Sets default values for this component's properties
UProceduralSkeletalMeshComponent::UProceduralSkeletalMeshComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UProceduralSkeletalMeshComponent::OnRegister()
{
	Super::OnRegister();
}

/// <summary>
/// Creates an empty procedural mesh
/// </summary>
/// <returns></returns>
UProceduralMeshComponent* UProceduralSkeletalMeshComponent::CreateEmptyProceduralMesh()
{
	UProceduralMeshComponent* ProceduralMeshComponent = NewObject<UProceduralMeshComponent>(GetOwner());

	ProceduralMeshComponent->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
	ProceduralMeshComponent->SetCastShadow(false);
	ProceduralMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ProceduralMeshComponent->SetVisibility(false);
	ProceduralMeshComponent->bUseComplexAsSimpleCollision = false;
	ProceduralMeshComponent->RegisterComponent();

	return ProceduralMeshComponent;
}

/**
* "Slices" the procedural mesh assigned to this component using the provided Normal & Scale, updates the physics for each bone based on
* the side of the slice it occurred on
*/
UProceduralSkeletalMeshComponent* UProceduralSkeletalMeshComponent::Slice(FVector Position, FVector Normal, bool Ragdoll, UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh)
{
	//if (Deformed)
		//return nullptr;

	if (!Deformed)
	{
		// Move procedural mesh vertices to match the skeletal mesh
		UpdateFromSkeletalMesh();
	}

	Deformed = true;

	UProceduralMeshComponent* SlicedHalf = SliceMesh(ProceduralMesh, Position, Normal);

	CombineCapSections(0);

	ProceduralMesh->UpdateBounds();

	// Now that the we have two procedural meshes that are both lined up with the skeletal mesh, create mappings for both
	// These mappings will be used to optimize deforming the sliced meshes to match the skeletal mesh
	BuildSectionedSkeletonMap(ProceduralMesh, SkeletalProceduralMeshData);

	// Duplicate the existing skeletal mesh or use the specified skinned mesh for the other off

	UProceduralSkeletalMeshComponent* SlicedHalfSkeletalMesh;

	if (!OtherHalfSkinnedMesh)
	{
		SlicedHalfSkeletalMesh = DuplicateSelf();

		SlicedHalfSkeletalMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		SlicedHalfSkeletalMesh->RefreshFromProceduralMesh(SlicedHalf);

		RefreshProceduralMeshMaterials(SlicedHalf);
	}
	else
		SlicedHalfSkeletalMesh = OtherHalfSkinnedMesh;

	DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	//SkeletalMesh->SetAnimInstanceClass(NULL);
	
	ProceduralMesh->SetVisibility(true);
	ProceduralMesh->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);

	SetCollisionForSkeletalMesh(this, Position, Normal, false);
	SetCollisionForSkeletalMesh(SlicedHalfSkeletalMesh, Position, Normal, true);

	SetVisibility(false);

	// Ignore collision between both skeletal meshes
	IgnoreComponentWhenMoving(SlicedHalfSkeletalMesh, true);

	SlicedHalfSkeletalMesh->IgnoreComponentWhenMoving(this, true);

	RefreshProceduralMeshMaterials(ProceduralMesh);

	return SlicedHalfSkeletalMesh;
};

void UProceduralSkeletalMeshComponent::CombineCapSections(int32 LODIndex)
{
	CombineCapSections(LODIndex, ProceduralMesh);
}

void UProceduralSkeletalMeshComponent::CombineCapSections(int32 LODIndex, UProceduralMeshComponent* ProcMesh)
{
	FProceduralMeshData ProcMeshData = GetProceduralMeshData(ProcMesh);

	const FSkeletalMeshRenderData* RenderData = GetSkeletalMeshRenderData();

	TMap<FProceduralMeshVertexCoord, FSkeletalVertexMapItem> GlobalSkinningMap;

	const FSkeletalMeshLODRenderData& LOD = RenderData->LODRenderData[LODIndex];

	int32 NumSkeletalSections = LOD.RenderSections.Num();
	int32 SectionsToCombine = ProcMeshData.Sections.Num() - NumSkeletalSections;

	if (SectionsToCombine <= 1)
		return;

	FProceduralMeshSection& BaseCapSection = ProcMeshData.Sections[NumSkeletalSections];

	for (int i = NumSkeletalSections + 1; i < ProcMeshData.Sections.Num(); ++i)
	{
		FProceduralMeshSection& CapSection = ProcMeshData.Sections[i];

		int32 StartNum = BaseCapSection.Vertices.Num();

		BaseCapSection.Vertices.Append(CapSection.Vertices);
		BaseCapSection.Normals.Append(CapSection.Normals);
		BaseCapSection.Colors.Append(CapSection.Colors);
		BaseCapSection.Tangents.Append(CapSection.Tangents);
		BaseCapSection.UVs.Append(CapSection.UVs);

		for (int j = 0; j < CapSection.Indices.Num(); ++j)
		{
			int32 Index = CapSection.Indices[j];

			CapSection.Indices[j] = StartNum + Index;
		}

		BaseCapSection.Indices.Append(CapSection.Indices);
	}

	BuildProceduralMesh(ProcMeshData, ProcMesh);
}

/**
* Slice across the mesh along a plane and separates islands of surfaces on both resulting meshes into their own Procedural Mesh Components
*/
FProceduralSkeletalMeshSeparationSlice UProceduralSkeletalMeshComponent::SliceWithSeparation(FVector Position, FVector Normal, bool Ragdoll, UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh)
{
	FProceduralSkeletalMeshSeparationSlice Result;

	SkeletalMeshPoseComponentTransforms = GetComponentSpaceTransforms();

	if (!Deformed)
	{
		// Move procedural mesh vertices to match the skeletal mesh
		UpdateFromSkeletalMesh();
	}

	Deformed = true;

	UProceduralMeshComponent* SlicedHalf = SliceMesh(ProceduralMesh, Position, Normal);

	ProceduralMesh->UpdateBounds();

	FProceduralSkeletalMeshSeparation SeparationResult;

	// Separate surfaces from the main procedural mesh and add them to the final result
	SeparationResult = SeparateProceduralMesh();

	Result.Separations.Append(SeparationResult.Separations);

	// Do the same for the other half
	SeparationResult = SeparateProceduralMesh(SlicedHalf);

	Result.Separations.Append(SeparationResult.Separations);

	CombineCapSections(0);

	// Now that the we have two procedural meshes that are both lined up with the skeletal mesh, create mappings for both
	// These mappings will be used to optimize deforming the sliced meshes to match the skeletal mesh
	BuildSectionedSkeletonMap(ProceduralMesh, SkeletalProceduralMeshData);

	// Duplicate the existing skeletal mesh or use the specified skinned mesh for the other off

	UProceduralSkeletalMeshComponent* SlicedHalfSkeletalMesh;

	if (!OtherHalfSkinnedMesh)
	{
		SlicedHalfSkeletalMesh = DuplicateSelf();
		SlicedHalfSkeletalMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		SlicedHalfSkeletalMesh->RefreshFromProceduralMesh(SlicedHalf);

		RefreshProceduralMeshMaterials(SlicedHalf);
	}
	else
		SlicedHalfSkeletalMesh = OtherHalfSkinnedMesh;

	Result.OtherHalf = SlicedHalfSkeletalMesh;

	DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

	ProceduralMesh->SetVisibility(true);

	ProceduralMesh->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);

	SetCollisionForSkeletalMesh(this, Position, Normal, false);
	SetCollisionForSkeletalMesh(SlicedHalfSkeletalMesh, Position, Normal, true);

	SetVisibility(false);

	// Ignore collision between both skeletal meshes
	IgnoreComponentWhenMoving(SlicedHalfSkeletalMesh, true);

	SlicedHalfSkeletalMesh->IgnoreComponentWhenMoving(this, true);

	RefreshProceduralMeshMaterials(ProceduralMesh);

	return Result;
}

/**
* Slice across the mesh along a plane at the position of the specified bone and separates islands of surfaces on both halves into distinct procedural mesh components
*/
FProceduralSkeletalMeshSeparationSlice UProceduralSkeletalMeshComponent::SliceBoneWithSeparation(FName BoneName, FVector Normal, bool Ragdoll, UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh)
{
	FVector BoneWorldLocation = GetBoneLocation(BoneName);
	
	return SliceWithSeparation(BoneWorldLocation, Normal, Ragdoll, OtherHalfSkinnedMesh);
}

/// <summary>
/// Attaches and skins the specified procedural mesh to this component
/// </summary>
/// <param name="Component"></param>
void UProceduralSkeletalMeshComponent::RefreshFromProceduralMesh(UProceduralMeshComponent* Component)
{
	if (IsValid(ProceduralMesh))
	{
		ProceduralMesh->DestroyComponent();
		ProceduralMesh = NULL;
	}

	ProceduralMesh = Component;

	Component->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);

	// Update procedural mesh to match the underlying skeletal mesh
	//UpdateFromSkeletalMesh();

	CombineCapSections(0);

	// Skin the procedural mesh to the skeleton
	BuildSectionedSkeletonMap(ProceduralMesh, SkeletalProceduralMeshData);

	SetVisibility(false);

	Component->SetVisibility(true);

	Deformed = true;
}

/// <summary>
/// Performs a slice operation on the target procedural mesh
/// </summary>
/// <param name="ProcMesh"></param>
/// <param name="SlicePosition"></param>
/// <param name="SliceNormal"></param>
/// <returns></returns>
UProceduralMeshComponent* UProceduralSkeletalMeshComponent::SliceMesh(UProceduralMeshComponent* ProcMesh, FVector SlicePosition, FVector SliceNormal)
{
	// Perform the slicing operation
	UProceduralMeshComponent* SliceMesh;

	SliceProceduralMesh(ProcMesh, SlicePosition, SliceNormal, true, SliceMesh, EProcMeshSliceCapOption::CreateNewSectionForCap);

	return SliceMesh;
}

/// <summary>
/// Performs a slice like in UKismetProceduralMeshLibrary::SliceProceduralMesh, with an added constraint for plane size - allows for slicing without going all the way through the mesh
/// </summary>
/// <param name="InProcMesh"></param>
/// <param name="PlanePosition"></param>
/// <param name="PlaneNormal"></param>
/// <param name="PlaneSideLength"></param>
/// <param name="bCreateOtherHalf"></param>
/// <param name="OutOtherHalfProcMesh"></param>
/// <param name="CapOption"></param>
/// <param name="CapMaterial"></param>
void UProceduralSkeletalMeshComponent::SliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption)
{
	if (InProcMesh != nullptr)
	{
		// Transform plane from world to local space
		FTransform ProcCompToWorld = InProcMesh->GetComponentToWorld();
		FVector LocalPlanePos = ProcCompToWorld.InverseTransformPosition(PlanePosition);
		FVector LocalPlaneNormal = ProcCompToWorld.InverseTransformVectorNoScale(PlaneNormal);
		LocalPlaneNormal = LocalPlaneNormal.GetSafeNormal(); // Ensure normalized

		FPlane SlicePlane(LocalPlanePos, LocalPlaneNormal);

		// Set of sections to add to the 'other half' component
		TArray<FProcMeshSection> OtherSections;
		// Material for each section of other half
		TArray<UMaterialInterface*> OtherMaterials;

		// Set of new edges created by clipping polys by plane
		TArray<FUtilEdge3D> ClipEdges;

		for (int32 SectionIndex = 0; SectionIndex < InProcMesh->GetNumSections(); SectionIndex++)
		{
			FProcMeshSection* BaseSection = InProcMesh->GetProcMeshSection(SectionIndex);
			// If we have a section, and it has some valid geom
			if (BaseSection != nullptr && BaseSection->ProcIndexBuffer.Num() > 0 && BaseSection->ProcVertexBuffer.Num() > 0)
			{
				// Compare bounding box of section with slicing plane
				int32 BoxCompare = BoxPlaneCompare(BaseSection->SectionLocalBox, SlicePlane);

				// Box totally clipped, clear section
				if (BoxCompare == -1)
				{
					// Add entire section to other half
					if (bCreateOtherHalf)
					{
						OtherSections.Add(*BaseSection);
						OtherMaterials.Add(InProcMesh->GetMaterial(SectionIndex));
					}

					InProcMesh->ClearMeshSection(SectionIndex);
				}
				// Box totally on one side of plane, leave it alone, do nothing
				else if (BoxCompare == 1)
				{
					// ...
				}
				// Box intersects plane, need to clip some polys!
				else
				{
					// New section for geometry
					FProcMeshSection NewSection;

					// New section for 'other half' geometry (if desired)
					FProcMeshSection* NewOtherSection = nullptr;
					if (bCreateOtherHalf)
					{
						int32 OtherSectionIndex = OtherSections.Add(FProcMeshSection());
						NewOtherSection = &OtherSections[OtherSectionIndex];

						OtherMaterials.Add(InProcMesh->GetMaterial(SectionIndex)); // Remember material for this section
					}

					// Map of base vert index to sliced vert index
					TMap<int32, int32> BaseToSlicedVertIndex;
					TMap<int32, int32> BaseToOtherSlicedVertIndex;

					const int32 NumBaseVerts = BaseSection->ProcVertexBuffer.Num();

					// Distance of each base vert from slice plane
					TArray<float> VertDistance;
					VertDistance.AddUninitialized(NumBaseVerts);

					// Build vertex buffer 
					for (int32 BaseVertIndex = 0; BaseVertIndex < NumBaseVerts; BaseVertIndex++)
					{
						FProcMeshVertex& BaseVert = BaseSection->ProcVertexBuffer[BaseVertIndex];

						// Calc distance from plane
						VertDistance[BaseVertIndex] = SlicePlane.PlaneDot(BaseVert.Position);

						// See if vert is being kept in this section
						if (VertDistance[BaseVertIndex] > 0.f)
						{
							// Copy to sliced v buffer
							int32 SlicedVertIndex = NewSection.ProcVertexBuffer.Add(BaseVert);
							// Update section bounds
							NewSection.SectionLocalBox += BaseVert.Position;
							// Add to map
							BaseToSlicedVertIndex.Add(BaseVertIndex, SlicedVertIndex);
						}
						// Or add to other half if desired
						else if (NewOtherSection != nullptr)
						{
							int32 SlicedVertIndex = NewOtherSection->ProcVertexBuffer.Add(BaseVert);
							NewOtherSection->SectionLocalBox += BaseVert.Position;
							BaseToOtherSlicedVertIndex.Add(BaseVertIndex, SlicedVertIndex);
						}
					}


					// Iterate over base triangles (ie 3 indices at a time)
					for (int32 BaseIndex = 0; BaseIndex < BaseSection->ProcIndexBuffer.Num(); BaseIndex += 3)
					{
						int32 BaseV[3]; // Triangle vert indices in original mesh
						int32* SlicedV[3]; // Pointers to vert indices in new v buffer
						int32* SlicedOtherV[3]; // Pointers to vert indices in new 'other half' v buffer

						// For each vertex..
						for (int32 i = 0; i < 3; i++)
						{
							// Get triangle vert index
							BaseV[i] = BaseSection->ProcIndexBuffer[BaseIndex + i];
							// Look up in sliced v buffer
							SlicedV[i] = BaseToSlicedVertIndex.Find(BaseV[i]);
							// Look up in 'other half' v buffer (if desired)
							if (bCreateOtherHalf)
							{
								SlicedOtherV[i] = BaseToOtherSlicedVertIndex.Find(BaseV[i]);
								// Each base vert _must_ exist in either BaseToSlicedVertIndex or BaseToOtherSlicedVertIndex 
								check((SlicedV[i] != nullptr) != (SlicedOtherV[i] != nullptr));
							}
						}

						// If all verts survived plane cull, keep the triangle
						if (SlicedV[0] != nullptr && SlicedV[1] != nullptr && SlicedV[2] != nullptr)
						{
							NewSection.ProcIndexBuffer.Add(*SlicedV[0]);
							NewSection.ProcIndexBuffer.Add(*SlicedV[1]);
							NewSection.ProcIndexBuffer.Add(*SlicedV[2]);
						}
						// If all verts were removed by plane cull
						else if (SlicedV[0] == nullptr && SlicedV[1] == nullptr && SlicedV[2] == nullptr)
						{
							// If creating other half, add all verts to that
							if (NewOtherSection != nullptr)
							{
								NewOtherSection->ProcIndexBuffer.Add(*SlicedOtherV[0]);
								NewOtherSection->ProcIndexBuffer.Add(*SlicedOtherV[1]);
								NewOtherSection->ProcIndexBuffer.Add(*SlicedOtherV[2]);
							}
						}
						// If partially culled, clip to create 1 or 2 new triangles
						else
						{
							int32 FinalVerts[4];
							int32 NumFinalVerts = 0;

							int32 OtherFinalVerts[4];
							int32 NumOtherFinalVerts = 0;

							FUtilEdge3D NewClipEdge;
							int32 ClippedEdges = 0;

							float PlaneDist[3];
							PlaneDist[0] = VertDistance[BaseV[0]];
							PlaneDist[1] = VertDistance[BaseV[1]];
							PlaneDist[2] = VertDistance[BaseV[2]];

							for (int32 EdgeIdx = 0; EdgeIdx < 3; EdgeIdx++)
							{
								int32 ThisVert = EdgeIdx;

								// If start vert is inside, add it.
								if (SlicedV[ThisVert] != nullptr)
								{
									check(NumFinalVerts < 4);
									FinalVerts[NumFinalVerts++] = *SlicedV[ThisVert];
								}
								// If not, add to other side
								else if (bCreateOtherHalf)
								{
									check(NumOtherFinalVerts < 4);
									OtherFinalVerts[NumOtherFinalVerts++] = *SlicedOtherV[ThisVert];
								}

								// If start and next vert are on opposite sides, add intersection
								int32 NextVert = (EdgeIdx + 1) % 3;

								if ((SlicedV[EdgeIdx] == nullptr) != (SlicedV[NextVert] == nullptr))
								{
									// Find distance along edge that plane is
									float Alpha = -PlaneDist[ThisVert] / (PlaneDist[NextVert] - PlaneDist[ThisVert]);
									// Interpolate vertex params to that point
									FProcMeshVertex InterpVert = InterpolateVert(BaseSection->ProcVertexBuffer[BaseV[ThisVert]], BaseSection->ProcVertexBuffer[BaseV[NextVert]], FMath::Clamp(Alpha, 0.0f, 1.0f));

									// Add to vertex buffer
									int32 InterpVertIndex = NewSection.ProcVertexBuffer.Add(InterpVert);
									// Update bounds
									NewSection.SectionLocalBox += InterpVert.Position;

									// Save vert index for this poly
									check(NumFinalVerts < 4);
									FinalVerts[NumFinalVerts++] = InterpVertIndex;

									// If desired, add to the poly for the other half as well
									if (NewOtherSection != nullptr)
									{
										int32 OtherInterpVertIndex = NewOtherSection->ProcVertexBuffer.Add(InterpVert);
										NewOtherSection->SectionLocalBox += InterpVert.Position;
										check(NumOtherFinalVerts < 4);
										OtherFinalVerts[NumOtherFinalVerts++] = OtherInterpVertIndex;
									}

									// When we make a new edge on the surface of the clip plane, save it off.
									check(ClippedEdges < 2);
									if (ClippedEdges == 0)
									{
										NewClipEdge.V0 = (FVector3f)InterpVert.Position;
									}
									else
									{
										NewClipEdge.V1 = (FVector3f)InterpVert.Position;
									}

									ClippedEdges++;
								}
							}

							// Triangulate the clipped polygon.
							for (int32 VertexIndex = 2; VertexIndex < NumFinalVerts; VertexIndex++)
							{
								NewSection.ProcIndexBuffer.Add(FinalVerts[0]);
								NewSection.ProcIndexBuffer.Add(FinalVerts[VertexIndex - 1]);
								NewSection.ProcIndexBuffer.Add(FinalVerts[VertexIndex]);
							}

							// If we are making the other half, triangulate that as well
							if (NewOtherSection != nullptr)
							{
								for (int32 VertexIndex = 2; VertexIndex < NumOtherFinalVerts; VertexIndex++)
								{
									NewOtherSection->ProcIndexBuffer.Add(OtherFinalVerts[0]);
									NewOtherSection->ProcIndexBuffer.Add(OtherFinalVerts[VertexIndex - 1]);
									NewOtherSection->ProcIndexBuffer.Add(OtherFinalVerts[VertexIndex]);
								}
							}

							//check(ClippedEdges != 1); // Should never clip just one edge of the triangle

							// If we created a new edge, save that off here as well
							//if (ClippedEdges == 2)
							//{
								ClipEdges.Add(NewClipEdge);
							//}
						}
					}

					// Remove 'other' section from array if no valid geometry for it
					if (NewOtherSection != nullptr && (NewOtherSection->ProcIndexBuffer.Num() == 0 || NewOtherSection->ProcVertexBuffer.Num() == 0))
					{
						OtherSections.RemoveAt(OtherSections.Num() - 1);
					}

					// If we have some valid geometry, update section
					if (NewSection.ProcIndexBuffer.Num() > 0 && NewSection.ProcVertexBuffer.Num() > 0)
					{
						// Assign new geom to this section
						InProcMesh->SetProcMeshSection(SectionIndex, NewSection);
					}
					// If we don't, remove this section
					else
					{
						InProcMesh->ClearMeshSection(SectionIndex);
					}
				}
			}
		}

		// Create cap geometry (if some edges to create it from)
		if (CapOption != EProcMeshSliceCapOption::NoCap && ClipEdges.Num() > 0)
		{
			FProcMeshSection CapSection;
			int32 CapSectionIndex = INDEX_NONE;

			// If using an existing section, copy that info first
			if (CapOption == EProcMeshSliceCapOption::UseLastSectionForCap)
			{
				CapSectionIndex = InProcMesh->GetNumSections() - 1;
				CapSection = *InProcMesh->GetProcMeshSection(CapSectionIndex);
			}
			// Adding new section for cap
			else
			{
				CapSectionIndex = InProcMesh->GetNumSections();
			}

			// Project 3D edges onto slice plane to form 2D edges
			TArray<FUtilEdge2D> Edges2D;
			FUtilPoly2DSet PolySet;
			FGeomTools::ProjectEdges(Edges2D, PolySet.PolyToWorld, ClipEdges, SlicePlane);

			// Find 2D closed polygons from this edge soup
			FGeomTools::Buid2DPolysFromEdges(PolySet.Polys, Edges2D, FColor(255, 255, 255, 255));

			// Remember start point for vert and index buffer before adding and cap geom
			int32 CapVertBase = CapSection.ProcVertexBuffer.Num();
			int32 CapIndexBase = CapSection.ProcIndexBuffer.Num();

			// Triangulate each poly
			for (int32 PolyIdx = 0; PolyIdx < PolySet.Polys.Num(); PolyIdx++)
			{
				// Generate UVs for the 2D polygon.
				FGeomTools::GeneratePlanarTilingPolyUVs(PolySet.Polys[PolyIdx], 64.f);

				// Remember start of vert buffer before adding triangles for this poly
				int32 PolyVertBase = CapSection.ProcVertexBuffer.Num();

				// Transform from 2D poly verts to 3D
				Transform2DPolygonTo3D(PolySet.Polys[PolyIdx], PolySet.PolyToWorld, CapSection.ProcVertexBuffer, CapSection.SectionLocalBox);

				// Triangulate this polygon
				TriangulatePoly(CapSection.ProcIndexBuffer, CapSection.ProcVertexBuffer, PolyVertBase, (FVector3f)LocalPlaneNormal);
			}

			// Set geom for cap section
			InProcMesh->SetProcMeshSection(CapSectionIndex, CapSection);

			// If creating new section for cap, assign cap material to it
			if (CapOption == EProcMeshSliceCapOption::CreateNewSectionForCap)
			{
				InProcMesh->SetMaterial(CapSectionIndex, CapMaterial);
			}

			// If creating the other half, copy cap geom into other half sections
			if (bCreateOtherHalf)
			{
				// Find section we want to use for the cap on the 'other half'
				FProcMeshSection* OtherCapSection;
				if (CapOption == EProcMeshSliceCapOption::CreateNewSectionForCap)
				{
					OtherSections.Add(FProcMeshSection());
					OtherMaterials.Add(CapMaterial);
				}
				OtherCapSection = &OtherSections.Last();

				// Remember current base index for verts in 'other cap section'
				int32 OtherCapVertBase = OtherCapSection->ProcVertexBuffer.Num();

				// Copy verts from cap section into other cap section
				for (int32 VertIdx = CapVertBase; VertIdx < CapSection.ProcVertexBuffer.Num(); VertIdx++)
				{
					FProcMeshVertex OtherCapVert = CapSection.ProcVertexBuffer[VertIdx];

					// Flip normal and tangent TODO: FlipY?
					OtherCapVert.Normal *= -1.f;
					OtherCapVert.Tangent.TangentX *= -1.f;

					// Add to other cap v buffer
					OtherCapSection->ProcVertexBuffer.Add(OtherCapVert);
					// And update bounding box
					OtherCapSection->SectionLocalBox += OtherCapVert.Position;
				}

				// Find offset between main cap verts and other cap verts
				int32 VertOffset = OtherCapVertBase - CapVertBase;

				// Copy indices over as well
				for (int32 IndexIdx = CapIndexBase; IndexIdx < CapSection.ProcIndexBuffer.Num(); IndexIdx += 3)
				{
					// Need to offset and change winding
					OtherCapSection->ProcIndexBuffer.Add(CapSection.ProcIndexBuffer[IndexIdx + 0] + VertOffset);
					OtherCapSection->ProcIndexBuffer.Add(CapSection.ProcIndexBuffer[IndexIdx + 2] + VertOffset);
					OtherCapSection->ProcIndexBuffer.Add(CapSection.ProcIndexBuffer[IndexIdx + 1] + VertOffset);
				}
			}
		}

		// Array of sliced collision shapes
		TArray< TArray<FVector> > SlicedCollision;
		TArray< TArray<FVector> > OtherSlicedCollision;

		UBodySetup* ProcMeshBodySetup = InProcMesh->GetBodySetup();

		for (int32 ConvexIndex = 0; ConvexIndex < ProcMeshBodySetup->AggGeom.ConvexElems.Num(); ConvexIndex++)
		{
			FKConvexElem& BaseConvex = ProcMeshBodySetup->AggGeom.ConvexElems[ConvexIndex];

			int32 BoxCompare = BoxPlaneCompare(BaseConvex.ElemBox, SlicePlane);

			// If box totally clipped, add to other half (if desired)
			if (BoxCompare == -1)
			{
				if (bCreateOtherHalf)
				{
					OtherSlicedCollision.Add(BaseConvex.VertexData);
				}
			}
			// If box totally valid, just keep mesh as is
			else if (BoxCompare == 1)
			{
				SlicedCollision.Add(BaseConvex.VertexData);				// LWC_TODO: Perf pessimization
			}
			// Need to actually slice the convex shape
			else
			{
				TArray<FVector> SlicedConvexVerts;
				SliceConvexElem(BaseConvex, SlicePlane, SlicedConvexVerts);
				// If we got something valid, add it
				if (SlicedConvexVerts.Num() >= 4)
				{
					SlicedCollision.Add(SlicedConvexVerts);
				}

				// Slice again to get the other half of the collision, if desired
				if (bCreateOtherHalf)
				{
					TArray<FVector> OtherSlicedConvexVerts;
					SliceConvexElem(BaseConvex, SlicePlane.Flip(), OtherSlicedConvexVerts);
					if (OtherSlicedConvexVerts.Num() >= 4)
					{
						OtherSlicedCollision.Add(OtherSlicedConvexVerts);
					}
				}
			}
		}

		// Update collision of proc mesh
		InProcMesh->SetCollisionConvexMeshes(SlicedCollision);

		// If creating other half, create component now
		if (bCreateOtherHalf)
		{
			// Create new component with the same outer as the proc mesh passed in
			OutOtherHalfProcMesh = NewObject<UProceduralMeshComponent>(InProcMesh->GetOuter());

			// Set transform to match source component
			OutOtherHalfProcMesh->SetWorldTransform(InProcMesh->GetComponentTransform());

			// Add each section of geometry
			for (int32 SectionIndex = 0; SectionIndex < OtherSections.Num(); SectionIndex++)
			{
				OutOtherHalfProcMesh->SetProcMeshSection(SectionIndex, OtherSections[SectionIndex]);
				OutOtherHalfProcMesh->SetMaterial(SectionIndex, OtherMaterials[SectionIndex]);
			}

			// Copy collision settings from input mesh
			OutOtherHalfProcMesh->SetCollisionProfileName(InProcMesh->GetCollisionProfileName());
			OutOtherHalfProcMesh->SetCollisionEnabled(InProcMesh->GetCollisionEnabled());
			OutOtherHalfProcMesh->bUseComplexAsSimpleCollision = InProcMesh->bUseComplexAsSimpleCollision;

			// Assign sliced collision
			OutOtherHalfProcMesh->SetCollisionConvexMeshes(OtherSlicedCollision);

			// Finally register
			OutOtherHalfProcMesh->RegisterComponent();
		}
	}
}

/// <summary>
/// Checks if a box has been intersected by a plane - and if so, which side of the plane it's on
/// Copied from KismetProceduralMeshLibrary.cpp
/// </summary>
/// <param name="InBox"></param>
/// <param name="InPlane"></param>
/// <returns></returns>
int32 UProceduralSkeletalMeshComponent::BoxPlaneCompare(FBox InBox, const FPlane& InPlane)
{
	FVector BoxCenter, BoxExtents;
	InBox.GetCenterAndExtents(BoxCenter, BoxExtents);

	// Find distance of box center from plane
	FVector::FReal BoxCenterDist = InPlane.PlaneDot(BoxCenter);

	// See size of box in plane normal direction
	FVector::FReal BoxSize = FVector::BoxPushOut(InPlane, BoxExtents);

	if (BoxCenterDist > BoxSize)
	{
		return 1;
	}
	else if (BoxCenterDist < -BoxSize)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

/// <summary>
/// Take two static mesh verts and interpolate all values between them 
/// Copied from KismetProceduralMeshLibrary.cpp
/// </summary>
/// <param name="V0"></param>
/// <param name="V1"></param>
/// <param name="Alpha"></param>
/// <returns></returns>
FProcMeshVertex UProceduralSkeletalMeshComponent::InterpolateVert(const FProcMeshVertex& V0, const FProcMeshVertex& V1, float Alpha)
{
	FProcMeshVertex Result;

	// Handle dodgy alpha
	if (FMath::IsNaN(Alpha) || !FMath::IsFinite(Alpha))
	{
		Result = V1;
		return Result;
	}

	Result.Position = FMath::Lerp(V0.Position, V1.Position, Alpha);

	Result.Normal = FMath::Lerp(V0.Normal, V1.Normal, Alpha);

	Result.Tangent.TangentX = FMath::Lerp(V0.Tangent.TangentX, V1.Tangent.TangentX, Alpha);
	Result.Tangent.bFlipTangentY = V0.Tangent.bFlipTangentY; // Assume flipping doesn't change along edge...

	Result.UV0 = FMath::Lerp(V0.UV0, V1.UV0, Alpha);

	Result.Color.R = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.R), float(V1.Color.R), Alpha)), 0, 255);
	Result.Color.G = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.G), float(V1.Color.G), Alpha)), 0, 255);
	Result.Color.B = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.B), float(V1.Color.B), Alpha)), 0, 255);
	Result.Color.A = FMath::Clamp(FMath::TruncToInt(FMath::Lerp(float(V0.Color.A), float(V1.Color.A), Alpha)), 0, 255);

	return Result;
}

/// <summary>
/// Transform triangle from 2D to 3D static-mesh triangle.
/// Copied from KismetProceduralMeshLibrary.cpp
/// </summary>
/// <param name="InPoly"></param>
/// <param name="InMatrix"></param>
/// <param name="OutVerts"></param>
/// <param name="OutBox"></param>
void UProceduralSkeletalMeshComponent::Transform2DPolygonTo3D(const FUtilPoly2D& InPoly, const FMatrix& InMatrix, TArray<FProcMeshVertex>& OutVerts, FBox& OutBox)
{
	FVector3f PolyNormal = (FVector3f)-InMatrix.GetUnitAxis(EAxis::Z);
	FProcMeshTangent PolyTangent(InMatrix.GetUnitAxis(EAxis::X), false);

	for (int32 VertexIndex = 0; VertexIndex < InPoly.Verts.Num(); VertexIndex++)
	{
		const FUtilVertex2D& InVertex = InPoly.Verts[VertexIndex];

		FProcMeshVertex NewVert;

		NewVert.Position = InMatrix.TransformPosition(FVector(InVertex.Pos.X, InVertex.Pos.Y, 0.f));
		NewVert.Normal = (FVector)PolyNormal;
		NewVert.Tangent = PolyTangent;
		NewVert.Color = InVertex.Color;
		NewVert.UV0 = InVertex.UV;

		OutVerts.Add(NewVert);

		// Update bounding box
		OutBox += NewVert.Position;
	}
}

/// <summary>
/// Given a polygon, decompose into triangles.
/// Copied from KismetProceduralMeshLibrary.cpp
/// </summary>
/// <param name="OutTris"></param>
/// <param name="PolyVerts"></param>
/// <param name="VertBase"></param>
/// <param name="PolyNormal"></param>
/// <returns></returns>
bool UProceduralSkeletalMeshComponent::TriangulatePoly(TArray<uint32>& OutTris, const TArray<FProcMeshVertex>& PolyVerts, int32 VertBase, const FVector3f& PolyNormal)
{
	// Can't work if not enough verts for 1 triangle
	int32 NumVerts = PolyVerts.Num() - VertBase;
	if (NumVerts < 3)
	{
		OutTris.Add(0);
		OutTris.Add(2);
		OutTris.Add(1);

		// Return true because poly is already a tri
		return true;
	}

	// Remember initial size of OutTris, in case we need to give up and return to this size
	const int32 TriBase = OutTris.Num();

	// Init array of vert indices, in order. We'll modify this
	TArray<int32> VertIndices;
	VertIndices.AddUninitialized(NumVerts);
	for (int VertIndex = 0; VertIndex < NumVerts; VertIndex++)
	{
		VertIndices[VertIndex] = VertBase + VertIndex;
	}

	// Keep iterating while there are still vertices
	while (VertIndices.Num() >= 3)
	{
		// Look for an 'ear' triangle
		bool bFoundEar = false;
		for (int32 EarVertexIndex = 0; EarVertexIndex < VertIndices.Num(); EarVertexIndex++)
		{
			// Triangle is 'this' vert plus the one before and after it
			const int32 AIndex = (EarVertexIndex == 0) ? VertIndices.Num() - 1 : EarVertexIndex - 1;
			const int32 BIndex = EarVertexIndex;
			const int32 CIndex = (EarVertexIndex + 1) % VertIndices.Num();

			const FProcMeshVertex& AVert = PolyVerts[VertIndices[AIndex]];
			const FProcMeshVertex& BVert = PolyVerts[VertIndices[BIndex]];
			const FProcMeshVertex& CVert = PolyVerts[VertIndices[CIndex]];

			// Check that this vertex is convex (cross product must be positive)
			const FVector3f ABEdge = FVector3f(BVert.Position - AVert.Position);
			const FVector3f ACEdge = FVector3f(CVert.Position - AVert.Position);
			const float TriangleDeterminant = (ABEdge ^ ACEdge) | PolyNormal;
			if (TriangleDeterminant > 0.f)
			{
				continue;
			}

			bool bFoundVertInside = false;
			// Look through all verts before this in array to see if any are inside triangle
			for (int32 VertexIndex = 0; VertexIndex < VertIndices.Num(); VertexIndex++)
			{
				const FProcMeshVertex& TestVert = PolyVerts[VertIndices[VertexIndex]];

				if (VertexIndex != AIndex &&
					VertexIndex != BIndex &&
					VertexIndex != CIndex &&
					FGeomTools::PointInTriangle((FVector3f)AVert.Position, (FVector3f)BVert.Position, (FVector3f)CVert.Position, (FVector3f)TestVert.Position))
				{
					bFoundVertInside = true;
					break;
				}
			}

			// Triangle with no verts inside - its an 'ear'! 
			if (!bFoundVertInside)
			{
				OutTris.Add(VertIndices[AIndex]);
				OutTris.Add(VertIndices[CIndex]);
				OutTris.Add(VertIndices[BIndex]);

				// And remove vertex from polygon
				VertIndices.RemoveAt(EarVertexIndex);

				bFoundEar = true;
				break;
			}
		}

		// If we couldn't find an 'ear' it indicates something is bad with this polygon - discard triangles and return.
		if (!bFoundEar)
		{
			OutTris.SetNum(TriBase, EAllowShrinking::Yes);
			return false;
		}
	}

	return true;
}

/// <summary>
/// Util to slice a convex hull with a plane
/// Copied from KismetProceduralMeshLibrary.cpp
/// </summary>
/// <param name="InConvex"></param>
/// <param name="SlicePlane"></param>
/// <param name="OutConvexVerts"></param>
void UProceduralSkeletalMeshComponent::SliceConvexElem(const FKConvexElem& InConvex, const FPlane& SlicePlane, TArray<FVector>& OutConvexVerts)
{
	// Get set of planes that make up hull
	TArray<FPlane> ConvexPlanes;
	InConvex.GetPlanes(ConvexPlanes);

	if (ConvexPlanes.Num() >= 4)
	{
		// Add on the slicing plane (need to flip as it culls geom in the opposite sense to our geom culling code)
		ConvexPlanes.Add(SlicePlane.Flip());

		// Create output convex based on new set of planes
		FKConvexElem SlicedElem;
		bool bSuccess = SlicedElem.HullFromPlanes(ConvexPlanes, InConvex.VertexData);
		if (bSuccess)
		{
			OutConvexVerts = SlicedElem.VertexData;
		}
	}
}

/// <summary>
/// Creates a new skeletal mesh component using a reference skeletal mesh component
/// </summary>
/// <param name="OriginalComponent"></param>
/// <returns></returns>
UProceduralSkeletalMeshComponent* UProceduralSkeletalMeshComponent::DuplicateSelf()
{
	AActor* Owner = GetOwner();

	// Validate inputs
	if (!Owner)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid input to DuplicateSkeletalMeshComponent: OriginalComponent or TargetOwner is null."));
		return nullptr;
	}

	// Create a new skeletal mesh component as a duplicate
	UProceduralSkeletalMeshComponent* DuplicatedComponent = NewObject<UProceduralSkeletalMeshComponent>(Owner);

	if (!DuplicatedComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to create duplicate skeletal mesh component."));
		return nullptr;
	}

	// Attach duplicated component to the owner
	DuplicatedComponent->RegisterComponent();
	DuplicatedComponent->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetIncludingScale);

	// Copy properties from original component to duplicated component
	// Copy the skeletal mesh
	DuplicatedComponent->SetSkeletalMesh(GetSkeletalMeshAsset());

	// Copy the materials
	for (int32 i = 0; i < GetNumMaterials(); ++i)
	{
		DuplicatedComponent->SetMaterial(i, GetMaterial(i));
	}

	// Copy transform properties
	//DuplicatedComponent->SetWorldTransform(GetComponentTransform());

	// Copy animation settings
	//DuplicatedComponent->SetAnimationMode(GetAnimationMode());

	// Pose the procedural skeletal mesh
	// Not supported by skeletal meshes by default - could probably be its own plugin tbh
	DuplicatedComponent->Pose(GetComponentSpaceTransforms());

	//DuplicatedComponent->InitAnim(true);

	/*DuplicatedComponent->SetRefPoseOverride(SourceTransforms);
	DuplicatedComponent->RefreshBoneTransforms();
	DuplicatedComponent->SetAnimation(NULL);
	DuplicatedComponent->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	DuplicatedComponent->InitAnim(true);*/

	//DuplicatedComponent->AnimationData = OriginalComponent->AnimationData;
	//DuplicatedComponent->SetAnimInstanceClass(OriginalComponent->AnimClass);

	//if (OriginalComponent->GetAnimInstance())
	//{
		//DuplicatedComponent->SetAnimInstanceClass(OriginalComponent->GetAnimInstance()->GetClass());
	//}

	// Copy physics settings
	DuplicatedComponent->SetSimulatePhysics(IsSimulatingPhysics());
	DuplicatedComponent->SetCollisionEnabled(GetCollisionEnabled());
	DuplicatedComponent->SetCollisionProfileName(GetCollisionProfileName());

	// Copy visibility settings
	DuplicatedComponent->SetVisibility(IsVisible());
	DuplicatedComponent->SetHiddenInGame(bHiddenInGame);

	// Copy mobility
	DuplicatedComponent->SetMobility(Mobility);

	// Optionally copy other properties as needed...

	UE_LOG(LogTemp, Log, TEXT("Successfully duplicated SkeletalMeshComponent."));

	return DuplicatedComponent;
}

/// <summary>
/// Update the pose of this procedural skeletal mesh using component space bone transforms
/// </summary>
/// <returns></returns>
void UProceduralSkeletalMeshComponent::Pose(TArray<FTransform> ComponentSpaceBoneTransforms)
{
	GetEditableComponentSpaceTransforms() = ComponentSpaceBoneTransforms;

	bNeedToFlipSpaceBaseBuffers = true;
	FinalizeBoneTransform();

	UpdateBounds();

	if (IsInGameThread())
	{
		MarkRenderTransformDirty();
		MarkRenderDynamicDataDirty();
	}
}

/// <summary>
/// Update the collision of the underlying skeletal mesh after a slice occurs
/// </summary>
/// <param name="NewSlicedMesh"></param>
/// <param name="Position"></param>
/// <param name="Normal"></param>
/// <param name="KeepAboveSlice"></param>
void UProceduralSkeletalMeshComponent::SetCollisionForSkeletalMesh(USkeletalMeshComponent* NewSlicedMesh, const FVector& Position, const FVector& Normal, bool KeepAboveSlice)
{
	DisableCollisionAndPhysicsForSlicedBones(NewSlicedMesh, Position, Normal, KeepAboveSlice);

	//NewSlicedMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);  // Enable both queries (traces) and physics
	NewSlicedMesh->SetCollisionProfileName("SlicedRagdoll");

	NewSlicedMesh->SetSimulatePhysics(true);

	//NewSlicedMesh->SetPhysicsLinearVelocity(FrameVelocity, false);

	FVector RandomImpulse = Normal * 600.0f * (KeepAboveSlice ? -1 : 1);

	NewSlicedMesh->AddImpulse(RandomImpulse, NAME_None, true);
}

/// <summary>
/// Disables collision on bones that are either above or below the cut
/// </summary>
/// <param name="SkeletalMeshComponent"></param>
/// <param name="SlicePosition"></param>
/// <param name="SliceNormal"></param>
/// <param name="KeepAboveSlice"></param>
void UProceduralSkeletalMeshComponent::DisableCollisionAndPhysicsForSlicedBones(USkeletalMeshComponent* SkeletalMeshComponent, const FVector& SlicePosition, const FVector& SliceNormal, bool KeepAboveSlice)
{
	if (!ProceduralMesh || !SkeletalMeshComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid input to DisableCollisionAndPhysicsForSlicedBones."));
		return;
	}

	// Iterate over all bones in the skeletal mesh
	const int32 NumBones = SkeletalMeshComponent->GetNumBones();

	for (int32 BoneIndex = 0; BoneIndex < NumBones; ++BoneIndex)
	{
		// Get the position of the bone in world space
		FVector BonePosition = SkeletalMeshComponent->GetBoneLocation(SkeletalMeshComponent->GetBoneName(BoneIndex));

		// Determine which side of the slice the bone is on
		float Distance = FVector::DotProduct((BonePosition - SlicePosition).GetSafeNormal(), SliceNormal);

		// keep bones above the slice and this bone is below (or vice versa), disable collision and physics
		if ((KeepAboveSlice && Distance > 0.0f) || (!KeepAboveSlice && Distance < 0.0f))
			continue;

		if(SkeletalMeshComponent->IsA(USkeletalMeshComponent::StaticClass()))
			((USkeletalMeshComponent*)SkeletalMeshComponent)->BreakConstraint(FVector::ZeroVector, BonePosition, SkeletalMeshComponent->GetBoneName(BoneIndex));

		FBodyInstance* ComponentBodyInstance = SkeletalMeshComponent->GetBodyInstance(SkeletalMeshComponent->GetBoneName(BoneIndex));

		if (!ComponentBodyInstance)
			continue;

		TArray<FPhysicsShapeHandle> Shapes;

		int32 ShapeCount = ComponentBodyInstance->GetAllShapes_AssumesLocked(Shapes);

		for (int ShapeIndex = 0; ShapeIndex < ShapeCount; ++ShapeIndex)
			ComponentBodyInstance->SetShapeCollisionEnabled(ShapeIndex, ECollisionEnabled::NoCollision, false);

		ComponentBodyInstance->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//ComponentBodyInstance->SetEnableGravity(false);
		//ComponentBodyInstance->SetInstanceSimulatePhysics(false);
	}
}

void UProceduralSkeletalMeshComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!Deformed)
	{
		// Frame velocity is in cm/s
		FrameVelocity = (GetOwner()->GetActorLocation() - LastPosition);
		return;
	}

	MorphProceduralMeshToBones(ProceduralMesh, SkeletalProceduralMeshData);
}

/// <summary>
/// Builds a convex collision hull for a procecural mesh and adds its vertices to the body setup of the procedural mesh 
/// </summary>
/// <param name="ProceduralMesh"></param>
void UProceduralSkeletalMeshComponent::BuildConvexCollisionHull(UProceduralMeshComponent* ReferenceProceduralMesh)
{
	// Create a new body setup for the procedural mesh
	ReferenceProceduralMesh->bUseComplexAsSimpleCollision = false;  // Use custom collision setup (not complex)

	int SectionCount = ReferenceProceduralMesh->GetNumSections();

	if (SectionCount == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Proc mesh has no sections!"));
		return;
	}

	TArray<FProcMeshVertex> MeshVertices;

	int i = 0;

	while(i < SectionCount)
	{
		const FProcMeshSection* Section = ReferenceProceduralMesh->GetProcMeshSection(i);

		++i;

		// Sections can be null if they contain no vertices for some reason
		if (!Section)
			continue;

		MeshVertices.Append(Section->ProcVertexBuffer);
	}

	TArray<FVector> ConvexHullVertices;

	QuickHull3D(MeshVertices, ConvexHullVertices);

	// Add the convex hull to the body setup
	ReferenceProceduralMesh->AddCollisionConvexMesh(ConvexHullVertices);

	// Recreate the physics state for the procedural mesh to apply the new collision
	ReferenceProceduralMesh->RecreatePhysicsState();
}

FConvexVolume UProceduralSkeletalMeshComponent::CreateConvexVolumeFromMesh(const TArray<FVector>& InVertices, const TArray<int32>& InIndices)
{
	// Reserve space for as many planes as there are triangles:
	//   each triangle -> 1 plane.
	TArray<FPlane> Planes;
	Planes.Reserve(InIndices.Num() / 3);

	// Process each face (triangle) in the mesh
	for (int32 i = 0; i < InIndices.Num(); i += 3)
	{
		// Grab the indices for this triangle
		const int32 I0 = InIndices[i];
		const int32 I1 = InIndices[i + 1];
		const int32 I2 = InIndices[i + 2];

		// Retrieve the actual vertex positions
		const FVector& V0 = InVertices[I0];
		const FVector& V1 = InVertices[I1];
		const FVector& V2 = InVertices[I2];

		// Compute the normal for this face (assuming outward winding)
		// Cross(V1 - V0, V2 - V0) → normal in a right-handed sense 
		FVector FaceNormal = FVector::CrossProduct(V1 - V0, V2 - V0).GetSafeNormal();

		// Dot(Normal, V0) gives how far along Normal the plane is from the origin.
		// Typically, we store plane as Plane(Normal, W = -Dot(Normal, SomePointOnPlane))
		// so that "inside" is where the plane dot is <= 0 (assuming normal faces outward).
		const float Distance = FVector::DotProduct(FaceNormal, V0);
		const float W = -Distance;

		// Construct the plane for this face
		FPlane FacePlane(FaceNormal, W);

		// Add this plane to our array
		Planes.Add(FacePlane);
	}

	// Now we have one plane per triangle.
	// Initialize the convex volume from these planes.
	FConvexVolume ConvexVolume;

	ConvexVolume.Planes = Planes;
	ConvexVolume.Init();

	// Return the convex volume
	return ConvexVolume;
}


/// <summary>
/// Generates a quick convex hull using a collection of vertices
/// </summary>
/// <param name="Vertices"></param>
/// <param name="ConvexHull"></param>
void UProceduralSkeletalMeshComponent::QuickHull3D(const TArray<FProcMeshVertex>& Vertices, TArray<FVector>& ConvexHull)
{
	if (Vertices.Num() < 4)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not enough vertices to form a 3D convex hull!"));
		return;
	}

	// Step 1: Find the extremal points in the vertex set (min/max X, Y, Z)
	FProcMeshVertex MinX = Vertices[0], MaxX = Vertices[0];
	FProcMeshVertex MinY = Vertices[0], MaxY = Vertices[0];
	FProcMeshVertex MinZ = Vertices[0], MaxZ = Vertices[0];

	for (const FProcMeshVertex& Vertex : Vertices)
	{
		if (Vertex.Position.X < MinX.Position.X) MinX = Vertex;
		if (Vertex.Position.X > MaxX.Position.X) MaxX = Vertex;
		if (Vertex.Position.Y < MinY.Position.Y) MinY = Vertex;
		if (Vertex.Position.Y > MaxY.Position.Y) MaxY = Vertex;
		if (Vertex.Position.Z < MinZ.Position.Z) MinZ = Vertex;
		if (Vertex.Position.Z > MaxZ.Position.Z) MaxZ = Vertex;
	}

	// Step 2: Create initial tetrahedron (4 extreme points)
	TArray<FProcMeshVertex> InitialHull = { MinX, MaxX, MinY, MinZ };

	FVector LastVertPosition = FVector::ZeroVector;

	// Step 3: Iterate over remaining points, add them to the convex hull if they are outside
	// Also, enforce a minimum distance between vertices 
	for (const FProcMeshVertex& Vertex : Vertices)
	{
		// Very simple vertex reduction method that checks the distance between the next vertex and the last recorded vertex
		if (FVector::Dist(LastVertPosition, Vertex.Position) < 5)
			continue;
			
		if (!IsOutside(InitialHull[0], InitialHull[1], InitialHull[2], Vertex) &&
			!IsOutside(InitialHull[0], InitialHull[1], InitialHull[3], Vertex) &&
			!IsOutside(InitialHull[0], InitialHull[2], InitialHull[3], Vertex) &&
			!IsOutside(InitialHull[1], InitialHull[2], InitialHull[3], Vertex))
		{
			continue;
		}

		// Point is outside, add it to the hull
		ConvexHull.Add(Vertex.Position);

		LastVertPosition = Vertex.Position;
	}

	UE_LOG(LogTemp, Warning, TEXT("Generated convex hull of %i vertices"), ConvexHull.Num());

	// The ConvexHull array now contains the vertices that form the convex hull
}

// Calculate the signed volume of a tetrahedron formed by points a, b, c, and d
float UProceduralSkeletalMeshComponent::TetrahedronVolume(const FProcMeshVertex& a, const FProcMeshVertex& b, const FProcMeshVertex& c, const FProcMeshVertex& d)
{
	return FVector::DotProduct(a.Position - d.Position, FVector::CrossProduct(b.Position - d.Position, c.Position - d.Position)) / 6.0f;
}

// Calculate the distance of a point from a plane defined by a triangle
float UProceduralSkeletalMeshComponent::PointPlaneDistance(const FVector& a, const FVector& b, const FVector& c, const FVector& point)
{
	FVector normal = FVector::CrossProduct(b - a, c - a).GetSafeNormal();

	return FVector::DotProduct(normal, point - a);
}

// Check if a point is on the correct side of a plane formed by the triangle (a, b, c)
bool UProceduralSkeletalMeshComponent::IsOutside(const FProcMeshVertex& a, const FProcMeshVertex& b, const FProcMeshVertex& c, const FProcMeshVertex& point)
{
	return PointPlaneDistance(a.Position, b.Position, c.Position, point.Position) > 0.0f;
}

/// <summary>
/// Map all sections of the skeletal mesh to their own procedural mesh sections
/// </summary>
/// <param name="ProceduralMesh"></param>
/// <param name="SkeletalMeshToMap"></param>
/// <param name="SkeletalProceduralMeshData"></param>
void UProceduralSkeletalMeshComponent::BuildSectionedSkeletonMap(UProceduralMeshComponent* ReferenceProceduralMesh, FProceduralSkeletalMeshData& ReferenceSkeletalProceduralMeshData)
{
	int SectionCount = ReferenceProceduralMesh->GetNumSections();

	TArray<FProceduralSkeletalMeshVertexSection>& Sections = ReferenceSkeletalProceduralMeshData.Sections;

	Sections.SetNum(SectionCount);

	const TArray<FTransform>& InitialBoneTransforms = GetComponentSpaceTransforms();

	ReferenceSkeletalProceduralMeshData.InitialBoneTransforms = InitialBoneTransforms;

	TArray<FVector> SkeletalVertices;

	const int32 LODIndex = 0;

	// Generate a global map of points in space to associated skinning info that can be used by all sections
	// Allows for the reskinning of meshes that have many connected sections

	GetLocalSkeletalMeshVertexLocations(SkeletalVertices, LODIndex);

	const FSkeletalMeshRenderData* RenderData = GetSkeletalMeshRenderData();

	TMap<FProceduralMeshVertexCoord, FSkeletalVertexMapItem> GlobalSkinningMap;

	const FSkeletalMeshLODRenderData& LOD = RenderData->LODRenderData[LODIndex];

	for (int i = 0; i < LOD.RenderSections.Num(); ++i)
	{
		const FSkinWeightVertexBuffer& SkinWeightBuffer = LOD.SkinWeightVertexBuffer;
		const FSkelMeshRenderSection& RenderSection = LOD.RenderSections[i];
		const int32 SectionOffset = RenderSection.BaseVertexIndex;

		TArray<uint16> BoneMap = RenderSection.BoneMap;

		for (uint32 j = 0; j < RenderSection.NumVertices; ++j)
		{
			int SkeletalIndex = SectionOffset + j;

			FSkeletalVertexMapItem MapItem;

			uint32 MaxInfluences = SkinWeightBuffer.GetMaxBoneInfluences();

			const FVector& VertexPosition = SkeletalVertices[SkeletalIndex];

			MapItem.BoneInfluences.SetNum(MaxInfluences);
			MapItem.SourceSkeletonVertex = SkeletalIndex;
			MapItem.InitialVertexPosition = VertexPosition;

			float WeightSum = 0.0f;

			// Retrieve bone influences for this vertex from the skin weight buffer
			for (uint32 InfluenceIndex = 0; InfluenceIndex < MaxInfluences; ++InfluenceIndex)
			{
				uint32 LODBoneIndex = SkinWeightBuffer.GetBoneIndex(SkeletalIndex, InfluenceIndex);
				uint32 BoneIndex = BoneMap[LODBoneIndex];

				const FTransform& BoneTransform = InitialBoneTransforms[BoneIndex];

				FVector LocalVertexPosition = BoneTransform.InverseTransformPosition(VertexPosition);

				uint16 BoneWeight = SkinWeightBuffer.GetBoneWeight(SkeletalIndex, InfluenceIndex);

				if (BoneWeight > 0)
				{
					const float& Weight = static_cast<float>(BoneWeight) * (1.0f / 65535);
					// Convert weight to float (0.0 to 1.0) and create FRawBoneInfluence
					FProceduralMeshBoneInfluence BoneInfluence(
						BoneIndex,
						Weight,
						LocalVertexPosition
					);

					WeightSum += Weight;

					MapItem.BoneInfluences[InfluenceIndex] = BoneInfluence;
				}
				else
					MapItem.BoneInfluences[InfluenceIndex] = FProceduralMeshBoneInfluence(INDEX_NONE, 0.0f, FVector::ZeroVector);
			}

			GlobalSkinningMap.Add(FProceduralMeshVertexCoord(VertexPosition), MapItem);
		}
	}

	TArray<FGlobalSkinningMapData> AllSkinningItems;
	AllSkinningItems.Reserve(GlobalSkinningMap.Num());

	for (TPair<FProceduralMeshVertexCoord, FSkeletalVertexMapItem>& KVP : GlobalSkinningMap)
	{
		FGlobalSkinningMapData Data;

		Data.Position = KVP.Key.ToVector();        // the 3D position
		Data.MapItem = KVP.Value;

		AllSkinningItems.Add(Data);
	}

	FBox OctreeBounds = GetSkeletalMeshAsset()->GetBounds().GetBox();

	// You can slightly expand 'Bounds' if you have big scale
	FGlobalSkinningOctree GlobalSkinningOctree(OctreeBounds.GetCenter(), OctreeBounds.GetExtent().GetMax());

	// Insert all items
	for (auto& Item : AllSkinningItems)
		GlobalSkinningOctree.AddElement(Item);

	for (int i = 0; i < SectionCount; ++i)
		Sections[i] = GenerateVertexToBoneMapping(ReferenceProceduralMesh, InitialBoneTransforms, GlobalSkinningMap, GlobalSkinningOctree, i);
}

/// <summary>
/// Map a procedural mesh to the vertices of the associated skeletal mesh
/// </summary>
/// <param name="ProceduralMesh"></param>
/// <param name="SkeletalMeshToMap"></param>
/// <param name="Section"></param>
/// <param name="SearchRadiusSquared"></param>
/// <returns></returns>
FProceduralSkeletalMeshVertexSection UProceduralSkeletalMeshComponent::GenerateVertexToBoneMapping(UProceduralMeshComponent* ReferenceProceduralMesh, const TArray<FTransform>& InitialBoneTransforms, const TMap<FProceduralMeshVertexCoord, FSkeletalVertexMapItem>& GlobalSkinningMap, const FGlobalSkinningOctree& GlobalSkinningOctree, int Section)
{
	// Create a map to store the mapping from the sliced vertex index to the skeletal vertex index and bone index
	FProceduralSkeletalMeshVertexSection VertexToBoneMap;

	// Retrieve procedural mesh section
	FProcMeshSection* MappedMeshSection = ReferenceProceduralMesh->GetProcMeshSection(Section);

	if (!MappedMeshSection)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid input data for generating dismemberment bone mapping."));
		return VertexToBoneMap;
	}

	TArray<FProcMeshVertex>& Vertices = MappedMeshSection->ProcVertexBuffer;

	// Ensure input skeletal mesh is valid
	if (Vertices.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid skeletal mesh or sliced vertices input."));
		return VertexToBoneMap;
	}

	VertexToBoneMap.VertexMap.SetNum(Vertices.Num());

	// Parallelize the vertex mapping process
	// Runs on background threads
	ParallelFor(Vertices.Num(), [&](int32 VertexIndex)
		{
			const FVector& VertexPosition = Vertices[VertexIndex].Position;

			TArray<FProceduralMeshBoneInfluence> VertexBoneInfluences;

			int32 NearestSkeletalIndex = INDEX_NONE;
			float MinDistSquared = FLT_MAX;  // Initialize with search radius squared

			const FSkeletalVertexMapItem* Item = GlobalSkinningMap.Find(FProceduralMeshVertexCoord(VertexPosition));

			// If the global skinning map contains an entry for this vertex, use it
			if (Item)
			{
				FSkeletalVertexMapItem VertexMapItem = *Item;

				VertexMapItem.InitialVertexPosition = VertexPosition;

				for (FProceduralMeshBoneInfluence& BoneInfluence : VertexMapItem.BoneInfluences)
					if (BoneInfluence.BoneIndex < 65535)
						BoneInfluence.LocalVertexPosition = InitialBoneTransforms[BoneInfluence.BoneIndex].InverseTransformPosition(VertexPosition);

				VertexToBoneMap.VertexMap[VertexIndex] = VertexMapItem;
				return;
			}

			float SearchRadius = 0.5f; // start with search radius of 0.5 cm, expand from there
			FBoxCenterAndExtent QueryBox(VertexPosition, FVector(SearchRadius));

			// 2) We'll collect all potential neighbors in a TArray
			TArray<FGlobalSkinningMapData> Candidates;

			Candidates.Reserve(16);  // guess

			const int expansionCountMax = 10;

			int expansionCount = 0;

			while (Candidates.Num() == 0)
			{
				GlobalSkinningOctree.FindElementsWithBoundsTest(QueryBox,
					// A lambda that returns 'true' if we want to collect this element
					[&Candidates](const FGlobalSkinningMapData& Element)
					{
						Candidates.Add(Element);
					}
				);

				// Double search radius until candidates are found 
				if (Candidates.Num() == 0)
				{
					if (expansionCount == expansionCountMax)
					{
						return;
					}

					SearchRadius *= 2.f;
					QueryBox = FBoxCenterAndExtent(VertexPosition, FVector(SearchRadius));

					++expansionCount;
				}
			}

			// 3) Among these candidates, pick the nearest by distance
			FGlobalSkinningMapData* BestData = nullptr;
			float BestDistSqr = FLT_MAX;

			for (FGlobalSkinningMapData& Candidate : Candidates)
			{
				float DistSqr = FVector::DistSquared(VertexPosition, Candidate.Position);
				if (DistSqr < BestDistSqr)
				{
					BestDistSqr = DistSqr;
					BestData = &Candidate;
				}
			}

			FSkeletalVertexMapItem NearestSkinningData = BestData->MapItem;

			// Now BestData should hold the nearest neighbor from the subset that was in that bounding region
			// If your search radius was large enough, you (likely) found the truly nearest item.

			NearestSkinningData.InitialVertexPosition = VertexPosition;

			for (FProceduralMeshBoneInfluence& BoneInfluence : NearestSkinningData.BoneInfluences)
				if (BoneInfluence.BoneIndex < 65535)
					BoneInfluence.LocalVertexPosition = InitialBoneTransforms[BoneInfluence.BoneIndex].InverseTransformPosition(VertexPosition);

			VertexToBoneMap.VertexMap[VertexIndex] = NearestSkinningData;
		}, EParallelForFlags::BackgroundPriority);

	return VertexToBoneMap;  // Return the map of vertex to bone mappings
}

/// <summary>
/// Retrieves all procedural mesh data for the specified procedural mesh component
/// </summary>
/// <param name="ProcMesh"></param>
/// <returns></returns>
FProceduralMeshData UProceduralSkeletalMeshComponent::GetProceduralMeshData(UProceduralMeshComponent* ProcMesh)
{
	FProceduralMeshData ProcMeshData;

	int32 NumSections = ProcMesh->GetNumSections();

	ProcMeshData.Sections.SetNum(NumSections);

	for (int32 Section = 0; Section < NumSections; ++Section)
	{
		FProcMeshSection* ProcMeshSection = ProcMesh->GetProcMeshSection(Section);
		FProceduralMeshSection& ProcMeshSectionData = ProcMeshData.Sections[Section];

		TArray<uint32> TriangleIndices = ProcMeshSection->ProcIndexBuffer;
		TArray<FProcMeshVertex> Vertices = ProcMeshSection->ProcVertexBuffer;

		int32 VertexCount = Vertices.Num();
		int32 TriangleIndexCount = TriangleIndices.Num();

		// Pre-allocate indices
		ProcMeshSectionData.Indices.SetNum(TriangleIndexCount);

		// Pre-allocate vertex data
		ProcMeshSectionData.Tangents.SetNum(VertexCount);
		ProcMeshSectionData.Normals.SetNum(VertexCount);
		ProcMeshSectionData.Colors.SetNum(VertexCount);
		ProcMeshSectionData.UVs.SetNum(VertexCount);
		ProcMeshSectionData.Vertices.SetNum(VertexCount);

		// Copy vertex data
		for (int32 VertexIndex = 0; VertexIndex < VertexCount; ++VertexIndex)
		{
			FProcMeshVertex& ProcMeshVertex = Vertices[VertexIndex];

			ProcMeshSectionData.Tangents[VertexIndex] = ProcMeshVertex.Tangent;
			ProcMeshSectionData.Normals[VertexIndex] = ProcMeshVertex.Normal;
			ProcMeshSectionData.UVs[VertexIndex] = ProcMeshVertex.UV0;
			ProcMeshSectionData.Vertices[VertexIndex] = ProcMeshVertex.Position;
			ProcMeshSectionData.Colors[VertexIndex] = ProcMeshVertex.Color;
		}

		// Copy index data
		for (int32 TriangleIndex = 0; TriangleIndex < TriangleIndexCount; ++TriangleIndex)
			ProcMeshSectionData.Indices[TriangleIndex] = TriangleIndices[TriangleIndex];

		// Apply section data
		ProcMeshData.Sections[Section] = ProcMeshSectionData;
	}

	return ProcMeshData;
}

float UProceduralSkeletalMeshComponent::CalculateTriangleArea(const FVector& A, const FVector& B, const FVector& C)
{
	return FVector::CrossProduct(B - A, C - A).Size() / 2.0f;
}

void UProceduralSkeletalMeshComponent::FloodFill(FProceduralMeshVertexCoord InitialCoord, const TMap<FProceduralMeshVertexCoord, TSet<FProceduralMeshVertexCoord>>& VertexToVertexMap, TSet<FProceduralMeshVertexCoord>& Surface, TSet<FProceduralMeshVertexCoord>& Visited)
{
	TQueue<FProceduralMeshVertexCoord> Queue;

	Queue.Enqueue(InitialCoord);

	while (!Queue.IsEmpty())
	{
		FProceduralMeshVertexCoord CurrentCoord;

		Queue.Dequeue(CurrentCoord);

		if (Visited.Contains(CurrentCoord))
			continue;

		Visited.Add(CurrentCoord);
		Surface.Add(CurrentCoord);

		if (!VertexToVertexMap.Contains(CurrentCoord))
			continue;

		for (FProceduralMeshVertexCoord NeighborVertex : VertexToVertexMap[CurrentCoord])
		{
			if (!Visited.Contains(NeighborVertex))
			{
				Queue.Enqueue(NeighborVertex);
			}
		}
	}
}

void UProceduralSkeletalMeshComponent::SeparateMeshIntoSurfaces(
	UProceduralMeshComponent* Component,
	TArray<FProceduralMeshData>& OutputMeshes,
	int32& LargestSurfaceIndex)
{
	// Clear outputs
	OutputMeshes.Empty();
	LargestSurfaceIndex = -1;

	// ---------------------------------------------------------------
	// 1) Gather all sections from the input ProceduralMeshComponent
	// ---------------------------------------------------------------
	FProceduralMeshData InputData = GetProceduralMeshData(Component);
	const int32 NumSourceSections = InputData.Sections.Num();

	// ---------------------------------------------------------------
	// 2) Build a GLOBAL adjacency map across all sections
	//    Key = FProceduralMeshVertexCoord
	//    Value = TSet of neighbor coordinates
	// ---------------------------------------------------------------
	TMap<FProceduralMeshVertexCoord, TSet<FProceduralMeshVertexCoord>> GlobalAdjacencyMap;

	// Helper lambda to add a neighbor to the adjacency map
	auto AddNeighbor = [&](const FProceduralMeshVertexCoord& A, const FProceduralMeshVertexCoord& B)
		{
			if (!GlobalAdjacencyMap.Contains(A))
			{
				TSet<FProceduralMeshVertexCoord> NewSet;
				NewSet.Add(B);
				GlobalAdjacencyMap.Add(A, NewSet);
			}
			else
			{
				GlobalAdjacencyMap[A].Add(B);
			}
		};

	// Loop over all sections, gather all triangles, and add adjacency among the 3 coords in each tri
	for (int32 SectionIndex = 0; SectionIndex < NumSourceSections; ++SectionIndex)
	{
		const FProceduralMeshSection& Sec = InputData.Sections[SectionIndex];
		const TArray<FVector>& Vertices = Sec.Vertices;
		const TArray<int32>& Indices = Sec.Indices;

		const int32 NumTris = Indices.Num() / 3;
		for (int32 Tri = 0; Tri < NumTris; ++Tri)
		{
			int32 i0 = Indices[3 * Tri + 0];
			int32 i1 = Indices[3 * Tri + 1];
			int32 i2 = Indices[3 * Tri + 2];

			FProceduralMeshVertexCoord C0(Vertices[i0]);
			FProceduralMeshVertexCoord C1(Vertices[i1]);
			FProceduralMeshVertexCoord C2(Vertices[i2]);

			// Adjacency is "undirected" among the three coords
			AddNeighbor(C0, C1);
			AddNeighbor(C0, C2);

			AddNeighbor(C1, C0);
			AddNeighbor(C1, C2);

			AddNeighbor(C2, C0);
			AddNeighbor(C2, C1);
		}
	}

	// ---------------------------------------------------------------
	// 3) Single Flood Fill across the GLOBAL adjacency map
	//    We'll find sets of coords (TSet<FProceduralMeshVertexCoord>)
	//    where each set is physically connected
	// ---------------------------------------------------------------
	TSet<FProceduralMeshVertexCoord> Visited;
	TArray<TSet<FProceduralMeshVertexCoord>> Surfaces;

	// We can get the unique coords by taking the keys of GlobalAdjacencyMap
	TArray<FProceduralMeshVertexCoord> AllCoords;
	GlobalAdjacencyMap.GetKeys(AllCoords);

	for (const FProceduralMeshVertexCoord& Coord : AllCoords)
	{
		if (Visited.Contains(Coord))
		{
			continue;
		}

		// Flood fill from Coord
		TSet<FProceduralMeshVertexCoord> NewSurface;
		FloodFill(Coord, GlobalAdjacencyMap, NewSurface, Visited);

		// If you prefer to skip tiny surfaces with < 3 coords, do so:
		if (NewSurface.Num() >= 3)
		{
			Surfaces.Add(NewSurface);
		}
	}

	// Surfaces now contains N physically distinct sets of vertex coords.

	// ---------------------------------------------------------------
	// 4) Reconstruct each surface into an FProceduralMeshData
	//    BUT preserve the original "NumSourceSections"
	//    so each output chunk has the same # of material sections.
	// ---------------------------------------------------------------
	// For convenience, gather references to normals/UVs/colors/tangents
	TArray<TArray<FVector>>       AllVertices;
	TArray<TArray<FVector>>       AllNormals;
	TArray<TArray<FVector2D>>     AllUVs;
	TArray<TArray<FColor>>        AllColors;
	TArray<TArray<FProcMeshTangent>> AllTangents;

	AllVertices.SetNum(NumSourceSections);
	AllNormals.SetNum(NumSourceSections);
	AllUVs.SetNum(NumSourceSections);
	AllColors.SetNum(NumSourceSections);
	AllTangents.SetNum(NumSourceSections);

	for (int32 S = 0; S < NumSourceSections; ++S)
	{
		AllVertices[S] = InputData.Sections[S].Vertices;
		AllNormals[S] = InputData.Sections[S].Normals;
		AllUVs[S] = InputData.Sections[S].UVs;
		AllColors[S] = InputData.Sections[S].Colors;
		AllTangents[S] = InputData.Sections[S].Tangents;
	}

	// Prepare output array
	OutputMeshes.SetNum(Surfaces.Num());

	// Each output chunk will have the same number of sections as the original
	for (int32 ChunkIndex = 0; ChunkIndex < Surfaces.Num(); ++ChunkIndex)
	{
		OutputMeshes[ChunkIndex].Sections.SetNum(NumSourceSections);
	}

	// We also need to know how to quickly see if a vertex belongs to a surface.
	// A standard approach: for each surface, store a TSet of coords for membership checking.
	// We already have that as Surfaces[ChunkIndex]. We'll just check membership with Contains().

	// We'll do one pass over each original section's triangles, and see if all 3 coords belong to a surface.
	// If so, we add that tri to that chunk's corresponding section.

	// For local indexing in the new chunk sections, we need a map:
	//   (SurfaceIndex, SectionIndex) => Map<Coord, LocalVertexIndex>
	// That way we can re‐use the new local index if we see the same Coord again in a subsequent triangle.
	TArray<TArray<TMap<FProceduralMeshVertexCoord, int32>>> SurfaceSectionVertMaps;
	SurfaceSectionVertMaps.SetNum(Surfaces.Num());
	for (int32 c = 0; c < Surfaces.Num(); ++c)
	{
		SurfaceSectionVertMaps[c].SetNum(NumSourceSections);
	}

	// Re‐iterate each original section's triangles
	for (int32 S = 0; S < NumSourceSections; ++S)
	{
		const FProceduralMeshSection& Sec = InputData.Sections[S];
		const TArray<FVector>& Vertices = Sec.Vertices;
		const TArray<int32>& Indices = Sec.Indices;

		const int32 NumTris = Indices.Num() / 3;
		for (int32 t = 0; t < NumTris; ++t)
		{
			int32 i0 = Indices[3 * t + 0];
			int32 i1 = Indices[3 * t + 1];
			int32 i2 = Indices[3 * t + 2];

			FProceduralMeshVertexCoord C0(Vertices[i0]);
			FProceduralMeshVertexCoord C1(Vertices[i1]);
			FProceduralMeshVertexCoord C2(Vertices[i2]);

			// For each surface, check if all 3 coords belong to it.
			// Usually, a triangle can only belong to exactly one surface if the mesh is truly split.
			// But we’ll do a loop for clarity. If you want a faster approach, build a coord->surface index map.
			for (int32 ChunkIndex = 0; ChunkIndex < Surfaces.Num(); ++ChunkIndex)
			{
				const TSet<FProceduralMeshVertexCoord>& SurfaceCoords = Surfaces[ChunkIndex];

				if (SurfaceCoords.Contains(C0) &&
					SurfaceCoords.Contains(C1) &&
					SurfaceCoords.Contains(C2))
				{
					// This tri belongs to chunk #ChunkIndex, in section #S
					FProceduralMeshSection& OutSec = OutputMeshes[ChunkIndex].Sections[S];
					TMap<FProceduralMeshVertexCoord, int32>& CoordToLocal = SurfaceSectionVertMaps[ChunkIndex][S];

					// Helper to get (or add) a local vertex index
					auto GetOrCreateLocalIndex = [&](const FProceduralMeshVertexCoord& Coord, int32 OriginalIndex)
						{
							if (int32* FoundLocal = CoordToLocal.Find(Coord))
							{
								return *FoundLocal;
							}
							// Not found => create new local vertex
							int32 NewLocalIdx = OutSec.Vertices.Num();

							OutSec.Vertices.Add(AllVertices[S][OriginalIndex]);
							OutSec.Normals.Add(AllNormals[S][OriginalIndex]);
							OutSec.UVs.Add(AllUVs[S][OriginalIndex]);
							OutSec.Colors.Add(AllColors[S][OriginalIndex]);
							OutSec.Tangents.Add(AllTangents[S][OriginalIndex]);

							CoordToLocal.Add(Coord, NewLocalIdx);
							return NewLocalIdx;
						};

					int32 l0 = GetOrCreateLocalIndex(C0, i0);
					int32 l1 = GetOrCreateLocalIndex(C1, i1);
					int32 l2 = GetOrCreateLocalIndex(C2, i2);

					// Finally add the triangle
					OutSec.Indices.Add(l0);
					OutSec.Indices.Add(l1);
					OutSec.Indices.Add(l2);

					// Once found, we break because no need to check the next surface.
					break;
				}
			}
		}
	}

	// Now we have OutputMeshes[i], each having NumSourceSections sections,
	// with triangles only from the coords in Surfaces[i].

	// ---------------------------------------------------------------
	// 5) Identify which output chunk is largest
	// ---------------------------------------------------------------
	LargestSurfaceIndex = -1;
	float LargestVolume = 0.f;
	for (int32 i = 0; i < OutputMeshes.Num(); ++i)
	{
		float RegionBounds = CalculateRegionSize(OutputMeshes[i]);
		if (RegionBounds > LargestVolume)
		{
			LargestVolume = RegionBounds;
			LargestSurfaceIndex = i;
		}
	}
}


/// <summary>
/// Calculate the area of a bounding box containing all vertices
/// </summary>
/// <param name="Region"></param>
/// <returns></returns>
float UProceduralSkeletalMeshComponent::CalculateRegionSize(const FProceduralMeshData& Region)
{
	FVector MinBounds(FVector::ZeroVector);
	FVector MaxBounds(FVector::ZeroVector);
	bool boundsInitialized = false;

	for (const FProceduralMeshSection& section : Region.Sections) {
		for (const FVector& vertex : section.Vertices) {
			if (!boundsInitialized) {
				MinBounds = vertex;
				MaxBounds = vertex;
				boundsInitialized = true;
			}
			else {
				MinBounds = MinBounds.ComponentMin(vertex);
				MaxBounds = MaxBounds.ComponentMax(vertex);
			}
		}
	}

	return (MaxBounds - MinBounds).Size();
}

/// <summary>
/// Retrieves an edge by id for a specific triangle index
/// </summary>
/// <param name="triangleIndex"></param>
/// <param name="edgeIndex"></param>
/// <param name="vertLookup"></param>
/// <returns></returns>
FProceduralMeshTriEdge UProceduralSkeletalMeshComponent::GetEdgeForTriangle(int triangleIndex, int edgeIndex, const TArray<int>& vertLookup)
{
	FProceduralMeshTriEdge edge;

	switch (edgeIndex) {
	case 0:
		edge.A = vertLookup[triangleIndex];
		edge.B = vertLookup[triangleIndex + 1];
		break;
	case 1:
		edge.A = vertLookup[triangleIndex + 1];
		edge.B = vertLookup[triangleIndex + 2];
		break;
	case 2:
		edge.A = vertLookup[triangleIndex + 2];
		edge.B = vertLookup[triangleIndex];
		break;
	}
	edge.Orient(); // Ensure consistent edge ordering
	return edge;
}

/// <summary>
/// Helper function to remove incomplete edges
/// </summary>
/// <param name="surfaceMap"></param>
void UProceduralSkeletalMeshComponent::RemoveIncompleteEdges(FProceduralMeshSurfaceMap& surfaceMap) {
	TArray<FProceduralMeshTriEdge> edgesToRemove;

	for (const auto& edgePair : surfaceMap.EdgeToTris) {
		if (edgePair.Value.B == -1) {
			edgesToRemove.Add(edgePair.Key);
		}
	}

	for (const FProceduralMeshTriEdge& edge : edgesToRemove) {
		surfaceMap.EdgeIndexes.Remove(edge);
		surfaceMap.EdgeToTris.Remove(edge);
	}
}

/// Retrieves all skeletal mesh vertex locations in component space
/// </summary>
/// <param name="Mesh"></param>
/// <param name="Locations"></param>
/// <param name="LODIndex"></param>
/// <returns></returns>
bool UProceduralSkeletalMeshComponent::GetLocalSkeletalMeshVertexLocations(TArray<FVector>& Locations, int32 LODIndex)
{
	const FSkeletalMeshRenderData* RenderData = GetSkeletalMeshRenderData();

	if (!RenderData)
	{
		return false;
	}

	const FSkeletalMeshLODRenderData& LOD = RenderData->LODRenderData[LODIndex];
	const FSkinWeightVertexBuffer& Buffer = LOD.SkinWeightVertexBuffer;

	TArray<FMatrix44f> CacheToLocals;

	GetCurrentRefToLocalMatrices(CacheToLocals, LODIndex);

	if (GetCPUSkinningEnabled())
	{
		// CPU skinning
		TArray<FFinalSkinVertex> SkinnedVertices;

		GetCPUSkinnedVertices(SkinnedVertices, LODIndex);

		Locations.Empty();
		Locations.AddUninitialized(SkinnedVertices.Num());

		for (int32 i = 0; i < SkinnedVertices.Num(); ++i)
		{
			Locations[i] = FVector(SkinnedVertices[i].Position);
		}
	}
	else
	{
		// GPU skinning
		TArray<UE::Math::TVector<float>> SkinnedPositions;

		ComputeSkinnedPositions(this, SkinnedPositions, CacheToLocals, LOD, Buffer);

		Locations.Empty();
		Locations.AddUninitialized(SkinnedPositions.Num());

		for (int32 i = 0; i < SkinnedPositions.Num(); ++i)
		{
			Locations[i] = FVector(SkinnedPositions[i]);
		}
	}

	return true;
}


/// <summary>
/// Retrieve section data a portion of a skeletal mesh
/// </summary>
/// <param name="SkeletalMesh"></param>
/// <param name="SectionIndex"></param>
/// <returns></returns>
FProceduralMeshSection UProceduralSkeletalMeshComponent::GetProceduralMeshSectionData(int32 SectionIndex)
{
	FProceduralMeshSection MeshData;

	if (!GetSkeletalMeshAsset())
		return MeshData;

	const FSkeletalMeshRenderData* SkMeshRenderData = GetSkeletalMeshRenderData();
	const FSkeletalMeshLODRenderData& DataArray = SkMeshRenderData->LODRenderData[0];

	if (SectionIndex > DataArray.RenderSections.Num() - 1)
		return MeshData;

	const int32 NumSourceVertices = DataArray.RenderSections[SectionIndex].NumVertices;
	const int32 BaseVertexIndex = DataArray.RenderSections[SectionIndex].BaseVertexIndex;

	FSkinWeightVertexBuffer& SkinWeights = *GetSkinWeightBuffer(0);

	for (int32 i = 0; i < NumSourceVertices; i++)
	{
		const int32 VertexIndex = i + BaseVertexIndex;

		const FVector3f SkinnedVectorPos = USkeletalMeshComponent::GetSkinnedVertexPosition(this, VertexIndex, DataArray, SkinWeights);

		MeshData.Vertices.Add(FVector(DataArray.StaticVertexBuffers.PositionVertexBuffer.VertexPosition(i)));

		// Get static normals and tangents
 		const FVector3f ZTangentStatic = DataArray.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(VertexIndex);
		const FVector3f XTangentStatic = DataArray.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentX(VertexIndex);

		// Add normals and tangents to cache
		MeshData.Normals.Add(FVector(ZTangentStatic.X, ZTangentStatic.Y, ZTangentStatic.Z));
		MeshData.Tangents.Add(FProcMeshTangent(FVector(XTangentStatic.X, XTangentStatic.Y, XTangentStatic.Z), false));

		// Get UVs and add to cache
		const FVector2f SourceUVs = DataArray.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(VertexIndex, 0);

		MeshData.UVs.Add(FVector2D(SourceUVs.X, SourceUVs.Y));

		// Add dummy vertex colors
		MeshData.Colors.Add(FColor(0, 0, 0, 255));


		// Extract bone indices from the skin weights (for LOD 0)
		// Extract bone indices for deformations
		MeshData.Indices.Add(DataArray.SkinWeightVertexBuffer.GetBoneIndex(i, 0));
	}

	MeshData.BaseVertexIndex = BaseVertexIndex;

	return MeshData;
}

// Example function: Convert a UStaticMesh at LODIndex to an FMeshDescription.
FMeshDescription UProceduralSkeletalMeshComponent::ConvertStaticMeshToMeshDescription(UStaticMesh* StaticMesh, int32 LODIndex)
{
	// Prepare an empty MeshDescription, and register standard attributes (positions, normals, UVs, etc.)
	FMeshDescription MeshDescription;
	FStaticMeshAttributes Attributes(MeshDescription);
	Attributes.Register();

	// Validate input
	if (!StaticMesh || !StaticMesh->GetRenderData())
	{
		UE_LOG(LogTemp, Warning, TEXT("ConvertStaticMeshToMeshDescription: Invalid StaticMesh or no render data."));
		return MeshDescription;
	}

	const FStaticMeshRenderData* RenderData = StaticMesh->GetRenderData();
	if (LODIndex < 0 || LODIndex >= RenderData->LODResources.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("ConvertStaticMeshToMeshDescription: LODIndex out of range."));
		return MeshDescription;
	}

	// Grab the LOD resources
	const FStaticMeshLODResources& LODResources = RenderData->LODResources[LODIndex];

	// Fetch the position, static mesh, and index buffers
	const FPositionVertexBuffer& PositionBuffer = LODResources.VertexBuffers.PositionVertexBuffer;
	const FStaticMeshVertexBuffer& StaticMeshVertexBuffer = LODResources.VertexBuffers.StaticMeshVertexBuffer;
	const FRawStaticIndexBuffer& IndexBuffer = LODResources.IndexBuffer;

	const uint32 NumVertices = PositionBuffer.GetNumVertices();
	const int32 NumSections = LODResources.Sections.Num();

	if (NumVertices == 0 || NumSections == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ConvertStaticMeshToMeshDescription: No vertices or no sections in this LOD."));
		return MeshDescription;
	}

	// Create one PolygonGroupID per static mesh section
	// so materials/indexing are preserved.
	TArray<FPolygonGroupID> PolygonGroupIDs;
	PolygonGroupIDs.Reserve(NumSections);

	for (int32 SectionIndex = 0; SectionIndex < NumSections; ++SectionIndex)
	{
		FPolygonGroupID PGID = MeshDescription.CreatePolygonGroup();
		PolygonGroupIDs.Add(PGID);
	}

	// Get attribute references for easy access
	TVertexAttributesRef<FVector3f> VertexPositions = Attributes.GetVertexPositions();
	TVertexInstanceAttributesRef<FVector3f> Normals = Attributes.GetVertexInstanceNormals();
	TVertexInstanceAttributesRef<FVector3f> Tangents = Attributes.GetVertexInstanceTangents();
	TVertexInstanceAttributesRef<float> BinormalSigns = Attributes.GetVertexInstanceBinormalSigns();
	TVertexInstanceAttributesRef<FVector4f> Colors = Attributes.GetVertexInstanceColors();
	TVertexInstanceAttributesRef<FVector2f> UVs = Attributes.GetVertexInstanceUVs();

	// 1) Create all FVertexIDs for the positions
	TArray<FVertexID> VertexIDMap;
	VertexIDMap.SetNumUninitialized(NumVertices);

	for (uint32 i = 0; i < NumVertices; i++)
	{
		FVertexID NewVertID = MeshDescription.CreateVertex();
		VertexIDMap[i] = NewVertID;

		const FVector3f Pos = PositionBuffer.VertexPosition(i);
		VertexPositions[NewVertID] = Pos;
	}

	// 2) Now process each section, reading its triangles from the LOD's IndexBuffer
	for (int32 SectionIndex = 0; SectionIndex < NumSections; ++SectionIndex)
	{
		const FStaticMeshSection& Section = LODResources.Sections[SectionIndex];

		// This section draws triangles from IndexStart..IndexStart + NumTriangles*3
		const uint32 FirstIndex = Section.FirstIndex;
		const uint32 NumFaces = Section.NumTriangles; // # of triangles
		const FPolygonGroupID PolygonGroupID = PolygonGroupIDs[SectionIndex];

		for (uint32 FaceIdx = 0; FaceIdx < NumFaces; FaceIdx++)
		{
			const int32 BaseIndex = FirstIndex + FaceIdx * 3;

			// Indices might be 16-bit or 32-bit, but FIndexArrayView handles that under the hood
			const int32 i0 = IndexBuffer.GetIndex(BaseIndex + 0);
			const int32 i1 = IndexBuffer.GetIndex(BaseIndex + 1);
			const int32 i2 = IndexBuffer.GetIndex(BaseIndex + 2);

			// Map them to our newly created VertexIDs
			const FVertexID V0 = VertexIDMap[i0];
			const FVertexID V1 = VertexIDMap[i1];
			const FVertexID V2 = VertexIDMap[i2];

			// 2a) Create one FVertexInstanceID per corner
			const FVertexInstanceID VI0 = MeshDescription.CreateVertexInstance(V0);
			const FVertexInstanceID VI1 = MeshDescription.CreateVertexInstance(V1);
			const FVertexInstanceID VI2 = MeshDescription.CreateVertexInstance(V2);

			// (Optional) Fill per-vertex-instance attributes: Normal, Tangent, UV, Color, etc.
			auto SetVertexInstanceData = [&](FVertexInstanceID VI, int32 SrcIndex)
				{
					// Normals & Tangents
					const FVector4f TangentX = StaticMeshVertexBuffer.VertexTangentX(SrcIndex);
					const FVector4f TangentZ = StaticMeshVertexBuffer.VertexTangentZ(SrcIndex);
					Normals[VI] = (FVector3f)TangentZ;
					Tangents[VI] = (FVector3f)TangentX;

					// Binormal sign indicates handedness
					const FVector4f TangentY = StaticMeshVertexBuffer.VertexTangentY(SrcIndex);
					const float Sign = GetBasisDeterminantSign(
						(FVector)TangentX,
						(FVector)TangentY,
						(FVector)TangentZ
					);
					BinormalSigns[VI] = Sign;

					// UV: multiple channels possible, here we just sample channel 0
					if (StaticMeshVertexBuffer.GetNumTexCoords() > 0)
					{
						FVector2f UV0 = StaticMeshVertexBuffer.GetVertexUV(SrcIndex, 0);
						UVs.Set(VI, 0, UV0);
					}
					
					// DGAF about colors
					Colors[VI] = FVector4f(1, 1, 1, 1); // default white if no color data
				};

			// Apply data
			SetVertexInstanceData(VI0, i0);
			SetVertexInstanceData(VI1, i1);
			SetVertexInstanceData(VI2, i2);

			// 2b) Create the polygon (triangle) referencing these three vertex instances
			TArray<FVertexInstanceID> TriangleVerts;
			TriangleVerts.SetNum(3);
			TriangleVerts[0] = VI0;
			TriangleVerts[1] = VI1;
			TriangleVerts[2] = VI2;

			MeshDescription.CreatePolygon(PolygonGroupID, TriangleVerts);
		}
	}

	// Now MeshDescription should contain all vertices & triangles
	// (One polygon group per static mesh section).

	return MeshDescription;
}

/**
* "Slices" the skeletal mesh assigned to this component asynchronously using the MeshOps AsyncMeshBoolean function 
*/
void UProceduralSkeletalMeshComponent::Carve(UStaticMesh* CarveStaticMesh, FTransform WorldSpaceTransform, float SimplificationAngleTolerance, float WindingTolerance)
{
	if (!Deformed)
		UpdateFromSkeletalMesh();

	Deformed = true;

	UE::Geometry::FDynamicMesh3 BaseDynamicMesh = GetDynamicMesh();
	UE::Geometry::FDynamicMesh3 CarveMesh;

	// Convert the world space transform to mesh space
	SetWorldSpaceTransformToMeshSpace(WorldSpaceTransform);

	FMeshDescriptionToDynamicMesh Converter;

	const FMeshDescription& Description = ConvertStaticMeshToMeshDescription(CarveStaticMesh, 0);

	Converter.Convert(&Description, CarveMesh);

	UE::Geometry::FDynamicMesh3 Result;

	CarveDynamicMesh(BaseDynamicMesh, CarveMesh, WorldSpaceTransform, Result, SimplificationAngleTolerance, WindingTolerance);

	SetVisibility(false);

	CopyDynamicMeshIntoProceduralMeshComponent(Result);

	// Combine all cap sections
	CombineCapSections(0);

	BuildSectionedSkeletonMap(ProceduralMesh, SkeletalProceduralMeshData);

	ProceduralMesh->SetVisibility(true);
	ProceduralMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	RefreshProceduralMeshMaterials(ProceduralMesh);
}

/**
* Carves a chunk out a procedural mesh using a subtractive boolean operation and attempts to separate smaller surfaces into procedural mesh components with collision i.e. for dismemberment
*/
FProceduralSkeletalMeshSeparationCarve UProceduralSkeletalMeshComponent::CarveWithSeparation(UStaticMesh* CarveStaticMesh, FTransform WorldSpaceTransform, float SimplificationAngleTolerance, float WindingTolerance)
{
	if (!Deformed)
		UpdateFromSkeletalMesh();

	Deformed = true;

	FProceduralSkeletalMeshSeparationCarve SeparatedResult;

	UE::Geometry::FDynamicMesh3 BaseDynamicMesh = GetDynamicMesh();
	UE::Geometry::FDynamicMesh3 SlicedResult;
	UE::Geometry::FDynamicMesh3 CarveMesh;

	// Convert the world space transform to mesh space for accurate deformations of the mesh
	SetWorldSpaceTransformToMeshSpace(WorldSpaceTransform);

	FMeshDescriptionToDynamicMesh Converter;

	const FMeshDescription& Description = ConvertStaticMeshToMeshDescription(CarveStaticMesh, 0);

	Converter.Convert(&Description, CarveMesh);

	UE::Geometry::FDynamicMesh3 Result;

	CarveDynamicMesh(BaseDynamicMesh, CarveMesh, WorldSpaceTransform, Result, SimplificationAngleTolerance, WindingTolerance);

	// Set the visibility of the underlying skeletal mesh to false
	SetVisibility(false);

	// Copy the carved mesh data into the procdural mesh component
	CopyDynamicMeshIntoProceduralMeshComponent(Result);

	// Combine all cap sections
	CombineCapSections(0);

	// Separate isolated surfaces of the procedural mesh into their own procedural mesh components with collision
	// The largest of the surfaces is retained as the procedural mesh for this component
	FProceduralSkeletalMeshSeparation Separation = SeparateProceduralMesh();

	SeparatedResult.Separations = Separation.Separations;

	// Skin the main procedural mesh component to the skeleton 
	BuildSectionedSkeletonMap(ProceduralMesh, SkeletalProceduralMeshData);

	ProceduralMesh->SetVisibility(true);
	ProceduralMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	RefreshProceduralMeshMaterials(ProceduralMesh);

	return SeparatedResult;
}

/// <summary>
/// Converts a world space transform to mesh space. Converting to component space isn't enough,
/// as the rotation of this component relative to its actor will change where a point sits on the mesh itself
/// </summary>
/// <param name="WorldSpaceTransform"></param>
///
void UProceduralSkeletalMeshComponent::SetWorldSpaceTransformToMeshSpace(FTransform& WorldSpaceTransform)
{
	// Get the component transform
	FTransform ComponentTransform = GetComponentTransform();

	// Calculate the relative position
	FVector MeshSpacePosition = ComponentTransform.InverseTransformPosition(WorldSpaceTransform.GetLocation());

	// Calculate the relative rotation
	FQuat MeshSpaceRotation = ComponentTransform.GetRotation().Inverse() * WorldSpaceTransform.GetRotation();

	// Set the modified transform
	WorldSpaceTransform.SetLocation(MeshSpacePosition);
	WorldSpaceTransform.SetRotation(MeshSpaceRotation);
}

void UProceduralSkeletalMeshComponent::BeginPlay()
{
	Super::BeginPlay();

	// Only create the procedural mesh once
	if (ProceduralMesh)
		return;

	ProceduralMesh = CreateEmptyProceduralMesh();

	// Retrieve all materials from the underlying component
	Materials.Empty();
	int32 NumMats = GetNumMaterials();
	for (int32 i = 0; i < NumMats; ++i)
	{
		if (UMaterialInterface* Mat = GetMaterial(i))
		{
			ProceduralMesh->SetMaterial(i, Mat);
			Materials.Add(Mat);
		}
	}

	// Add end cap material to end of materials array
	if (CapMaterial)
		Materials.Add(CapMaterial);

	LastPosition = GetOwner()->GetActorLocation();
}

/**
* Performs a separating carve at the specified bone
*/
FProceduralSkeletalMeshSeparationCarve UProceduralSkeletalMeshComponent::CarveBoneWithSeparation(UStaticMesh* CarveMesh, FRotator CarveRotation, FVector CarveScale, FName BoneName)
{
	FVector BoneWorldLocation = GetBoneLocation(BoneName);
	FTransform BoneCarveTransform = FTransform(CarveRotation, BoneWorldLocation, CarveScale);

	return CarveWithSeparation(CarveMesh, BoneCarveTransform);
}

/**
* Performs a carve at the specified bone
*/
void UProceduralSkeletalMeshComponent::CarveBone(UStaticMesh* CarveMesh, FRotator CarveRotation, FVector CarveScale, FName BoneName)
{
	FVector BoneWorldLocation = GetBoneLocation(BoneName);
	FTransform BoneCarveTransform = FTransform(CarveRotation, BoneWorldLocation, CarveScale);

	Carve(CarveMesh, BoneCarveTransform);
}

/// <summary>
/// Separates smaller surfaces from a procedural mesh component into their own procedural mesh components with collision
/// </summary>
/// <param name="Component"></param>
/// <returns></returns>
FProceduralSkeletalMeshSeparation UProceduralSkeletalMeshComponent::SeparateProceduralMesh(UProceduralMeshComponent* Component)
{
	FProceduralSkeletalMeshSeparation Result;

	TArray<FProceduralMeshData> SeparatedMeshData;
	int LargestMeshIndex;

	SeparateMeshIntoSurfaces(Component, SeparatedMeshData, LargestMeshIndex);

	if (LargestMeshIndex == -1)
		return Result;

	const FProceduralMeshData& LargestMeshData = SeparatedMeshData[LargestMeshIndex];

	BuildProceduralMesh(LargestMeshData, Component);

	for (int SeparationIndex = 0; SeparationIndex < SeparatedMeshData.Num(); ++SeparationIndex)
	{
		if (SeparationIndex == LargestMeshIndex)
			continue;

		const FProceduralMeshData& MeshData = SeparatedMeshData[SeparationIndex];

		UProceduralMeshComponent* Separation = CreateProceduralMeshComponent(MeshData);

		Result.Separations.Push(Separation);
	}

	return Result;
}

/// <summary>
/// Performs a separation on the base procedural mesh component
/// </summary>
/// <returns></returns>
FProceduralSkeletalMeshSeparation UProceduralSkeletalMeshComponent::SeparateProceduralMesh()
{
	return SeparateProceduralMesh(ProceduralMesh);
}


/// <summary>
/// Creates a procedural mesh component with physics using input procedural mesh data
/// </summary>
/// <param name="MeshData"></param>
/// <returns></returns>
UProceduralMeshComponent* UProceduralSkeletalMeshComponent::CreateProceduralMeshComponent(const FProceduralMeshData& MeshData)
{
	FString NameStr = "ProcMesh" + FString::FromInt(++SpawnedProceduralMeshes);

	UE_LOG(LogTemp, Warning, TEXT("Created procedural mesh separation: %s"), *NameStr);

	UProceduralMeshComponent* NewProceduralMesh = NewObject<UProceduralMeshComponent>(GetOwner(), FName(*NameStr));

	NewProceduralMesh->SetWorldTransform(GetComponentTransform());
	NewProceduralMesh->RegisterComponent();

	BuildProceduralMesh(MeshData, NewProceduralMesh);
	RefreshProceduralMeshMaterials(NewProceduralMesh);

	BuildConvexCollisionHull(NewProceduralMesh);

	NewProceduralMesh->UpdateBounds();
	NewProceduralMesh->SetVisibility(true);

	NewProceduralMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	NewProceduralMesh->SetSimulatePhysics(true);

	return NewProceduralMesh;
}

/// <summary>
/// Copies procedural mesh data into a procedural mesh component
/// </summary>
/// <param name="ProceduralMeshData"></param>
/// <param name="Component"></param>
void UProceduralSkeletalMeshComponent::BuildProceduralMesh(const FProceduralMeshData& ProceduralMeshDataToBuild, UProceduralMeshComponent* Component)
{
	Component->ClearAllMeshSections();

	for (int32 SectionIndex = 0; SectionIndex < ProceduralMeshDataToBuild.Sections.Num(); ++SectionIndex)
	{
		const FProceduralMeshSection& SectionData = ProceduralMeshDataToBuild.Sections[SectionIndex];
		const TArray<FVector> Vertices = SectionData.Vertices;
		const TArray<int32> Triangles = SectionData.Indices;
		const TArray<FVector> Normals = SectionData.Normals;
		const TArray<FProcMeshTangent> Tangents = SectionData.Tangents;
		const TArray<FVector2D> UVs = SectionData.UVs;
		const TArray<FColor> Colors = SectionData.Colors;

		Component->CreateMeshSection(SectionIndex, Vertices, Triangles, Normals, UVs, Colors, Tangents, false);
	}

	RefreshProceduralMeshMaterials(Component);
}

/// <summary>
/// Helper function to consistently perform a subtractive boolean operation on a dynamic mesh (which is later converted to a procedural mesh)
/// </summary>
/// <param name="DynamicMesh"></param>
/// <param name="CarveMesh"></param>
/// <param name="RelativeTransform"></param>
/// <param name="Result"></param>
/// <param name="SimplificationAngleTolerance"></param>
/// <param name="WindingTolerance"></param>
void UProceduralSkeletalMeshComponent::CarveDynamicMesh(UE::Geometry::FDynamicMesh3& DynamicMesh, UE::Geometry::FDynamicMesh3& CarveMesh, FTransform RelativeTransform, UE::Geometry::FDynamicMesh3& Result, float SimplificationAngleTolerance, float WindingTolerance)
{
	//UE_LOG(LogTemp, Warning, TEXT("RELATIVE POSITION: %s"), *RelativePosition.ToCompactString());
	//DrawDebugLine(GetWorld(), WorldTransform.GetLocation(), WorldTransform.GetLocation() + FVector::UpVector * 5.f, FColor::Red, false, 5.0f, 0, 5.0f);
	//DrawDebugLine(GetWorld(), SkeletalMesh->GetComponentTransform().GetLocation() + RelativePosition, SkeletalMesh->GetComponentTransform().GetLocation() + RelativePosition + FVector::UpVector * 5.f, FColor::Green, false, 5.0f, 0, 5.0f);

	UE::Geometry::FMeshBoolean MeshBoolean(&DynamicMesh, FTransform(), &CarveMesh, RelativeTransform, &Result, UE::Geometry::FMeshBoolean::EBooleanOp::Difference);

	MeshBoolean.bCollapseDegenerateEdgesOnCut = true;
	MeshBoolean.bWeldSharedEdges = false;
	MeshBoolean.bSimplifyAlongNewEdges = SimplificationAngleTolerance > 0;
	MeshBoolean.SimplificationAngleTolerance = SimplificationAngleTolerance;
	MeshBoolean.bTrackAllNewEdges = false;
	MeshBoolean.bPreserveOverlayUVs = true;
	MeshBoolean.bPreserveVertexUVs = true;
	MeshBoolean.bPutResultInInputSpace = true;
	MeshBoolean.bPreserveTriangleGroups = false;
	MeshBoolean.bPopulateSecondMeshGroupMap = false;
	MeshBoolean.DegenerateEdgeTolFactor = 0.4f;
	MeshBoolean.WindingThreshold = WindingTolerance;
	MeshBoolean.SnapTolerance = 0.00025f;
	MeshBoolean.Compute();
}

/// <summary>
/// Copies dynamic mesh data into the base procedural mesh component
/// </summary>
/// <param name="DynamicMesh"></param>
void UProceduralSkeletalMeshComponent::CopyDynamicMeshIntoProceduralMeshComponent(const FDynamicMesh3& DynamicMesh)
{
	// Prepare arrays to store mesh data for each section
	TArray<TArray<FVector>> VerticesArray;
	TArray<TArray<int32>> TrianglesArray;
	TArray<TArray<FVector>> NormalsArray;
	TArray<TArray<FVector2D>> UVsArray;

	int32 MaxGroupID = DynamicMesh.MaxGroupID();

	// Resize arrays based on the maximum group ID to avoid maps
	VerticesArray.SetNum(MaxGroupID + 1);
	TrianglesArray.SetNum(MaxGroupID + 1);
	NormalsArray.SetNum(MaxGroupID + 1);
	UVsArray.SetNum(MaxGroupID + 1);

	// Retrieve the Normal and UV overlays if they exist
	const UE::Geometry::FDynamicMeshNormalOverlay* NormalOverlay = DynamicMesh.HasAttributes() ? DynamicMesh.Attributes()->PrimaryNormals() : nullptr;
	const UE::Geometry::FDynamicMeshUVOverlay* UVOverlay = DynamicMesh.HasAttributes() ? DynamicMesh.Attributes()->PrimaryUV() : nullptr;

	// Loop through each triangle and process based on group ID
	for (int32 TriangleID : DynamicMesh.TriangleIndicesItr())
	{
		int32 GroupID = DynamicMesh.GetTriangleGroup(TriangleID);

		// Get vertices of the triangle
		UE::Geometry::FIndex3i Triangle = DynamicMesh.GetTriangle(TriangleID);

		TArray<FVector>& Vertices = VerticesArray[GroupID];
		TArray<int32>& Triangles = TrianglesArray[GroupID];
		TArray<FVector>& Normals = NormalsArray[GroupID];
		TArray<FVector2D>& UVs = UVsArray[GroupID];

		// Add vertices and keep track of their indices within this group
		int32 IndexOffset = Vertices.Num();

		for (int32 i = 0; i < 3; i++)
		{
			FVector3d VertexPos = DynamicMesh.GetVertex(Triangle[i]);
			Vertices.Add(FVector(VertexPos.X, VertexPos.Y, VertexPos.Z));
			Triangles.Add(IndexOffset + i);

			// If normals are available, retrieve them
			if (NormalOverlay && NormalOverlay->TriangleHasElement(TriangleID, Triangle[i]))
			{
				FVector3f Normal = NormalOverlay->GetElement(Triangle[i]);
				Normals.Add(FVector(Normal.X, Normal.Y, Normal.Z));
			}
			else
			{
				Normals.Add(FVector::UpVector);  // Default normal if not provided
			}

			// If UVs are available, retrieve them
			if (UVOverlay)
			{
				FVector2f UV = UVOverlay->GetElement(Triangle[i]);
				UVs.Add(FVector2D(UV.X, UV.Y));
			}
			else
			{
				UVs.Add(FVector2D::ZeroVector);  // Default UV if not provided
			}
		}
	}

	// Create sections in the procedural mesh for each group
	for (int32 GroupID = 0; GroupID <= MaxGroupID; GroupID++)
	{
		if (VerticesArray[GroupID].Num() == 0)
			continue;
		
		ProceduralMesh->CreateMeshSection(GroupID, VerticesArray[GroupID], TrianglesArray[GroupID], NormalsArray[GroupID], UVsArray[GroupID], {}, {}, false);
	}
}

/// <summary>
/// Converts a procedural mesh into a dynamic mesh such as for performing boolean operations
/// </summary>
/// <param name="ReferenceProceduralMesh"></param>
/// <returns></returns>
FDynamicMesh3 UProceduralSkeletalMeshComponent::ConvertProceduralMeshToDynamicMesh(UProceduralMeshComponent* ReferenceProceduralMesh)
{
	int NumSections = ReferenceProceduralMesh->GetNumSections();

	UE::Geometry::FDynamicMesh3 DynamicMesh;

	DynamicMesh.EnableAttributes();

	if (NumSections > 0)
		DynamicMesh.EnableTriangleGroups(0);

	for (int SectionIndex = 0; SectionIndex < NumSections; ++SectionIndex)
	{
		FProcMeshSection* Section = ReferenceProceduralMesh->GetProcMeshSection(SectionIndex);

		CopyProceduralSectionToDynamicGroup(DynamicMesh, Section, SectionIndex);
	}

	return DynamicMesh;
}

/// <summary>
/// Copies a procedural mesh section into a dynamic group - used to convert procedural mesh into a dynamic mesh
/// </summary>
/// <param name="DynamicMesh"></param>
/// <param name="ProcMeshSection"></param>
/// <param name="SectionIndex"></param>
void UProceduralSkeletalMeshComponent::CopyProceduralSectionToDynamicGroup(UE::Geometry::FDynamicMesh3& DynamicMesh, const FProcMeshSection* ProcMeshSection, int SectionIndex)
{
	TArray<uint32> Indices = ProcMeshSection->ProcIndexBuffer;
	TArray<FProcMeshVertex> Vertices = ProcMeshSection->ProcVertexBuffer;

	DynamicMesh.EnableAttributes();

	DynamicMesh.EnableVertexNormals(FVector3f(0.0f, 0.0f, 1.0f));
	DynamicMesh.EnableVertexUVs(FVector2f(0.0f, 0.0f));

	const int& NumIndices = Indices.Num();

	for (int i = 0; i < NumIndices; i += 3)
	{
		int DynamicIndex1 = BuildDynamicVertex(DynamicMesh, Vertices, Indices[i]);
		int DynamicIndex2 = BuildDynamicVertex(DynamicMesh, Vertices, Indices[i + 1]);
		int DynamicIndex3 = BuildDynamicVertex(DynamicMesh, Vertices, Indices[i + 2]);

		DynamicMesh.AppendTriangle(DynamicIndex1, DynamicIndex2, DynamicIndex3, SectionIndex);
	}

	if(DynamicMesh.HasVertexUVs())
		UE::Geometry::CopyVertexUVsToOverlay(DynamicMesh, *DynamicMesh.Attributes()->PrimaryUV());

	if(DynamicMesh.HasVertexNormals())
		UE::Geometry::CopyVertexNormalsToOverlay(DynamicMesh, *DynamicMesh.Attributes()->PrimaryNormals());
}

/// <summary>
/// Adds a procedural mesh vertex into a dynamic mesh
/// </summary>
/// <param name="DynamicMesh"></param>
/// <param name="ProceduralVertices"></param>
/// <param name="Index"></param>
/// <returns></returns>
int UProceduralSkeletalMeshComponent::BuildDynamicVertex(UE::Geometry::FDynamicMesh3& DynamicMesh, const TArray<FProcMeshVertex>& ProceduralVertices, int Index)
{
	const FProcMeshVertex& Vertex = ProceduralVertices[Index];

	int DynamicIndex = DynamicMesh.AppendVertex(Vertex.Position);

	FVector2D UV = Vertex.UV0;

	DynamicMesh.SetVertexUV(DynamicIndex, FVector2f(UV.X, UV.Y));

	FVector Normal = Vertex.Normal;

	DynamicMesh.SetVertexNormal(DynamicIndex, FVector3f(Normal.X, Normal.Y, Normal.Z));

	return DynamicIndex;
}

/// <summary>
/// Refreshes the procedural mesh component using the current mesh data
/// </summary>
void UProceduralSkeletalMeshComponent::RefreshProceduralMeshMaterials(UProceduralMeshComponent* MeshToRefresh)
{
	for (int i = 0; i < Materials.Num(); ++i)
		MeshToRefresh->SetMaterial(i, Materials[i]);

	if (MeshToRefresh->GetNumMaterials() > Materials.Num())
	{
		for (int i = Materials.Num(); i < MeshToRefresh->GetNumMaterials(); ++i)
			MeshToRefresh->SetMaterial(i, CapMaterial);
	}
}

/// <summary>
/// Sync the surface buffers of the procedural mesh to the underlying skeletal mesh
/// </summary>
void UProceduralSkeletalMeshComponent::UpdateFromSkeletalMesh()
{
	if (!GetSkeletalMeshAsset())
		return;

	FSkeletalMeshRenderData* SkMeshRenderData = GetSkeletalMeshRenderData();

	const FSkeletalMeshLODRenderData& DataArray = SkMeshRenderData->LODRenderData[0];

	FSkinWeightVertexBuffer& SkinWeights = *GetSkinWeightBuffer(0);

	TArray<FVector> VerticesArray;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;
	TArray<FColor> Colors;
	TArray<FProcMeshTangent> Tangents;

	for (int32 j = 0; j < DataArray.RenderSections.Num(); j++)
	{
		//get num vertices and offset 
		const int32 NumSourceVertices = DataArray.RenderSections[j].NumVertices;
		const int32 BaseVertexIndex = DataArray.RenderSections[j].BaseVertexIndex;

		for (int32 i = 0; i < NumSourceVertices; i++)
		{
			const int32 VertexIndex = i + BaseVertexIndex;

			//get skinned vector positions
			const FVector3f SkinnedVectorPos = USkeletalMeshComponent::GetSkinnedVertexPosition(this, VertexIndex, DataArray, SkinWeights);
			const FVector& Vert = FVector(SkinnedVectorPos);

			VerticesArray.Add(Vert);

			//Calc normals and tangents from the static version instead of the skeletal one
			const FVector3f ZTangentStatic = DataArray.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(VertexIndex);

			const FVector3f XTangentStatic = DataArray.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentX(VertexIndex);

			//add normals from the static mesh version instead because using the skeletal one doesnt work right.
			Normals.Add(FVector(ZTangentStatic.X, ZTangentStatic.Y, ZTangentStatic.Z));

			//add tangents
			Tangents.Add(FProcMeshTangent(FVector(XTangentStatic.X, XTangentStatic.Y, XTangentStatic.Z), false));

			//get UVs
			const FVector2f SourceUVs = DataArray.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(VertexIndex, 0);

			FVector2d ResUVs;
			ResUVs.X = SourceUVs.X;
			ResUVs.Y = SourceUVs.Y;
			UVs.Add(ResUVs);

			//dummy vertex colors
			Colors.Add(FColor(0.0, 0.0, 0.0, 255));
		}
	}

	//get index buffer
	FMultiSizeIndexContainerData IndicesData;

	DataArray.MultiSizeIndexContainer.GetIndexBuffer(IndicesData.Indices);

	for (int32 j = 0; j < DataArray.RenderSections.Num(); j++)
	{
		TArray<int32> Tris;

		// get number triangles and offset
		const int32 SectionNumTriangles = DataArray.RenderSections[j].NumTriangles;
		const int32 SectionBaseIndex = DataArray.RenderSections[j].BaseIndex;

		//iterate over num indices and add triangles
		for (int32 i = 0; i < SectionNumTriangles; i++)
		{
			int32 TriVertexIndex = i * 3 + SectionBaseIndex;
			Tris.Add(IndicesData.Indices[TriVertexIndex]);
			Tris.Add(IndicesData.Indices[TriVertexIndex + 1]);
			Tris.Add(IndicesData.Indices[TriVertexIndex + 2]);
		} 

		//Create the procedural mesh section
		ProceduralMesh->CreateMeshSection(j, VerticesArray, Tris, Normals, UVs, Colors, Tangents, false);
	}
}

/// <summary>
/// Displaces the vertices for each section of a procedural mesh using the generated skinning data
/// </summary>
/// <param name="ProceduralMesh"></param>
/// <param name="SkeletalMeshComponent"></param>
/// <param name="SectionedSkeletonMap"></param>
void UProceduralSkeletalMeshComponent::MorphProceduralMeshToBones(UProceduralMeshComponent* ReferenceProceduralMesh, const FProceduralSkeletalMeshData& ReferenceSkeletalProceduralMeshData)
{
	const TArray<FProceduralSkeletalMeshVertexSection>& Sections = ReferenceSkeletalProceduralMeshData.Sections;
	int32 NumSections = Sections.Num();

	// Ensure the procedural mesh and skeletal mesh are valid
	if (!ReferenceProceduralMesh || NumSections == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid input data for copying vertex positions."));
		return;
	}

	// Get skeletal mesh render data (assuming LOD 0, adjust if needed)
	const FSkeletalMeshRenderData* SkeletalMeshRenderData = GetSkeletalMeshRenderData();

	if (!SkeletalMeshRenderData || SkeletalMeshRenderData->LODRenderData.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid skeletal mesh render data."));
		return;
	}

	const TArray<FTransform>& InitialBoneTransforms = ReferenceSkeletalProceduralMeshData.InitialBoneTransforms;

	const FSkeletalMeshLODRenderData& LODData = SkeletalMeshRenderData->LODRenderData[0];
	const FPositionVertexBuffer& PositionVertexBuffer = LODData.StaticVertexBuffers.PositionVertexBuffer;
	const FSkinWeightVertexBuffer& SkinWeightBuffer = *GetSkinWeightBuffer(0);

	int32 MaxBoneInfluences = SkinWeightBuffer.GetMaxBoneInfluences();
	int32 NumSkeletalSections = LODData.RenderSections.Num();

	// Get bone transforms (the current pose)
	const TArray<FTransform>& CurrentBoneTransforms = GetComponentSpaceTransforms();
	FVector OwnerPos = GetOwner()->GetActorTransform().GetLocation();

	TArray<FVector> SkeletalMeshVertexLocations;

	for (int SectionIndex = 0; SectionIndex < NumSections; ++SectionIndex)
	{
		FProceduralSkeletalMeshVertexSection SectionVertexMap = Sections[SectionIndex];

		// Get the procedural mesh section (assuming section 0, adjust if needed)
		FProcMeshSection* ProceduralMeshSection = ReferenceProceduralMesh->GetProcMeshSection(SectionIndex);

		if (!ProceduralMeshSection)
		{
			UE_LOG(LogTemp, Warning, TEXT("Could not retrieve procedural mesh section %i!"), SectionIndex);
			return;
		}

		TArray<FVector> ProceduralVertices;

		int32 NumVertices = SectionVertexMap.VertexMap.Num();

		ProceduralVertices.SetNum(NumVertices);

		// Ensure there are vertices to process
		if (NumVertices == 0)
		{
			return;
		}

		int32 SelectedSection = SectionIndex > NumSkeletalSections - 1 ? 0 : SectionIndex;

		const FSkelMeshRenderSection& Section = LODData.RenderSections[SelectedSection];

		// Skins all vertices using the saved skinning data, essentially CPU skinning
		// Expensive, but runs on background threads (kicks the can down the road)
		// If transient skeletal meshes are supported in future engine versions, we can skip this entirely
		ParallelFor(NumVertices, [&](int32 VertexIndex)
		{
			const FSkeletalVertexMapItem& VertexMapItem = SectionVertexMap.VertexMap[VertexIndex];

			int32 SourceSkeletonVertex = VertexMapItem.SourceSkeletonVertex;

			if (SourceSkeletonVertex == -1)
				return;

			// retrieve the initial vertex position (component space) and initial bone transform (component space)
			const FVector& InitialVertexPosition = VertexMapItem.InitialVertexPosition;    // In component space
			const TArray<FProceduralMeshBoneInfluence>& BoneInfluences = VertexMapItem.BoneInfluences;

			FVector CumulativeVertexPosition = FVector::ZeroVector;

			for (int BoneInfluenceIndex = 0; BoneInfluenceIndex < MaxBoneInfluences; ++BoneInfluenceIndex)
			{
				const FProceduralMeshBoneInfluence& BoneInfluence = BoneInfluences[BoneInfluenceIndex];
				float BoneWeight = BoneInfluence.Weight;

				// Bone weights are already normalized and sorted in descending order, so if one is 0 we can safely break out of this loop
				if (BoneWeight <= 0.f)
					break;

				int32 BoneIndex = BoneInfluence.BoneIndex;

				const FTransform& CurrentBoneTransform = CurrentBoneTransforms[BoneIndex];
				const FVector& Translation = CurrentBoneTransform.GetTranslation();
				const FQuat& Rotation = CurrentBoneTransform.GetRotation();

				// Way faster than FTransform::TransformPosition
				CumulativeVertexPosition += (Rotation.RotateVector(BoneInfluence.LocalVertexPosition) + Translation) * BoneWeight;
			}

			// Update the procedural mesh vertex position with the transformed position
			ProceduralVertices[VertexIndex] = CumulativeVertexPosition;
		}, EParallelForFlags::BackgroundPriority);

		// Update the procedural mesh section with the new vertex positions
		ReferenceProceduralMesh->UpdateMeshSection(SectionIndex, ProceduralVertices, {}, {}, {}, {});
	}
}
