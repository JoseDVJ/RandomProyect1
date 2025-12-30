// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FurComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GFUR_FurComponent_generated_h
#error "FurComponent.generated.h already included, missing '#pragma once' in FurComponent.h"
#endif
#define GFUR_FurComponent_generated_h

#define FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFurLod_Statics; \
	GFUR_API static class UScriptStruct* StaticStruct();


template<> GFUR_API UScriptStruct* StaticStruct<struct FFurLod>();

#define FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRegenerateFur);


#define FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUGFurComponent(); \
	friend struct Z_Construct_UClass_UGFurComponent_Statics; \
public: \
	DECLARE_CLASS(UGFurComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GFur"), NO_API) \
	DECLARE_SERIALIZER(UGFurComponent)


#define FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGFurComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGFurComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGFurComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFurComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGFurComponent(UGFurComponent&&); \
	UGFurComponent(const UGFurComponent&); \
public: \
	NO_API virtual ~UGFurComponent();


#define FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_50_PROLOG
#define FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_RPC_WRAPPERS \
	FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_INCLASS \
	FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GFUR_API UClass* StaticClass<class UGFurComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
