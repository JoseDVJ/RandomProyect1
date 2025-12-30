// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "SkeletalVertexMapItem.h"
#include "ProceduralSkeletalMeshVertexSection.generated.h"

USTRUCT(BlueprintType)
struct FProceduralSkeletalMeshVertexSection
{
	GENERATED_USTRUCT_BODY()
	// Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id

	UPROPERTY()
	TArray<FSkeletalVertexMapItem> VertexMap;
};

