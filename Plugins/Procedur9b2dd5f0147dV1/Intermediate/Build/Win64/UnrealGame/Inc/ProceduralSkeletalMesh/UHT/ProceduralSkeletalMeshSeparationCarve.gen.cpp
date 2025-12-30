// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMesh/Public/ProceduralSkeletalMeshSeparationCarve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshSeparationCarve() {}

// Begin Cross Module References
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// End Cross Module References

// Begin ScriptStruct FProceduralSkeletalMeshSeparationCarve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve;
class UScriptStruct* FProceduralSkeletalMeshSeparationCarve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshSeparationCarve"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve.OuterSingleton;
}
template<> PROCEDURALSKELETALMESH_API UScriptStruct* StaticStruct<FProceduralSkeletalMeshSeparationCarve>()
{
	return FProceduralSkeletalMeshSeparationCarve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparationCarve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separations_MetaData[] = {
		{ "Category", "Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshSeparationCarve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of procedural vertices to skeletal bones for a single section, indexed by procedural vertex id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Separations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Separations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshSeparationCarve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::NewProp_Separations_Inner = { "Separations", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::NewProp_Separations = { "Separations", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshSeparationCarve, Separations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separations_MetaData), NewProp_Separations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::NewProp_Separations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::NewProp_Separations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralSkeletalMeshSeparationCarve",
	Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::PropPointers),
	sizeof(FProceduralSkeletalMeshSeparationCarve),
	alignof(FProceduralSkeletalMeshSeparationCarve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve.InnerSingleton;
}
// End ScriptStruct FProceduralSkeletalMeshSeparationCarve

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationCarve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshSeparationCarve::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshSeparationCarve"), &Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparationCarve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshSeparationCarve), 1607990205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationCarve_h_350025320(TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationCarve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparationCarve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
