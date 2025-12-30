// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FProceduralMeshSection
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY()
    int32 BaseVertexIndex = -1;

    UPROPERTY()
    TArray<int32> Indices;

    UPROPERTY()
    TArray<FVector> Vertices;

    UPROPERTY()
    TArray<FVector> Normals;

    UPROPERTY()
    TArray<FVector2D> UVs;

    UPROPERTY()
    TArray<FColor> Colors;

    UPROPERTY()
    TArray<FProcMeshTangent> Tangents;
};
