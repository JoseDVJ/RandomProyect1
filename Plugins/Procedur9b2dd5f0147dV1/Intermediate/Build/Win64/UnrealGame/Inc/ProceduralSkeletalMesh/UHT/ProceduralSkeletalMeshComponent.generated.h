// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralSkeletalMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProceduralMeshComponent;
class UProceduralSkeletalMeshComponent;
class UStaticMesh;
struct FProceduralSkeletalMeshSeparationCarve;
struct FProceduralSkeletalMeshSeparationSlice;
#ifdef PROCEDURALSKELETALMESH_ProceduralSkeletalMeshComponent_generated_h
#error "ProceduralSkeletalMeshComponent.generated.h already included, missing '#pragma once' in ProceduralSkeletalMeshComponent.h"
#endif
#define PROCEDURALSKELETALMESH_ProceduralSkeletalMeshComponent_generated_h

#define FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshFromProceduralMesh); \
	DECLARE_FUNCTION(execCarveBoneWithSeparation); \
	DECLARE_FUNCTION(execCarveBone); \
	DECLARE_FUNCTION(execCarveWithSeparation); \
	DECLARE_FUNCTION(execCarve); \
	DECLARE_FUNCTION(execSliceBoneWithSeparation); \
	DECLARE_FUNCTION(execSliceWithSeparation); \
	DECLARE_FUNCTION(execSlice);


#define FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralSkeletalMesh"), NO_API) \
	DECLARE_SERIALIZER(UProceduralSkeletalMeshComponent)


#define FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProceduralSkeletalMeshComponent(UProceduralSkeletalMeshComponent&&); \
	UProceduralSkeletalMeshComponent(const UProceduralSkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralSkeletalMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProceduralSkeletalMeshComponent) \
	NO_API virtual ~UProceduralSkeletalMeshComponent();


#define FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_49_PROLOG
#define FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_INCLASS_NO_PURE_DECLS \
	FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALSKELETALMESH_API UClass* StaticClass<class UProceduralSkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
