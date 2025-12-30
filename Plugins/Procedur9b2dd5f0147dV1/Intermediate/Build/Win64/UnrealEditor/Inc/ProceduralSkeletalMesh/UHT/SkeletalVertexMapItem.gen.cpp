// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalVertexMapItem.h"
#include "ProceduralMeshBoneInfluence.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSkeletalVertexMapItem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalVertexMapItem();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSkeletalVertexMapItem ********************************************
struct Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSkeletalVertexMapItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSkeletalVertexMapItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalVertexMapItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneInfluences_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalVertexMapItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVertexPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalVertexMapItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletonVertex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalVertexMapItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSkeletalVertexMapItem constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneInfluences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneInfluences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVertexPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceSkeletonVertex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSkeletalVertexMapItem constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalVertexMapItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem;
class UScriptStruct* FSkeletalVertexMapItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalVertexMapItem, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("SkeletalVertexMapItem"));
	}
	return Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FSkeletalVertexMapItem Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_BoneInfluences_Inner = { "BoneInfluences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence, METADATA_PARAMS(0, nullptr) }; // 3766258832
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_BoneInfluences = { "BoneInfluences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalVertexMapItem, BoneInfluences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneInfluences_MetaData), NewProp_BoneInfluences_MetaData) }; // 3766258832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_InitialVertexPosition = { "InitialVertexPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalVertexMapItem, InitialVertexPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVertexPosition_MetaData), NewProp_InitialVertexPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_SourceSkeletonVertex = { "SourceSkeletonVertex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalVertexMapItem, SourceSkeletonVertex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSkeletonVertex_MetaData), NewProp_SourceSkeletonVertex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_BoneInfluences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_BoneInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_InitialVertexPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewProp_SourceSkeletonVertex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSkeletalVertexMapItem Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"SkeletalVertexMapItem",
	Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::PropPointers),
	sizeof(FSkeletalVertexMapItem),
	alignof(FSkeletalVertexMapItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalVertexMapItem()
{
	if (!Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem.InnerSingleton);
}
// ********** End ScriptStruct FSkeletalVertexMapItem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkeletalVertexMapItem_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalVertexMapItem::StaticStruct, Z_Construct_UScriptStruct_FSkeletalVertexMapItem_Statics::NewStructOps, TEXT("SkeletalVertexMapItem"),&Z_Registration_Info_UScriptStruct_FSkeletalVertexMapItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalVertexMapItem), 1911836846U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkeletalVertexMapItem_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkeletalVertexMapItem_h__Script_ProceduralSkeletalMesh_3937205694{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkeletalVertexMapItem_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkeletalVertexMapItem_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
