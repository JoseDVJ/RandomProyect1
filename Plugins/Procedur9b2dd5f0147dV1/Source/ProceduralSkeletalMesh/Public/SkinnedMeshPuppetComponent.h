// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "SkinnedMeshPuppetComponent.generated.h"

/// <summary>
/// Component that allows the owner to receive damage
/// </summary>
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class USkinnedMeshPuppetComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	USkinnedMeshComponent* ReferenceComponent;

	TArray<FName> BoneNames;

	void BuildPoseableMeshComponent(USkinnedMeshComponent* SkeletalMesh, USkeletalMesh* PuppetMesh);
	void MatchPoseToReferenceComponent();

	bool Initialized = false;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
public:
	UPROPERTY(Category = "Puppet", BlueprintReadOnly)
	UPoseableMeshComponent* PuppetComponent;

	USkinnedMeshPuppetComponent();

	UFUNCTION(Category = "Puppet", BlueprintCallable)
	virtual void Initialize(USkinnedMeshComponent* Mesh, USkeletalMesh* PuppetMesh);
};
