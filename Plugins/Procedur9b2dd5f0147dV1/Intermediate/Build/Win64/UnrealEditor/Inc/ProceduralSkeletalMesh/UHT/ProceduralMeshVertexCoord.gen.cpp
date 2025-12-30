// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMeshVertexCoord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralMeshVertexCoord() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshVertexCoord();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProceduralMeshVertexCoord ****************************************
struct Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProceduralMeshVertexCoord); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProceduralMeshVertexCoord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshVertexCoord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshVertexCoord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshVertexCoord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshVertexCoord.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshVertexCoord.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProceduralMeshVertexCoord constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProceduralMeshVertexCoord constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMeshVertexCoord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord;
class UScriptStruct* FProceduralMeshVertexCoord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMeshVertexCoord, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralMeshVertexCoord"));
	}
	return Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord.OuterSingleton;
	}

// ********** Begin ScriptStruct FProceduralMeshVertexCoord Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshVertexCoord, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshVertexCoord, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshVertexCoord, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshVertexCoord, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProceduralMeshVertexCoord Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralMeshVertexCoord",
	Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::PropPointers),
	sizeof(FProceduralMeshVertexCoord),
	alignof(FProceduralMeshVertexCoord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshVertexCoord()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord.InnerSingleton, Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord.InnerSingleton);
}
// ********** End ScriptStruct FProceduralMeshVertexCoord ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshVertexCoord_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralMeshVertexCoord::StaticStruct, Z_Construct_UScriptStruct_FProceduralMeshVertexCoord_Statics::NewStructOps, TEXT("ProceduralMeshVertexCoord"),&Z_Registration_Info_UScriptStruct_FProceduralMeshVertexCoord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralMeshVertexCoord), 1179881912U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshVertexCoord_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshVertexCoord_h__Script_ProceduralSkeletalMesh_218106978{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshVertexCoord_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshVertexCoord_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
