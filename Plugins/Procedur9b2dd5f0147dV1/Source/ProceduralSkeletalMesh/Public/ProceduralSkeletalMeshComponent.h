// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "Delegates/Delegate.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "StaticMeshResources.h"  // For static vertex buffer utilities
#include "Engine/SkeletalMesh.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Rendering/SkeletalMeshLODRenderData.h"
#include "SkeletalRenderPublic.h"
#include "ProceduralMeshSection.h"
#include "ProceduralSkeletalMeshVertexSection.h"
#include "ProceduralMeshSurfaceMap.h"
#include "ProceduralMeshTriEdge.h"
#include "ProceduralMeshVertexCoord.h"
#include "ProceduralSkeletalMeshSeparationCarve.h"
#include "ProceduralSkeletalMeshSeparationSlice.h"
#include "ProceduralSkeletalMeshSeparation.h"
#include "ProceduralMeshData.h"
#include "ProceduralSkeletalMeshData.h"
#include "KismetProceduralMeshLibrary.h"
#include "PhysicsEngine/BodySetup.h"
#include "PhysicsEngine/ConvexElem.h"
#include "MeshDescription.h"
#include "DynamicMeshEditor.h"
#include "Operations/MeshBoolean.h"
#include "StaticMeshResources.h"
#include "MeshDescriptionToDynamicMesh.h"
#include "GeometryScript/GeometryScriptTypes.h"
#include "GeometryScript/MeshAssetFunctions.h"
#include "GeomTools.h"
#include "GlobalSkinningMapData.h"
#include "GlobalSkinningOctreeSemantics.h"
#include "ProceduralSkeletalMeshComponent.generated.h"

/// <summary>
/// Component that allows the owner to receive damage
/// </summary>
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UProceduralSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

private:
	const static uint32 MAX_BONE_INFLUENCES = 4;

	FProceduralSkeletalMeshData SkeletalProceduralMeshData;

	FProceduralMeshData ProceduralMeshData;

	TArray<FTransform> SkeletalMeshPoseComponentTransforms;

	// Used to impart a new velocity on sliced ragdoll segments
	FVector FrameVelocity = FVector::ZeroVector;

	// Used to calculate frame velocity
	FVector LastPosition = FVector::ZeroVector;

	UProceduralMeshComponent* ProceduralMesh;

	// Static vertices of the skeletal mesh
	TArray<FVector> StaticVerts;

	// All materials that exist on the skeletal mesh, plus the end cap material
	TArray<UMaterialInterface*> Materials;

	FConvexVolume CreateConvexVolumeFromMesh(const TArray<FVector>& InVertices, const TArray<int32>& InIndices);

	FMeshDescription ConvertStaticMeshToMeshDescription(UStaticMesh* StaticMesh, int32 LODIndex = 0);

	void SeparateMeshIntoSurfaces(UProceduralMeshComponent* Component, TArray<FProceduralMeshData>& OutputMeshes, int32& LargestSurfaceIndex);

	void FloodFill(FProceduralMeshVertexCoord InitialCoord, const TMap<FProceduralMeshVertexCoord, TSet<FProceduralMeshVertexCoord>>& VertexToVertexMap, TSet<FProceduralMeshVertexCoord>& Surface, TSet<FProceduralMeshVertexCoord>& Visited);

	float CalculateTriangleArea(const FVector& A, const FVector& B, const FVector& C);

	FProceduralMeshData GetProceduralMeshData(UProceduralMeshComponent* ProcMesh);

	void CombineCapSections(int32 LODIndex);

	void CombineCapSections(int32 LODIndex, UProceduralMeshComponent* ProcMesh);

	float CalculateRegionSize(const FProceduralMeshData& Region);

	FProceduralMeshTriEdge GetEdgeForTriangle(int triangleIndex, int edgeIndex, const TArray<int>& vertLookup);

	void RemoveIncompleteEdges(FProceduralMeshSurfaceMap& surfaceMap);

	UProceduralMeshComponent* CreateEmptyProceduralMesh();

	UProceduralMeshComponent* SliceMesh(UProceduralMeshComponent* ProcMesh, FVector Position, FVector Normal);

	int32 BoxPlaneCompare(FBox InBox, const FPlane& InPlane);

	FProcMeshVertex InterpolateVert(const FProcMeshVertex& V0, const FProcMeshVertex& V1, float Alpha);

	void Transform2DPolygonTo3D(const FUtilPoly2D& InPoly, const FMatrix& InMatrix, TArray<FProcMeshVertex>& OutVerts, FBox& OutBox);

	bool TriangulatePoly(TArray<uint32>& OutTris, const TArray<FProcMeshVertex>& PolyVerts, int32 VertBase, const FVector3f& PolyNormal);

	void SliceConvexElem(const FKConvexElem& InConvex, const FPlane& SlicePlane, TArray<FVector>& OutConvexVerts);

	void SliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption);

	void BuildConvexCollisionHull(UProceduralMeshComponent* ProceduralMesh);

	UE::Geometry::FDynamicMesh3 ConvertProceduralMeshToDynamicMesh(UProceduralMeshComponent* ProcMesh);

	int BuildDynamicVertex(UE::Geometry::FDynamicMesh3& DynamicMesh, const TArray<FProcMeshVertex>& ProceduralVertices, int Index);

	void CopyProceduralSectionToDynamicGroup(UE::Geometry::FDynamicMesh3& DynamicMesh, const FProcMeshSection* Section, int SectionIndex);

	void CopyDynamicMeshIntoProceduralMeshComponent(const UE::Geometry::FDynamicMesh3& DynamicMesh);

	UProceduralSkeletalMeshComponent* DuplicateSelf();

	void DisableCollisionAndPhysicsForSlicedBones(USkeletalMeshComponent* SkeletalMeshComponent, const FVector& SlicePosition, const FVector& SliceNormal, bool KeepAboveSlice);

	void QuickHull3D(const TArray<FProcMeshVertex>& Vertices, TArray<FVector>& ConvexHull);

	bool IsOutside(const FProcMeshVertex& a, const FProcMeshVertex& b, const FProcMeshVertex& c, const FProcMeshVertex& point);

	float PointPlaneDistance(const FVector& a, const FVector& b, const FVector& c, const FVector& point);

	float TetrahedronVolume(const FProcMeshVertex& a, const FProcMeshVertex& b, const FProcMeshVertex& c, const FProcMeshVertex& d);

	bool GetLocalSkeletalMeshVertexLocations(TArray<FVector>& Locations, int32 LODIndex);

	FProceduralSkeletalMeshVertexSection GenerateVertexToBoneMapping(UProceduralMeshComponent* ProceduralMesh, const TArray<FTransform>& InitialBoneTransforms, const TMap<FProceduralMeshVertexCoord, FSkeletalVertexMapItem>& GlobalSkinningMap, const FGlobalSkinningOctree& GlobalSkinningOctree, int Section);

	void BuildSectionedSkeletonMap(UProceduralMeshComponent* ProceduralMesh, FProceduralSkeletalMeshData& SkeletalProceduralMeshData);

	FProceduralMeshSection GetProceduralMeshSectionData(int32 SectionIndex);

	void MorphProceduralMeshToBones(UProceduralMeshComponent* ProceduralMesh, const FProceduralSkeletalMeshData& SkeletalProceduralMeshData);

	void UpdateFromSkeletalMesh();

	void BuildProceduralMesh(const FProceduralMeshData& ProceduralMeshData, UProceduralMeshComponent* Component);

	UProceduralMeshComponent* CreateProceduralMeshComponent(const FProceduralMeshData& ProceduralMeshData);

	FProceduralSkeletalMeshSeparation SeparateProceduralMesh();

	FProceduralSkeletalMeshSeparation SeparateProceduralMesh(UProceduralMeshComponent* Component);

	void RefreshProceduralMeshMaterials(UProceduralMeshComponent* MeshToRefresh);

	void Pose(TArray<FTransform> ComponentSpaceBoneTransforms);

	void SetCollisionForSkeletalMesh(USkeletalMeshComponent* NewSlicedMesh, const FVector& SlicePosition, const FVector& SliceNormal, bool KeepAboveSlice);

	void CarveDynamicMesh(UE::Geometry::FDynamicMesh3& DynamicMesh, UE::Geometry::FDynamicMesh3& CarveMesh, FTransform RelativeTransform, UE::Geometry::FDynamicMesh3& Result, float SimplificationAngleTolerance, float WindingTolerance);

	void SetWorldSpaceTransformToMeshSpace(FTransform& WorldSpaceTransform);

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void OnRegister() override;

	bool Deformed = false;

	int SpawnedProceduralMeshes = 0;
