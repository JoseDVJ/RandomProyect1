// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#include "SkinnedMeshPuppetComponent.h"

USkinnedMeshPuppetComponent::USkinnedMeshPuppetComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = ETickingGroup::TG_PostUpdateWork;
}

void USkinnedMeshPuppetComponent::Initialize(USkinnedMeshComponent* SkeletalMeshComponent, USkeletalMesh* PuppetMesh)
{
	if (!PuppetMesh || !SkeletalMeshComponent)
		return;

	BuildPoseableMeshComponent(SkeletalMeshComponent, PuppetMesh);

	Initialized = true;
}

void USkinnedMeshPuppetComponent::BuildPoseableMeshComponent(USkinnedMeshComponent* SkeletalMesh, USkeletalMesh* PuppetMesh)
{
	if (SkeletalMesh->GetSkinnedAsset()->GetSkeleton() != PuppetMesh->GetSkeleton())
	{
		UE_LOG(LogTemp, Error, TEXT("[USkinnedMeshPuppetComponent.BuildPosableMeshComponent] Reference skeletal mesh component and passed puppet skeletal mesh do not share the same skeleton!"));
		return;
	}

	ReferenceComponent = SkeletalMesh;

	AActor* Owner = GetOwner();

	// Validate inputs
	if (!Owner)
	{
		UE_LOG(LogTemp, Warning, TEXT("[USkinnedMeshPuppetComponent.BuildPosableMeshComponent] Invalid input to BuildPoseableMeshComponent: Owner is null."));
		return;
	}

	ReferenceComponent->GetBoneNames(BoneNames);

	// Create a new skeletal mesh component as a duplicate
	PuppetComponent = NewObject<UPoseableMeshComponent>(Owner);

	if (!PuppetComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("[USkinnedMeshPuppetComponent.BuildPosableMeshComponent] Failed to create duplicate skeletal mesh component."));
		return;
	}

	// Attach duplicated component to the owner
	PuppetComponent->RegisterComponent();
	PuppetComponent->AttachToComponent(Owner->GetRootComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	PuppetComponent->SetSkinnedAssetAndUpdate(PuppetMesh);
	PuppetComponent->SetRelativeTransform(SkeletalMesh->GetRelativeTransform());
	PuppetComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	MatchPoseToReferenceComponent();
}

void USkinnedMeshPuppetComponent::MatchPoseToReferenceComponent()
{
	for (int BoneNameIndex = 0; BoneNameIndex < BoneNames.Num(); ++BoneNameIndex)
	{
		const FName& BoneName = BoneNames[BoneNameIndex];

		PuppetComponent->SetBoneTransformByName(BoneName, ReferenceComponent->GetBoneTransform(BoneName, ERelativeTransformSpace::RTS_Component), EBoneSpaces::ComponentSpace);
	}

	PuppetComponent->MarkRefreshTransformDirty();
}

void USkinnedMeshPuppetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (!Initialized)
		return;

	MatchPoseToReferenceComponent();
}

void USkinnedMeshPuppetComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);

	if (PuppetComponent)
		PuppetComponent->DestroyComponent();
}

