// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMeshSeparationSlice.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshSeparationSlice() {}

// ********** Begin Cross Module References ********************************************************
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UClass* Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProceduralSkeletalMeshSeparationSlice ****************************
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProceduralSkeletalMeshSeparationSlice); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProceduralSkeletalMeshSeparationSlice); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparationSlice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherHalf_MetaData[] = {
		{ "Category", "Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparationSlice.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separations_MetaData[] = {
		{ "Category", "Result" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparationSlice.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProceduralSkeletalMeshSeparationSlice constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherHalf;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Separations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Separations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProceduralSkeletalMeshSeparationSlice constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshSeparationSlice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice;
class UScriptStruct* FProceduralSkeletalMeshSeparationSlice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshSeparationSlice"));
	}
	return Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice.OuterSingleton;
	}

// ********** Begin ScriptStruct FProceduralSkeletalMeshSeparationSlice Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewProp_OtherHalf = { "OtherHalf", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshSeparationSlice, OtherHalf), Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherHalf_MetaData), NewProp_OtherHalf_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewProp_Separations_Inner = { "Separations", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewProp_Separations = { "Separations", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshSeparationSlice, Separations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separations_MetaData), NewProp_Separations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewProp_OtherHalf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewProp_Separations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewProp_Separations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProceduralSkeletalMeshSeparationSlice Property Definitions *********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralSkeletalMeshSeparationSlice",
	Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::PropPointers),
	sizeof(FProceduralSkeletalMeshSeparationSlice),
	alignof(FProceduralSkeletalMeshSeparationSlice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice()
{
	if (!Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice.InnerSingleton);
}
// ********** End ScriptStruct FProceduralSkeletalMeshSeparationSlice ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationSlice_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshSeparationSlice::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshSeparationSlice"),&Z_Registration_Info_UScriptStruct_FProceduralSkeletalMeshSeparationSlice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshSeparationSlice), 489581337U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationSlice_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationSlice_h__Script_ProceduralSkeletalMesh_2382507389{
	TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationSlice_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationSlice_h__Script_ProceduralSkeletalMesh_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
