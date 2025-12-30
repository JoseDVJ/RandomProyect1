// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFurEditor/Private/FurCombSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurCombSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GFUREDITOR_API UClass* Z_Construct_UClass_UFurCombSettings();
GFUREDITOR_API UClass* Z_Construct_UClass_UFurCombSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GFurEditor();
// End Cross Module References

// Begin Class UFurCombSettings
void UFurCombSettings::StaticRegisterNativesUFurCombSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFurCombSettings);
UClass* Z_Construct_UClass_UFurCombSettings_NoRegister()
{
	return UFurCombSettings::StaticClass();
}
struct Z_Construct_UClass_UFurCombSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FurCombSettings.h" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Comb" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the Brush used for Painting */" },
#endif
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the Brush used for Painting" },
#endif
		{ "UIMax", "50.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Comb" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Strength of the brush (0.0 - 1.0) */" },
#endif
		{ "DisplayName", "Strength" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength of the brush (0.0 - 1.0)" },
#endif
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffAmount_MetaData[] = {
		{ "Category", "Comb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
#endif
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyHeight_MetaData[] = {
		{ "Category", "Comb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height of fur spline at which the brush effect is applied. 0=root, 1=tip */" },
#endif
		{ "DisplayName", "Effect Height" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of fur spline at which the brush effect is applied. 0=root, 1=tip" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplySpread_MetaData[] = {
		{ "Category", "Comb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Affects the distance at which the effect is applied or faded out in both directions from the \"Effect Height\" point. -1 = extremely short, mostly at exact location defined by \"Effect Height\", 0 smooth distribution which fades out in both directions from \"Effect Height\", 1 affects the whole spline same way, achieving sort of linear effect.*/" },
#endif
		{ "DisplayName", "Effect Distribution" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Affects the distance at which the effect is applied or faded out in both directions from the \"Effect Height\" point. -1 = extremely short, mostly at exact location defined by \"Effect Height\", 0 smooth distribution which fades out in both directions from \"Effect Height\", 1 affects the whole spline same way, achieving sort of linear effect." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistCount_MetaData[] = {
		{ "Category", "Comb" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Affects the distance at which the effect is applied or faded out in both directions from the \"Effect Height\" point. -1 = extremely short, mostly at exact location defined by \"Effect Height\", 0 smooth distribution which fades out in both directions from \"Effect Height\", 1 affects the whole spline same way, achieving sort of linear effect.*/" },
#endif
		{ "DisplayName", "Twist Count" },
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Affects the distance at which the effect is applied or faded out in both directions from the \"Effect Height\" point. -1 = extremely short, mostly at exact location defined by \"Effect Height\", 0 smooth distribution which fades out in both directions from \"Effect Height\", 1 affects the whole spline same way, achieving sort of linear effect." },
#endif
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFlow_MetaData[] = {
		{ "Category", "Comb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the brush should affect the fur even if it's not moved.*/" },
#endif
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the brush should affect the fur even if it's not moved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorX_MetaData[] = {
		{ "Category", "Comb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mirrors the grooming along the X axis of the mesh.*/" },
#endif
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirrors the grooming along the X axis of the mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorY_MetaData[] = {
		{ "Category", "Comb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mirrors the grooming along the Y axis of the mesh.*/" },
#endif
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirrors the grooming along the Y axis of the mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorZ_MetaData[] = {
		{ "Category", "Comb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mirrors the grooming along the Z axis of the mesh.*/" },
#endif
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirrors the grooming along the Z axis of the mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSplines_MetaData[] = {
		{ "Category", "Comb" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggles visualization of the spline guides.*/" },
#endif
		{ "ModuleRelativePath", "Private/FurCombSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles visualization of the spline guides." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApplyHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApplySpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistCount;
	static void NewProp_bEnableFlow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFlow;
	static void NewProp_bMirrorX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorX;
	static void NewProp_bMirrorY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorY;
	static void NewProp_bMirrorZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorZ;
	static void NewProp_bShowSplines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSplines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFurCombSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurCombSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurCombSettings, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_FalloffAmount = { "FalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurCombSettings, FalloffAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffAmount_MetaData), NewProp_FalloffAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_ApplyHeight = { "ApplyHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurCombSettings, ApplyHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyHeight_MetaData), NewProp_ApplyHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_ApplySpread = { "ApplySpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurCombSettings, ApplySpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplySpread_MetaData), NewProp_ApplySpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_TwistCount = { "TwistCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFurCombSettings, TwistCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistCount_MetaData), NewProp_TwistCount_MetaData) };
void Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bEnableFlow_SetBit(void* Obj)
{
	((UFurCombSettings*)Obj)->bEnableFlow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bEnableFlow = { "bEnableFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFurCombSettings), &Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bEnableFlow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFlow_MetaData), NewProp_bEnableFlow_MetaData) };
void Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorX_SetBit(void* Obj)
{
	((UFurCombSettings*)Obj)->bMirrorX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorX = { "bMirrorX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFurCombSettings), &Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorX_MetaData), NewProp_bMirrorX_MetaData) };
void Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorY_SetBit(void* Obj)
{
	((UFurCombSettings*)Obj)->bMirrorY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorY = { "bMirrorY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFurCombSettings), &Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorY_MetaData), NewProp_bMirrorY_MetaData) };
void Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorZ_SetBit(void* Obj)
{
	((UFurCombSettings*)Obj)->bMirrorZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorZ = { "bMirrorZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFurCombSettings), &Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorZ_MetaData), NewProp_bMirrorZ_MetaData) };
void Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bShowSplines_SetBit(void* Obj)
{
	((UFurCombSettings*)Obj)->bShowSplines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bShowSplines = { "bShowSplines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFurCombSettings), &Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bShowSplines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSplines_MetaData), NewProp_bShowSplines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFurCombSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_FalloffAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_ApplyHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_ApplySpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_TwistCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bEnableFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bMirrorZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFurCombSettings_Statics::NewProp_bShowSplines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFurCombSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFurCombSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GFurEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFurCombSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFurCombSettings_Statics::ClassParams = {
	&UFurCombSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFurCombSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFurCombSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFurCombSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFurCombSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFurCombSettings()
{
	if (!Z_Registration_Info_UClass_UFurCombSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFurCombSettings.OuterSingleton, Z_Construct_UClass_UFurCombSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFurCombSettings.OuterSingleton;
}
template<> GFUREDITOR_API UClass* StaticClass<UFurCombSettings>()
{
	return UFurCombSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFurCombSettings);
// End Class UFurCombSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurCombSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFurCombSettings, UFurCombSettings::StaticClass, TEXT("UFurCombSettings"), &Z_Registration_Info_UClass_UFurCombSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFurCombSettings), 2735894730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurCombSettings_h_2920858462(TEXT("/Script/GFurEditor"),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurCombSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFurEditor_Private_FurCombSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
