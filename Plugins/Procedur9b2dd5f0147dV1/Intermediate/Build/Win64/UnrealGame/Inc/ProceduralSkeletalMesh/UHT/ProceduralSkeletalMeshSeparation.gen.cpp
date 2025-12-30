// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMesh/Public/ProceduralSkeletalMeshSeparation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshSeparation() {}

// Begin Cross Module References
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// End Cross Module References

// Begin ScriptStruct FProceduralSkeletalMeshSeparation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation;
class UScriptStruct* FProceduralSkeletalMeshSeparation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshSeparation"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation.OuterSingleton;
}
template<> PROCEDURALSKELETALMESH_API UScriptStruct* StaticStruct<FProceduralSkeletalMeshSeparation>()
{
	return FProceduralSkeletalMeshSeparation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics
{
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Separations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Separations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshSeparation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations_Inner = { "Separations", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations = { "Separations", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshSeparation, Separations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separations_MetaData), NewProp_Separations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewProp_Separations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::PropPointers) < 2048);
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
	if (!Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation.InnerSingleton;
}
// End ScriptStruct FProceduralSkeletalMeshSeparation

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshSeparation::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparation_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshSeparation"), &Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshSeparation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshSeparation), 1421514054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h_2981868306(TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshSeparation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
