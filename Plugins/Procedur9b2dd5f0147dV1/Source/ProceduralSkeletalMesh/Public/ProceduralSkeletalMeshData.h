// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralSkeletalMeshVertexSection.h"
#include "ProceduralSkeletalMeshData.generated.h"

USTRUCT(BlueprintType)
struct FProceduralSkeletalMeshData
{
	GENERATED_USTRUCT_BODY()

	//Procedural mesh data for each section of the skeletal mesh
	UPROPERTY()
	TArray<FProceduralSkeletalMeshVertexSection> Sections;

	UPROPERTY()
	TArray<FTransform> InitialBoneTransforms;
};
