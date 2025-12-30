// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFur/Public/FurSplines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurSplines() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GFUR_API UClass* Z_Construct_UClass_UFurSplines();
GFUR_API UClass* Z_Construct_UClass_UFurSplines_NoRegister();
UPackage* Z_Construct_UPackage__Script_GFur();
// End Cross Module References

// Begin Class UFurSplines
void UFurSplines::StaticRegisterNativesUFurSplines()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFurSplines);
UClass* Z_Construct_UClass_UFurSplines_NoRegister()
{
	return UFurSplines::StaticClass();
}
struct Z_Construct_UClass_UFurSplines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FurSplines.h" },
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Old - don't use\n" },
#endif
		{ "ModuleRelativePath", "Public/FurSplines.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Old - don't use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilename_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportTransformation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/FurSplines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControlPointCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportFilename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportTransformation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFurSplines>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Index_Inner = { "Index", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, Index), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Count_Inner = { "Count", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, Count), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_ControlPointCount = { "ControlPointCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, ControlPointCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPointCount_MetaData), NewProp_ControlPointCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_ImportFilename = { "ImportFilename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, ImportFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportFilename_MetaData), NewProp_ImportFilename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_ImportTransformation = { "ImportTransformation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, ImportTransformation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportTransformation_MetaData), NewProp_ImportTransformation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurSplines_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurSplines, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFurSplines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Index_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Count_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_ControlPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_ImportFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_ImportTransformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurSplines_Statics::NewProp_Threshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplines_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFurSplines_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GFur,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplines_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFurSplines_Statics::ClassParams = {
	&UFurSplines::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFurSplines_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplines_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplines_Statics::Class_MetaDataParams), Z_Construct_UClass_UFurSplines_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFurSplines()
{
	if (!Z_Registration_Info_UClass_UFurSplines.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFurSplines.OuterSingleton, Z_Construct_UClass_UFurSplines_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFurSplines.OuterSingleton;
}
template<> GFUR_API UClass* StaticClass<UFurSplines>()
{
	return UFurSplines::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFurSplines);
UFurSplines::~UFurSplines() {}
// End Class UFurSplines

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurSplines_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFurSplines, UFurSplines::StaticClass, TEXT("UFurSplines"), &Z_Registration_Info_UClass_UFurSplines, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFurSplines), 2568422747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurSplines_h_1200352156(TEXT("/Script/GFur"),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurSplines_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurSplines_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
