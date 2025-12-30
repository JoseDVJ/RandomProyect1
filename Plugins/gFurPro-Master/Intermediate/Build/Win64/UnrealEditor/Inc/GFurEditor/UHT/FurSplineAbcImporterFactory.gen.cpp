// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFurEditor/Private/FurSplineAbcImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurSplineAbcImporterFactory() {}

// Begin Cross Module References
GFUREDITOR_API UClass* Z_Construct_UClass_UFurSplineAbcImporterFactory();
GFUREDITOR_API UClass* Z_Construct_UClass_UFurSplineAbcImporterFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GFurEditor();
// End Cross Module References

// Begin Class UFurSplineAbcImporterFactory
void UFurSplineAbcImporterFactory::StaticRegisterNativesUFurSplineAbcImporterFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFurSplineAbcImporterFactory);
UClass* Z_Construct_UClass_UFurSplineAbcImporterFactory_NoRegister()
{
	return UFurSplineAbcImporterFactory::StaticClass();
}
struct Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FurSplineAbcImporterFactory.h" },
		{ "ModuleRelativePath", "Private/FurSplineAbcImporterFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFurSplineAbcImporterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GFurEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics::ClassParams = {
	&UFurSplineAbcImporterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFurSplineAbcImporterFactory()
{
	if (!Z_Registration_Info_UClass_UFurSplineAbcImporterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFurSplineAbcImporterFactory.OuterSingleton, Z_Construct_UClass_UFurSplineAbcImporterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFurSplineAbcImporterFactory.OuterSingleton;
}
template<> GFUREDITOR_API UClass* StaticClass<UFurSplineAbcImporterFactory>()
{
	return UFurSplineAbcImporterFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFurSplineAbcImporterFactory);
UFurSplineAbcImporterFactory::~UFurSplineAbcImporterFactory() {}
// End Class UFurSplineAbcImporterFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineAbcImporterFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFurSplineAbcImporterFactory, UFurSplineAbcImporterFactory::StaticClass, TEXT("UFurSplineAbcImporterFactory"), &Z_Registration_Info_UClass_UFurSplineAbcImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFurSplineAbcImporterFactory), 730653356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineAbcImporterFactory_h_235539707(TEXT("/Script/GFurEditor"),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineAbcImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineAbcImporterFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
