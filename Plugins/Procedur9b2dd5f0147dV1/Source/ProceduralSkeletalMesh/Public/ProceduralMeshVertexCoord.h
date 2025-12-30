// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshVertexCoord.generated.h"

USTRUCT()
struct FProceduralMeshVertexCoord {
	GENERATED_USTRUCT_BODY();

	FProceduralMeshVertexCoord(int x = 0, int y = 0, int z = 0, int a = 0) : X(x), Y(y), Z(z), A(a) {}

	FProceduralMeshVertexCoord(FVector Location)
	{
		X = FMath::RoundToInt(Location.X * 10000);
		Y = FMath::RoundToInt(Location.Y * 10000);
		Z = FMath::RoundToInt(Location.Z * 10000);
		A = 0;
	}

	FVector ToVector()
	{
		return FVector(
			(float) X / 10000.f,
			(float) Y / 10000.f,
			(float) Z / 10000.f
		);
	}

	UPROPERTY()
	int X;

	UPROPERTY()
	int Y;

	UPROPERTY()
	int Z;

	UPROPERTY()
	int A;

	FORCEINLINE bool operator==(const FProceduralMeshVertexCoord& other) const {
		return !(X != other.X || Y != other.Y || Z != other.Z || A != other.A);
	}

	FORCEINLINE bool operator!=(const FProceduralMeshVertexCoord& other) const {
		return (X != other.X || Y != other.Y || Z != other.Z || A != other.A);
	}

	FORCEINLINE FProceduralMeshVertexCoord operator+(const FProceduralMeshVertexCoord& other) const {
		return FProceduralMeshVertexCoord(X + other.X, Y + other.Y, Z + other.Z, A + other.A);
	}

	FORCEINLINE FProceduralMeshVertexCoord operator-(const FProceduralMeshVertexCoord& other) const {
		return FProceduralMeshVertexCoord(X - other.X, Y - other.Y, Z - other.Z, A - other.A);
	}

	FORCEINLINE FProceduralMeshVertexCoord operator*(const float& other) const {
		return FProceduralMeshVertexCoord(X * other, Y * other, Z * other, A * other);
	}

	FORCEINLINE FProceduralMeshVertexCoord operator/(const int& other) const {
		if (other == 0) { return FProceduralMeshVertexCoord(99999, 99999, 99999, 99999); }
		return FProceduralMeshVertexCoord(X / other, Y / other, Z / other, A / other);
	}

	// Thank Aaron (:
	FORCEINLINE friend uint32 GetTypeHash(const FProceduralMeshVertexCoord& Coord) {
		if (Coord.Z == 0 && Coord.A == 0) { //fast track some use cases since A is rarely used
			return Coord.X * 137 + Coord.Y * 149;
		}
		if (Coord.A == 0) { //fast track most use cases since A is rarely used
			return Coord.X * 137 + Coord.Y * 149 + Coord.Z * 163;
		}
		return Coord.X * 137 + Coord.Y * 241 + Coord.Z * 367 + Coord.A * 487; //reduce collisions with simple math, use a proper hashing function if collisions actually need to be avoided at all costs
	}
};
