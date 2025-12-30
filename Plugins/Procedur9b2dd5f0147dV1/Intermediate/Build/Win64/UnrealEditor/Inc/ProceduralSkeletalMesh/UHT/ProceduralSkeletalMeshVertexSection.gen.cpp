// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMeshVertexSection.h"
#include "SkeletalVertexMapItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshVertexSection() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalVertexMapItem();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProceduralSkeletalMeshVertexSection ******************************
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProceduralSkeletalMeshVertexSection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProceduralSkeletalMeshVertexSection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshVertexSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshVertexSection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProceduralSkeletalMeshVertexSection constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProceduralSkeletalMeshVertexSection constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshVertexSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection;
class UScriptStruct* FProceduralSkeletalMeshVertexSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshVertexSection"));
	}
	return Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection.OuterSingleton;
	}

// ********** Begin ScriptStruct FProceduralSkeletalMeshVertexSection Property Definitions *********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap_Inner = { "VertexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalVertexMapItem, METADATA_PARAMS(0, nullptr) }; // 1911836846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap = { "VertexMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshVertexSection, VertexMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexMap_MetaData), NewProp_VertexMap_MetaData) }; // 1911836846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProceduralSkeletalMeshVertexSection Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralSkeletalMeshVertexSection",
	Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::PropPointers),
	sizeof(FProceduralSkeletalMeshVertexSection),
	alignof(FProceduralSkeletalMeshVertexSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection.InnerSingleton);
}
// ********** End ScriptStruct FProceduralSkeletalMeshVertexSection ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshVertexSection::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshVertexSection"),&Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshVertexSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshVertexSection), 3281195598U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h__Script_ProceduralSkeletalMesh_483981430{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
