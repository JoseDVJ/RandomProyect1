// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMeshData.h"
#include "ProceduralSkeletalMeshVertexSection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshData();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProceduralSkeletalMeshData ***************************************
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProceduralSkeletalMeshData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProceduralSkeletalMeshData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Procedural mesh data for each section of the skeletal mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Procedural mesh data for each section of the skeletal mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialBoneTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProceduralSkeletalMeshData constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialBoneTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialBoneTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProceduralSkeletalMeshData constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData;
class UScriptStruct* FProceduralSkeletalMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshData, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData.OuterSingleton;
	}

// ********** Begin ScriptStruct FProceduralSkeletalMeshData Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection, METADATA_PARAMS(0, nullptr) }; // 3281195598
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshData, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) }; // 3281195598
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_InitialBoneTransforms_Inner = { "InitialBoneTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_InitialBoneTransforms = { "InitialBoneTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshData, InitialBoneTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialBoneTransforms_MetaData), NewProp_InitialBoneTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_InitialBoneTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewProp_InitialBoneTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProceduralSkeletalMeshData Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralSkeletalMeshData",
	Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::PropPointers),
	sizeof(FProceduralSkeletalMeshData),
	alignof(FProceduralSkeletalMeshData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshData()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData.InnerSingleton);
}
// ********** End ScriptStruct FProceduralSkeletalMeshData *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshData_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshData::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshData_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshData"),&Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshData), 3439192240U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshData_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshData_h__Script_ProceduralSkeletalMesh_3122564579{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshData_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshData_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
