// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMesh/Public/ProceduralSkeletalMeshVertexSection.h"
#include "ProceduralSkeletalMesh/Public/SkeletalVertexMapItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshVertexSection() {}

// Begin Cross Module References
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalVertexMapItem();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// End Cross Module References

// Begin ScriptStruct FProceduralSkeletalMeshVertexSection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection;
class UScriptStruct* FProceduralSkeletalMeshVertexSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralSkeletalMeshVertexSection"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection.OuterSingleton;
}
template<> PROCEDURALSKELETALMESH_API UScriptStruct* StaticStruct<FProceduralSkeletalMeshVertexSection>()
{
	return FProceduralSkeletalMeshVertexSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics
{
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralSkeletalMeshVertexSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap_Inner = { "VertexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalVertexMapItem, METADATA_PARAMS(0, nullptr) }; // 3276066282
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap = { "VertexMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralSkeletalMeshVertexSection, VertexMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexMap_MetaData), NewProp_VertexMap_MetaData) }; // 3276066282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewProp_VertexMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::PropPointers) < 2048);
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
	if (!Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection.InnerSingleton, Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection.InnerSingleton;
}
// End ScriptStruct FProceduralSkeletalMeshVertexSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralSkeletalMeshVertexSection::StaticStruct, Z_Construct_UScriptStruct_FProceduralSkeletalMeshVertexSection_Statics::NewStructOps, TEXT("ProceduralSkeletalMeshVertexSection"), &Z_Registration_Info_UScriptStruct_ProceduralSkeletalMeshVertexSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralSkeletalMeshVertexSection), 2890836799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h_2219303013(TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshVertexSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
