// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkinnedMeshPuppetComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSkinnedMeshPuppetComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UClass* Z_Construct_UClass_USkinnedMeshPuppetComponent();
PROCEDURALSKELETALMESH_API UClass* Z_Construct_UClass_USkinnedMeshPuppetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USkinnedMeshPuppetComponent Function Initialize **************************
struct Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics
{
	struct SkinnedMeshPuppetComponent_eventInitialize_Parms
	{
		USkinnedMeshComponent* Mesh;
		USkeletalMesh* PuppetMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Puppet" },
		{ "ModuleRelativePath", "Public/SkinnedMeshPuppetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PuppetMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshPuppetComponent_eventInitialize_Parms, Mesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::NewProp_PuppetMesh = { "PuppetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkinnedMeshPuppetComponent_eventInitialize_Parms, PuppetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::NewProp_PuppetMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USkinnedMeshPuppetComponent, nullptr, "Initialize", 	Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::SkinnedMeshPuppetComponent_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::SkinnedMeshPuppetComponent_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkinnedMeshPuppetComponent::execInitialize)
{
	P_GET_OBJECT(USkinnedMeshComponent,Z_Param_Mesh);
	P_GET_OBJECT(USkeletalMesh,Z_Param_PuppetMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_Mesh,Z_Param_PuppetMesh);
	P_NATIVE_END;
}
// ********** End Class USkinnedMeshPuppetComponent Function Initialize ****************************

// ********** Begin Class USkinnedMeshPuppetComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USkinnedMeshPuppetComponent;
UClass* USkinnedMeshPuppetComponent::GetPrivateStaticClass()
{
	using TClass = USkinnedMeshPuppetComponent;
	if (!Z_Registration_Info_UClass_USkinnedMeshPuppetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SkinnedMeshPuppetComponent"),
			Z_Registration_Info_UClass_USkinnedMeshPuppetComponent.InnerSingleton,
			StaticRegisterNativesUSkinnedMeshPuppetComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USkinnedMeshPuppetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USkinnedMeshPuppetComponent_NoRegister()
{
	return USkinnedMeshPuppetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Component that allows the owner to receive damage\n/// </summary>\n" },
#endif
		{ "IncludePath", "SkinnedMeshPuppetComponent.h" },
		{ "ModuleRelativePath", "Public/SkinnedMeshPuppetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nComponent that allows the owner to receive damage\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PuppetComponent_MetaData[] = {
		{ "Category", "Puppet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkinnedMeshPuppetComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USkinnedMeshPuppetComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PuppetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USkinnedMeshPuppetComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &USkinnedMeshPuppetComponent::execInitialize },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedMeshPuppetComponent_Initialize, "Initialize" }, // 1355465632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedMeshPuppetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics

// ********** Begin Class USkinnedMeshPuppetComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::NewProp_PuppetComponent = { "PuppetComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkinnedMeshPuppetComponent, PuppetComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PuppetComponent_MetaData), NewProp_PuppetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::NewProp_PuppetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::PropPointers) < 2048);
// ********** End Class USkinnedMeshPuppetComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::ClassParams = {
	&USkinnedMeshPuppetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::Class_MetaDataParams)
};
void USkinnedMeshPuppetComponent::StaticRegisterNativesUSkinnedMeshPuppetComponent()
{
	UClass* Class = USkinnedMeshPuppetComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USkinnedMeshPuppetComponent()
{
	if (!Z_Registration_Info_UClass_USkinnedMeshPuppetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinnedMeshPuppetComponent.OuterSingleton, Z_Construct_UClass_USkinnedMeshPuppetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkinnedMeshPuppetComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USkinnedMeshPuppetComponent);
USkinnedMeshPuppetComponent::~USkinnedMeshPuppetComponent() {}
// ********** End Class USkinnedMeshPuppetComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkinnedMeshPuppetComponent_h__Script_ProceduralSkeletalMesh_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkinnedMeshPuppetComponent, USkinnedMeshPuppetComponent::StaticClass, TEXT("USkinnedMeshPuppetComponent"), &Z_Registration_Info_UClass_USkinnedMeshPuppetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinnedMeshPuppetComponent), 3001645151U) },
	};
}; // Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkinnedMeshPuppetComponent_h__Script_ProceduralSkeletalMesh_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkinnedMeshPuppetComponent_h__Script_ProceduralSkeletalMesh_2164078932{
	TEXT("/Script/ProceduralSkeletalMesh"),
	Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkinnedMeshPuppetComponent_h__Script_ProceduralSkeletalMesh_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RandomProyect1_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_SkinnedMeshPuppetComponent_h__Script_ProceduralSkeletalMesh_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
