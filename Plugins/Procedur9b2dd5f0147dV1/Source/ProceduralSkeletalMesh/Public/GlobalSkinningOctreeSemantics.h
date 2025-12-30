// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
// The key header for TOctree:

#include "Math/GenericOctree.h"
#include "Math/UnrealMathUtility.h"

struct FGlobalSkinningOctreeSemantics
{
    typedef TOctree2<FGlobalSkinningMapData, FGlobalSkinningOctreeSemantics> FOctree;

    enum { MaxNodeDepth = 12 };
    enum { MaxElementsPerLeaf = 16 };    // tune as needed
    enum { MinInclusiveElementsPerNode = 7 };

    typedef TInlineAllocator<MaxElementsPerLeaf> ElementAllocator;

    FORCEINLINE static FBoxCenterAndExtent GetBoundingBox(const FGlobalSkinningMapData& Data)
    {
        // Return a small box around Data.Position
        // Octree needs a box, but you can give it a small extent if points are exact
        const FVector Extent(1e-4f, 1e-4f, 1e-4f);

        return FBoxCenterAndExtent(Data.Position, Extent);
    }

    FORCEINLINE static bool AreElementsEqual(const FGlobalSkinningMapData& A, const FGlobalSkinningMapData& B)
    {
        // For our case, equality means the positions match AND the MapItems match.
        // Usually, you won't hit duplicates, so a simple check is enough:
        return (A.Position.Equals(B.Position, KINDA_SMALL_NUMBER));
    }

    static void SetElementId(FOctree& OctreeOwner, const FGlobalSkinningMapData& Element, FOctreeElementId2 Id)
    {

    }
};

typedef TOctree2<FGlobalSkinningMapData, FGlobalSkinningOctreeSemantics> FGlobalSkinningOctree;