public:
	UProceduralSkeletalMeshComponent();


	// Material to be applied to slice caps
	UPROPERTY(Category = "Procedural Mesh Properties", EditAnywhere)
	UMaterialInterface* CapMaterial;

	UProceduralMeshComponent* GetProceduralMesh() { return ProceduralMesh; }

	UE::Geometry::FDynamicMesh3 GetDynamicMesh() { return ConvertProceduralMeshToDynamicMesh(ProceduralMesh); }

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual UProceduralSkeletalMeshComponent* Slice(FVector Position, FVector Normal, bool Ragdoll, UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh = nullptr);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual FProceduralSkeletalMeshSeparationSlice SliceWithSeparation(FVector Position, FVector Normal, bool Ragdoll, UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh = nullptr);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual FProceduralSkeletalMeshSeparationSlice SliceBoneWithSeparation(FName BoneName, FVector Normal, bool Ragdoll, UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh = nullptr);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual void Carve(UStaticMesh* CarveMesh, FTransform WorldSpaceTransform, float SimplificationAngleTolerance = 0.25f, float WindingTolerance = 0.5f);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual FProceduralSkeletalMeshSeparationCarve CarveWithSeparation(UStaticMesh* CarveMesh, FTransform WorldSpaceTransform, float SimplificationAngleTolerance = 0.25f, float WindingTolerance = 0.4f);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual void CarveBone(UStaticMesh* CarveMesh, FRotator CarveRotation, FVector CarveScale, FName BoneName);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual FProceduralSkeletalMeshSeparationCarve CarveBoneWithSeparation(UStaticMesh* CarveMesh, FRotator CarveRotation, FVector CarveScale, FName BoneName);

	UFUNCTION(Category = "Operations", BlueprintCallable)
	virtual void RefreshFromProceduralMesh(UProceduralMeshComponent* Component);
};
