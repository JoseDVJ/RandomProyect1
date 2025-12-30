// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFur/Public/FurComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GFUR_API UClass* Z_Construct_UClass_UFurSplines_NoRegister();
GFUR_API UClass* Z_Construct_UClass_UGFurComponent();
GFUR_API UClass* Z_Construct_UClass_UGFurComponent_NoRegister();
GFUR_API UScriptStruct* Z_Construct_UScriptStruct_FFurLod();
UPackage* Z_Construct_UPackage__Script_GFur();
// End Cross Module References

// Begin ScriptStruct FFurLod
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FurLod;
class UScriptStruct* FFurLod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FurLod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FurLod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFurLod, (UObject*)Z_Construct_UPackage__Script_GFur(), TEXT("FurLod"));
	}
	return Z_Registration_Info_UScriptStruct_FurLod.OuterSingleton;
}
template<> GFUR_API UScriptStruct* StaticStruct<FFurLod>()
{
	return FFurLod::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFurLod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Size of the fur on the screen at which the LOD will be used. The lower the number is, the longer it stays even if becomes smaller on the screen. Should be higher than \"Min Screen Size\"\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the fur on the screen at which the LOD will be used. The lower the number is, the longer it stays even if becomes smaller on the screen. Should be higher than \"Min Screen Size\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerCount_MetaData[] = {
		{ "Category", "LOD" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Number of shells for this particular LOD. Should be lower than \"Fur Layer Count\"\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of shells for this particular LOD. Should be lower than \"Fur Layer Count\"" },
#endif
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lod_MetaData[] = {
		{ "Category", "LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Which LOD of the Grow Mesh should be used to generate fur for this LOD.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which LOD of the Grow Mesh should be used to generate fur for this LOD." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsEnabled_MetaData[] = {
		{ "Category", "LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If fur should react to forces and movement while using this LOD.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If fur should react to forces and movement while using this LOD." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableMorphTargets_MetaData[] = {
		{ "Category", "LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Turns off support for Morph Targets\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns off support for Morph Targets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Lod;
	static void NewProp_PhysicsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PhysicsEnabled;
	static void NewProp_DisableMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableMorphTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFurLod>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurLod, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount = { "LayerCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurLod, LayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerCount_MetaData), NewProp_LayerCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod = { "Lod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFurLod, Lod), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lod_MetaData), NewProp_Lod_MetaData) };
void Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_SetBit(void* Obj)
{
	((FFurLod*)Obj)->PhysicsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled = { "PhysicsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFurLod), &Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsEnabled_MetaData), NewProp_PhysicsEnabled_MetaData) };
void Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_SetBit(void* Obj)
{
	((FFurLod*)Obj)->DisableMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets = { "DisableMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFurLod), &Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableMorphTargets_MetaData), NewProp_DisableMorphTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFurLod_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GFur,
	nullptr,
	&NewStructOps,
	"FurLod",
	Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers),
	sizeof(FFurLod),
	alignof(FFurLod),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFurLod_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFurLod()
{
	if (!Z_Registration_Info_UScriptStruct_FurLod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FurLod.InnerSingleton, Z_Construct_UScriptStruct_FFurLod_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FurLod.InnerSingleton;
}
// End ScriptStruct FFurLod

// Begin Class UGFurComponent Function RegenerateFur
struct Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "gFur Shell settings" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFurComponent, nullptr, "RegenerateFur", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGFurComponent_RegenerateFur()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGFurComponent::execRegenerateFur)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateFur();
	P_NATIVE_END;
}
// End Class UGFurComponent Function RegenerateFur

// Begin Class UGFurComponent
void UGFurComponent::StaticRegisterNativesUGFurComponent()
{
	UClass* Class = UGFurComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegenerateFur", &UGFurComponent::execRegenerateFur },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFurComponent);
UClass* Z_Construct_UClass_UGFurComponent_NoRegister()
{
	return UGFurComponent::StaticClass();
}
struct Z_Construct_UClass_UGFurComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UFurComponent */" },
#endif
		{ "DisplayName", "gFur" },
		{ "HideCategories", "Physics Object Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "FurComponent.h" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFurComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalGrowMesh_MetaData[] = {
		{ "Category", "gFur Skeletal Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Mesh used to generate shells. Usually this mesh will have the polys of eyes removed, interior of the mouth or claws.\n\x09* It's necessary for the mesh to be skinned exactly like the main mesh, otherwise different artifacts could show up.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh used to generate shells. Usually this mesh will have the polys of eyes removed, interior of the mouth or claws.\nIt's necessary for the mesh to be skinned exactly like the main mesh, otherwise different artifacts could show up." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticGrowMesh_MetaData[] = {
		{ "Category", "gFur Static Mesh" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FurSplines_MetaData[] = {
		{ "Category", "gFur Guides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Splines from 3D apps that give basic shape and length to the fur. Does not have to be used.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Splines from 3D apps that give basic shape and length to the fur. Does not have to be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalGuideMeshes_MetaData[] = {
		{ "Category", "gFur Skeletal Mesh" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticGuideMeshes_MetaData[] = {
		{ "Category", "gFur Static Mesh" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerCount_MetaData[] = {
		{ "Category", "gFur Shell settings" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the number of shells. Less = better performance\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of shells. Less = better performance" },
#endif
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenSize_MetaData[] = {
		{ "Category", "gFur Shell settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If the fur becomes too small on the screen it will disappear for better performance. The lower the number the longer the fur remains on the screen even if small.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the fur becomes too small on the screen it will disappear for better performance. The lower the number the longer the fur remains on the screen even if small." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODs_MetaData[] = {
		{ "Category", "gFur Shell settings" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODFromParent_MetaData[] = {
		{ "Category", "gFur Shell settings" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellBias_MetaData[] = {
		{ "Category", "gFur Shell settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With value 0.0 the shells are distributed linearly from root to tip. With values larger than 0.0, distribution becomes nonlinear,\n\x09* pushing the shells more to the tip where the shells tend to be more visible if the layer count is relatively low.\n\x09* With low shell count, using bias > 0 can help reduce artefacts at the fur tip.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With value 0.0 the shells are distributed linearly from root to tip. With values larger than 0.0, distribution becomes nonlinear,\npushing the shells more to the tip where the shells tend to be more visible if the layer count is relatively low.\nWith low shell count, using bias > 0 can help reduce artefacts at the fur tip." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FurLength_MetaData[] = {
		{ "Category", "gFur Shell settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the length of the fur if \"fur splines\" are not used. If \"fur splines\" are used, this value scales them (1.0 = no change, >1.0 splines are scaled up, <1.0 splines are scaled down)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the length of the fur if \"fur splines\" are not used. If \"fur splines\" are used, this value scales them (1.0 = no change, >1.0 splines are scaled up, <1.0 splines are scaled down)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFurLength_MetaData[] = {
		{ "Category", "gFur Shell settings" },
		{ "ClampMin", "0.001" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Overrides length of too short splines.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides length of too short splines." },
#endif
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveFacesWithoutSplines_MetaData[] = {
		{ "Category", "gFur Shell settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes faces without splines.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes faces without splines." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsEnabled_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If fur should react to forces and movement.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If fur should react to forces and movement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceDistribution_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With value = 1.0, the forces affecting fur are distributed linearly from root to tip.\n\x09* Values above 1.0 push the forces more to the tip, leaving the lower parts of fur strands less affected.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With value = 1.0, the forces affecting fur are distributed linearly from root to tip.\nValues above 1.0 push the forces more to the tip, leaving the lower parts of fur strands less affected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Higher values make the fur bend less under the different forces\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher values make the fur bend less under the different forces" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* How fast the fur loses energy from different forces and comes to stop.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the fur loses energy from different forces and comes to stop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantForce_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Constant force affecting the fur. Usually this emulates gravity.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constant force affecting the fur. Usually this emulates gravity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Maximum allowed forces to act on the fur. This allows you to clamp the motion of the fur if it's too much, but otherwise the fur looks good.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed forces to act on the fur. This allows you to clamp the motion of the fur if it's too much, but otherwise the fur looks good." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxForceTorqueFactor_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Clamps the forces coming from rotational movement of the bones. This value is multiplying the \"Max Force\" parameter.\n\x09* At value 1.0 torque forces are effectively clamped with \"Max Force\", values below 1.0 clamp the torque forces even more than \"Max Force\",\n\x09* values above 1.0 give more room to the torque forces that would be otherwise clamped if \"Max Force Torque Factor\" would be 1.0\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamps the forces coming from rotational movement of the bones. This value is multiplying the \"Max Force\" parameter.\nAt value 1.0 torque forces are effectively clamped with \"Max Force\", values below 1.0 clamp the torque forces even more than \"Max Force\",\nvalues above 1.0 give more room to the torque forces that would be otherwise clamped if \"Max Force Torque Factor\" would be 1.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceHairBias_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Length of the reference hair for which physics is calculated for. 1 takes longer hair into account, 0 takes more of the short hair.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the reference hair for which physics is calculated for. 1 takes longer hair into account, 0 takes more of the short hair." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HairLengthForceUniformity_MetaData[] = {
		{ "Category", "gFur Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With value = 0.0, all the fur hair will bend closer to \"Reference Hair\". Values closer to 1.0 will bend longer and shorter hair the same way.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With value = 0.0, all the fur hair will bend closer to \"Reference Hair\". Values closer to 1.0 will bend longer and shorter hair the same way." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsOffsetLength_MetaData[] = {
		{ "Category", "gFur Physics" },
		{ "ModuleRelativePath", "Public/FurComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseStrength_MetaData[] = {
		{ "Category", "gFur Shell settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Introduces noise to the shell vertices along the normal. This helps to break up the uniformity of the shell slices when viewed from the side.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Introduces noise to the shell vertices along the normal. This helps to break up the uniformity of the shell slices when viewed from the side." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableMorphTargets_MetaData[] = {
		{ "Category", "gFur Shell settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Turns off support for Morph Targets\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns off support for Morph Targets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "SkeletalMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n\x09 * 1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\n\x09 * A lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\n\x09 * Value can be < 0 (from legcay content, or code changes)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/FurComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\nA lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\nValue can be < 0 (from legcay content, or code changes)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalGrowMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticGrowMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FurSplines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalGuideMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalGuideMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticGuideMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticGuideMeshes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODs;
	static void NewProp_LODFromParent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LODFromParent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShellBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FurLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFurLength;
	static void NewProp_RemoveFacesWithoutSplines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveFacesWithoutSplines;
	static void NewProp_PhysicsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PhysicsEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForceTorqueFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceHairBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HairLengthForceUniformity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsOffsetLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseStrength;
	static void NewProp_DisableMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableMorphTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFurComponent_RegenerateFur, "RegenerateFur" }, // 3631819509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFurComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh = { "SkeletalGrowMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, SkeletalGrowMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalGrowMesh_MetaData), NewProp_SkeletalGrowMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh = { "StaticGrowMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, StaticGrowMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticGrowMesh_MetaData), NewProp_StaticGrowMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines = { "FurSplines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, FurSplines), Z_Construct_UClass_UFurSplines_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FurSplines_MetaData), NewProp_FurSplines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_Inner = { "SkeletalGuideMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes = { "SkeletalGuideMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, SkeletalGuideMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalGuideMeshes_MetaData), NewProp_SkeletalGuideMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_Inner = { "StaticGuideMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes = { "StaticGuideMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, StaticGuideMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticGuideMeshes_MetaData), NewProp_StaticGuideMeshes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount = { "LayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, LayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerCount_MetaData), NewProp_LayerCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize = { "MinScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, MinScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScreenSize_MetaData), NewProp_MinScreenSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_Inner = { "LODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFurLod, METADATA_PARAMS(0, nullptr) }; // 2281775423
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs = { "LODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, LODs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODs_MetaData), NewProp_LODs_MetaData) }; // 2281775423
void Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_SetBit(void* Obj)
{
	((UGFurComponent*)Obj)->LODFromParent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent = { "LODFromParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODFromParent_MetaData), NewProp_LODFromParent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias = { "ShellBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, ShellBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellBias_MetaData), NewProp_ShellBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength = { "FurLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, FurLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FurLength_MetaData), NewProp_FurLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength = { "MinFurLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, MinFurLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFurLength_MetaData), NewProp_MinFurLength_MetaData) };
void Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_SetBit(void* Obj)
{
	((UGFurComponent*)Obj)->RemoveFacesWithoutSplines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines = { "RemoveFacesWithoutSplines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveFacesWithoutSplines_MetaData), NewProp_RemoveFacesWithoutSplines_MetaData) };
void Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_SetBit(void* Obj)
{
	((UGFurComponent*)Obj)->PhysicsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled = { "PhysicsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsEnabled_MetaData), NewProp_PhysicsEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution = { "ForceDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, ForceDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceDistribution_MetaData), NewProp_ForceDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce = { "ConstantForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, ConstantForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantForce_MetaData), NewProp_ConstantForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, MaxForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxForce_MetaData), NewProp_MaxForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor = { "MaxForceTorqueFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, MaxForceTorqueFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxForceTorqueFactor_MetaData), NewProp_MaxForceTorqueFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias = { "ReferenceHairBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, ReferenceHairBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceHairBias_MetaData), NewProp_ReferenceHairBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity = { "HairLengthForceUniformity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, HairLengthForceUniformity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HairLengthForceUniformity_MetaData), NewProp_HairLengthForceUniformity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength = { "MaxPhysicsOffsetLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, MaxPhysicsOffsetLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPhysicsOffsetLength_MetaData), NewProp_MaxPhysicsOffsetLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength = { "NoiseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, NoiseStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseStrength_MetaData), NewProp_NoiseStrength_MetaData) };
void Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_SetBit(void* Obj)
{
	((UGFurComponent*)Obj)->DisableMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets = { "DisableMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableMorphTargets_MetaData), NewProp_DisableMorphTargets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFurComponent, StreamingDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingDistanceMultiplier_MetaData), NewProp_StreamingDistanceMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFurComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGFurComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GFur,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFurComponent_Statics::ClassParams = {
	&UGFurComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGFurComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFurComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGFurComponent()
{
	if (!Z_Registration_Info_UClass_UGFurComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFurComponent.OuterSingleton, Z_Construct_UClass_UGFurComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGFurComponent.OuterSingleton;
}
template<> GFUR_API UClass* StaticClass<UGFurComponent>()
{
	return UGFurComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGFurComponent);
UGFurComponent::~UGFurComponent() {}
// End Class UGFurComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFurLod::StaticStruct, Z_Construct_UScriptStruct_FFurLod_Statics::NewStructOps, TEXT("FurLod"), &Z_Registration_Info_UScriptStruct_FurLod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFurLod), 2281775423U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGFurComponent, UGFurComponent::StaticClass, TEXT("UGFurComponent"), &Z_Registration_Info_UClass_UGFurComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFurComponent), 2722424837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_2547891744(TEXT("/Script/GFur"),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_gFurPro_Master_Source_GFur_Public_FurComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
