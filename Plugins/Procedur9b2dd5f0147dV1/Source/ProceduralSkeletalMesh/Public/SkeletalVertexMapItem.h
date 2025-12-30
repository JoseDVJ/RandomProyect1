// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshBoneInfluence.h"
#include "SkeletalVertexMapItem.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalVertexMapItem
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	TArray<FProceduralMeshBoneInfluence> BoneInfluences;

	UPROPERTY()
	FVector InitialVertexPosition;

	UPROPERTY()
	int32 SourceSkeletonVertex = -1;
};

