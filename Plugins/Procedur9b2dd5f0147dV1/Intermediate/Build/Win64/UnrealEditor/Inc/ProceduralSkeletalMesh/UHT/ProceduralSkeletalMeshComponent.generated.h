// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralSkeletalMeshComponent.h"

#ifdef PROCEDURALSKELETALMESH_ProceduralSkeletalMeshComponent_generated_h
#error "ProceduralSkeletalMeshComponent.generated.h already included, missing '#pragma once' in ProceduralSkeletalMeshComponent.h"
#endif
#define PROCEDURALSKELETALMESH_ProceduralSkeletalMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProceduralMeshComponent;
class UProceduralSkeletalMeshComponent;
class UStaticMesh;
struct FProceduralSkeletalMeshSeparationCarve;
struct FProceduralSkeletalMeshSeparationSlice;

// ********** Begin Class UProceduralSkeletalMeshComponent *****************************************
#define FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshFromProceduralMesh); \
	DECLARE_FUNCTION(execCarveBoneWithSeparation); \
	DECLARE_FUNCTION(execCarveBone); \
	DECLARE_FUNCTION(execCarveWithSeparation); \
	DECLARE_FUNCTION(execCarve); \
	DECLARE_FUNCTION(execSliceBoneWithSeparation); \
	DECLARE_FUNCTION(execSliceWithSeparation); \
	DECLARE_FUNCTION(execSlice);


struct Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics;
PROCEDURALSKELETALMESH_API UClass* Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister();

#define FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralSkeletalMeshComponent(); \
	friend struct ::Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALSKELETALMESH_API UClass* ::Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UProceduralSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralSkeletalMesh"), Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UProceduralSkeletalMeshComponent)


#define FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProceduralSkeletalMeshComponent(UProceduralSkeletalMeshComponent&&) = delete; \
	UProceduralSkeletalMeshComponent(const UProceduralSkeletalMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralSkeletalMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralSkeletalMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProceduralSkeletalMeshComponent) \
	NO_API virtual ~UProceduralSkeletalMeshComponent();


#define FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_49_PROLOG
#define FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_INCLASS_NO_PURE_DECLS \
	FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProceduralSkeletalMeshComponent;

// ********** End Class UProceduralSkeletalMeshComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
