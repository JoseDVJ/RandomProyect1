// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFurEditor/Private/FurSplineImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurSplineImporterFactory() {}

// Begin Cross Module References
GFUREDITOR_API UClass* Z_Construct_UClass_UFurSplineImporterFactory();
GFUREDITOR_API UClass* Z_Construct_UClass_UFurSplineImporterFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_GFurEditor();
// End Cross Module References

// Begin Class UFurSplineImporterFactory
void UFurSplineImporterFactory::StaticRegisterNativesUFurSplineImporterFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFurSplineImporterFactory);
UClass* Z_Construct_UClass_UFurSplineImporterFactory_NoRegister()
{
	return UFurSplineImporterFactory::StaticClass();
}
struct Z_Construct_UClass_UFurSplineImporterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FurSplineImporterFactory.h" },
		{ "ModuleRelativePath", "Private/FurSplineImporterFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFurSplineImporterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFurSplineImporterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_GFurEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplineImporterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFurSplineImporterFactory_Statics::ClassParams = {
	&UFurSplineImporterFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFurSplineImporterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFurSplineImporterFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFurSplineImporterFactory()
{
	if (!Z_Registration_Info_UClass_UFurSplineImporterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFurSplineImporterFactory.OuterSingleton, Z_Construct_UClass_UFurSplineImporterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFurSplineImporterFactory.OuterSingleton;
}
template<> GFUREDITOR_API UClass* StaticClass<UFurSplineImporterFactory>()
{
	return UFurSplineImporterFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFurSplineImporterFactory);
UFurSplineImporterFactory::~UFurSplineImporterFactory() {}
// End Class UFurSplineImporterFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineImporterFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFurSplineImporterFactory, UFurSplineImporterFactory::StaticClass, TEXT("UFurSplineImporterFactory"), &Z_Registration_Info_UClass_UFurSplineImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFurSplineImporterFactory), 1779293087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineImporterFactory_h_2024296412(TEXT("/Script/GFurEditor"),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurSplineImporterFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
