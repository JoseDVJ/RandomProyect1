// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMeshSurfaceMap.h"
#include "ProceduralMeshTriEdge.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralMeshSurfaceMap() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshTriEdge();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProceduralMeshSurfaceMap *****************************************
struct Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProceduralMeshSurfaceMap); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProceduralMeshSurfaceMap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralMeshSurfaceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeToTris_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshSurfaceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertLookup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshSurfaceMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeIndexes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshSurfaceMap.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProceduralMeshSurfaceMap constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeToTris_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeToTris_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeToTris;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertLookup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertLookup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeIndexes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeIndexes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeIndexes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProceduralMeshSurfaceMap constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMeshSurfaceMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap;
class UScriptStruct* FProceduralMeshSurfaceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralMeshSurfaceMap"));
	}
	return Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap.OuterSingleton;
	}

// ********** Begin ScriptStruct FProceduralMeshSurfaceMap Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeToTris_ValueProp = { "EdgeToTris", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FProceduralMeshTriEdge, METADATA_PARAMS(0, nullptr) }; // 3664379242
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeToTris_Key_KeyProp = { "EdgeToTris_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProceduralMeshTriEdge, METADATA_PARAMS(0, nullptr) }; // 3664379242
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeToTris = { "EdgeToTris", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshSurfaceMap, EdgeToTris), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeToTris_MetaData), NewProp_EdgeToTris_MetaData) }; // 3664379242 3664379242
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_VertLookup_Inner = { "VertLookup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_VertLookup = { "VertLookup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshSurfaceMap, VertLookup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertLookup_MetaData), NewProp_VertLookup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeIndexes_ValueProp = { "EdgeIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FProceduralMeshTriEdge, METADATA_PARAMS(0, nullptr) }; // 3664379242
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeIndexes_Key_KeyProp = { "EdgeIndexes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProceduralMeshTriEdge, METADATA_PARAMS(0, nullptr) }; // 3664379242
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeIndexes = { "EdgeIndexes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshSurfaceMap, EdgeIndexes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeIndexes_MetaData), NewProp_EdgeIndexes_MetaData) }; // 3664379242 3664379242
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeToTris_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeToTris_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeToTris,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_VertLookup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_VertLookup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeIndexes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeIndexes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewProp_EdgeIndexes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProceduralMeshSurfaceMap Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralMeshSurfaceMap",
	Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::PropPointers),
	sizeof(FProceduralMeshSurfaceMap),
	alignof(FProceduralMeshSurfaceMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap.InnerSingleton, Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap.InnerSingleton);
}
// ********** End ScriptStruct FProceduralMeshSurfaceMap *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshSurfaceMap_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralMeshSurfaceMap::StaticStruct, Z_Construct_UScriptStruct_FProceduralMeshSurfaceMap_Statics::NewStructOps, TEXT("ProceduralMeshSurfaceMap"),&Z_Registration_Info_UScriptStruct_FProceduralMeshSurfaceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralMeshSurfaceMap), 3823894843U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshSurfaceMap_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshSurfaceMap_h__Script_ProceduralSkeletalMesh_4284731608{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshSurfaceMap_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshSurfaceMap_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
