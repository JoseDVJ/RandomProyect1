// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshTriEdge.generated.h"

USTRUCT()
struct FProceduralMeshTriEdge 
{
	GENERATED_USTRUCT_BODY();

	FProceduralMeshTriEdge(int a = 0, int b = 0) : A(a), B(b) {}

public:

	UPROPERTY()
		int A;

	UPROPERTY()
		int B;


	FORCEINLINE bool operator==(const FProceduralMeshTriEdge& other) const {
		if (A != other.A || B != other.B) { return false; }
		return true;
	}

	FORCEINLINE bool operator!=(const FProceduralMeshTriEdge& other) const {
		if (A != other.A || B != other.B) { return true; }
		return false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FProceduralMeshTriEdge& e) {
		return e.A * 137 + e.B * 1379;
	}

	FORCEINLINE int Other(const int In) const {
		if (A == In) { return B; }
		if (B == In) { return A; }
		return -1;
	}

	FORCEINLINE void Orient() {
		if (A > B && B >= 0) {
			int t = MoveTemp(B);
			B = MoveTemp(A);
			A = MoveTemp(t);
		}
	}

	FORCEINLINE bool Contains(const int In) {
		if (A == In || B == In) { return true; }
		return false;
	}

	FORCEINLINE bool IsValid() {
		if (A < 0 || B < 0) { return false; }
		return true;
	}
};
