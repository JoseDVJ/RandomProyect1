// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "SkeletalVertexMapItem.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralSkeletalMeshSeparationCarve.generated.h"

USTRUCT(BlueprintType)
struct FProceduralSkeletalMeshSeparationCarve
{
	GENERATED_USTRUCT_BODY()
	// Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id

	UPROPERTY(Category = "Result", BlueprintReadWrite)
	TArray<UProceduralMeshComponent*> Separations;
};

