// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMeshSeparation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshSeparation() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProceduralSkeletalMeshSeparation *********************************
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProceduralSkeletalMeshSeparation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProceduralSkeletalMeshSeparation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separations_MetaData[] = {
		{ "Category", "Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProceduralSkeletalMeshSeparation constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Separations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Separations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProceduralSkeletalMeshSeparation constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshSeparation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation;
class UScriptStruct* FProceduralSkeletalMeshSeparation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshSeparation"));
	}
	return Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation.OuterSingleton;
	}

// ********** Begin ScriptStruct FProceduralSkeletalMeshSeparation Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations_Inner = { "Separations", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations = { "Separations", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshSeparation, Separations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separations_MetaData), NewProp_Separations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProceduralSkeletalMeshSeparation Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralSkeletalMeshSeparation",
	Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::PropPointers),
	sizeof(FProceduralSkeletalMeshSeparation),
	alignof(FProceduralSkeletalMeshSeparation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation.InnerSingleton);
}
// ********** End ScriptStruct FProceduralSkeletalMeshSeparation ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshSeparation::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshSeparation"),&Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshSeparation), 3108253946U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h__Script_ProceduralSkeletalMesh_4034741388{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
