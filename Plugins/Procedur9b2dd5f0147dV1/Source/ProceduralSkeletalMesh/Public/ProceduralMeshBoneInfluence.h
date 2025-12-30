// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshBoneInfluence.generated.h"

USTRUCT(BlueprintType)
struct FProceduralMeshBoneInfluence
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	uint16 BoneIndex;

	UPROPERTY()
	float Weight;

	UPROPERTY()
	FVector LocalVertexPosition;

	explicit FProceduralMeshBoneInfluence(const uint16 BoneIndex = -1, const float Weight = 0., const FVector LocalVertexPosition = FVector::ZeroVector) :
		BoneIndex(BoneIndex),
		Weight(Weight),
		LocalVertexPosition(LocalVertexPosition)
	{}
};
