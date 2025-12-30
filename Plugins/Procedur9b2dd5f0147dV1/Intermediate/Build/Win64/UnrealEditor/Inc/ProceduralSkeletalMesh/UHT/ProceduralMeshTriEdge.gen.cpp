// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMesh/Public/ProceduralMeshTriEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMeshTriEdge() {}

// Begin Cross Module References
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshTriEdge();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// End Cross Module References

// Begin ScriptStruct FProceduralMeshTriEdge
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge;
class UScriptStruct* FProceduralMeshTriEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralMeshTriEdge, (UObject*)Z_Construct_UPackage__Script_ProceduralSkeletalMesh(), TEXT("ProceduralMeshTriEdge"));
	}
	return Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge.OuterSingleton;
}
template<> PROCEDURALSKELETALMESH_API UScriptStruct* StaticStruct<FProceduralMeshTriEdge>()
{
	return FProceduralMeshTriEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshTriEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshTriEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralMeshTriEdge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralMeshTriEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshTriEdge, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProceduralMeshTriEdge, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::NewProp_B,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
	nullptr,
	&NewStructOps,
	"ProceduralMeshTriEdge",
	Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::PropPointers),
	sizeof(FProceduralMeshTriEdge),
	alignof(FProceduralMeshTriEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProceduralMeshTriEdge()
{
	if (!Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge.InnerSingleton, Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge.InnerSingleton;
}
// End ScriptStruct FProceduralMeshTriEdge

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshTriEdge_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProceduralMeshTriEdge::StaticStruct, Z_Construct_UScriptStruct_FProceduralMeshTriEdge_Statics::NewStructOps, TEXT("ProceduralMeshTriEdge"), &Z_Registration_Info_UScriptStruct_ProceduralMeshTriEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProceduralMeshTriEdge), 2473024933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshTriEdge_h_4142514981(TEXT("/Script/ProceduralSkeletalMesh"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshTriEdge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralMeshTriEdge_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
