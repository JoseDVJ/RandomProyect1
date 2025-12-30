// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshTriEdge.h"
#include "ProceduralMeshSurfaceMap.generated.h"

USTRUCT(BlueprintType)
struct FProceduralMeshSurfaceMap
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY()
	TMap<FProceduralMeshTriEdge, FProceduralMeshTriEdge> EdgeToTris = {};

	UPROPERTY()
	TArray<int> VertLookup = {};

	UPROPERTY()
	TMap<FProceduralMeshTriEdge, FProceduralMeshTriEdge> EdgeIndexes = {};

	void Clear() {
		EdgeToTris = {};
		VertLookup = {};
		EdgeIndexes = {};
	}
};
