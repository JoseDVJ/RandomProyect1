// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMesh/Public/ProceduralMeshBoneInfluence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMeshBoneInfluence() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// End Cross Module References

// Begin ScriptStruct FProceduralMeshBoneInfluence
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence;
class UScriptStruct* FProceduralMeshBoneInfluence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralMeshBoneInfluence"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence.OuterSingleton;
}
template<> PROCEDURALSKELETALMESH_API UScriptStruct* StaticStruct<FProceduralMeshBoneInfluence>()
{
	return FProceduralMeshBoneInfluence::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralMeshBoneInfluence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshBoneInfluence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshBoneInfluence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVertexPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshBoneInfluence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVertexPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMeshBoneInfluence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshBoneInfluence, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndex_MetaData), NewProp_BoneIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshBoneInfluence, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewProp_LocalVertexPosition = { "LocalVertexPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshBoneInfluence, LocalVertexPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVertexPosition_MetaData), NewProp_LocalVertexPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewProp_BoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewProp_LocalVertexPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralMeshBoneInfluence",
	Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::PropPointers),
	sizeof(FProceduralMeshBoneInfluence),
	alignof(FProceduralMeshBoneInfluence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence.InnerSingleton, Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence.InnerSingleton;
}
// End ScriptStruct FProceduralMeshBoneInfluence

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshBoneInfluence_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralMeshBoneInfluence::StaticStruct, Z_Construct_UScriptStruct_FProceduralMeshBoneInfluence_Statics::NewStructOps, TEXT("ProceduralMeshBoneInfluence"), &Z_Registration_Info_UScriptStruct_ProceduralMeshBoneInfluence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralMeshBoneInfluence), 2461949899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshBoneInfluence_h_2733159715(TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshBoneInfluence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshBoneInfluence_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
