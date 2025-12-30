// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlobalSkinningMapData.h"
#include "SkeletalVertexMapItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGlobalSkinningMapData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalSkinningMapData();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalVertexMapItem();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGlobalSkinningMapData ********************************************
struct Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FGlobalSkinningMapData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGlobalSkinningMapData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalSkinningMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalSkinningMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/GlobalSkinningMapData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGlobalSkinningMapData constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGlobalSkinningMapData constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalSkinningMapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData;
class UScriptStruct* FGlobalSkinningMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalSkinningMapData, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("GlobalSkinningMapData"));
	}
	return Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData.OuterSingleton;
	}

// ********** Begin ScriptStruct FGlobalSkinningMapData Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalSkinningMapData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::NewProp_MapItem = { "MapItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalSkinningMapData, MapItem), Z_Construct_UScriptStruct_FSkeletalVertexMapItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapItem_MetaData), NewProp_MapItem_MetaData) }; // 1911836846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::NewProp_MapItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FGlobalSkinningMapData Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"GlobalSkinningMapData",
	Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::PropPointers),
	sizeof(FGlobalSkinningMapData),
	alignof(FGlobalSkinningMapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalSkinningMapData()
{
	if (!Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData.InnerSingleton, Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData.InnerSingleton);
}
// ********** End ScriptStruct FGlobalSkinningMapData **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_GlobalSkinningMapData_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGlobalSkinningMapData::StaticStruct, Z_Construct_UScriptStruct_FGlobalSkinningMapData_Statics::NewStructOps, TEXT("GlobalSkinningMapData"),&Z_Registration_Info_UScriptStruct_FGlobalSkinningMapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalSkinningMapData), 3357461384U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_GlobalSkinningMapData_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_GlobalSkinningMapData_h__Script_ProceduralSkeletalMesh_1170385369{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_GlobalSkinningMapData_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_GlobalSkinningMapData_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
