// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralSkeletalMesh/Public/ProceduralSkeletalMeshComponent.h"
#include "ProceduralSkeletalMesh/Public/ProceduralSkeletalMeshSeparationCarve.h"
#include "ProceduralSkeletalMesh/Public/ProceduralSkeletalMeshSeparationSlice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralSkeletalMeshComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UClass* Z_Construct_UClass_UProceduralSkeletalMeshComponent();
PROCEDURALSKELETALMESH_API UClass* Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve();
PROCEDURALSKELETALMESH_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice();
UPackage* Z_Construct_UPackage__Script_ProceduralSkeletalMesh();
// End Cross Module References

// Begin Class UProceduralSkeletalMeshComponent Function Carve
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics
{
	struct ProceduralSkeletalMeshComponent_eventCarve_Parms
	{
		UStaticMesh* CarveMesh;
		FTransform WorldSpaceTransform;
		float SimplificationAngleTolerance;
		float WindingTolerance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "CPP_Default_SimplificationAngleTolerance", "0.250000" },
		{ "CPP_Default_WindingTolerance", "0.500000" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarveMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationAngleTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_CarveMesh = { "CarveMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarve_Parms, CarveMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_WorldSpaceTransform = { "WorldSpaceTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarve_Parms, WorldSpaceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_SimplificationAngleTolerance = { "SimplificationAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarve_Parms, SimplificationAngleTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_WindingTolerance = { "WindingTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarve_Parms, WindingTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_CarveMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_WorldSpaceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_SimplificationAngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::NewProp_WindingTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "Carve", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::ProceduralSkeletalMeshComponent_eventCarve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::ProceduralSkeletalMeshComponent_eventCarve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execCarve)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_CarveMesh);
	P_GET_STRUCT(FTransform,Z_Param_WorldSpaceTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SimplificationAngleTolerance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WindingTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Carve(Z_Param_CarveMesh,Z_Param_WorldSpaceTransform,Z_Param_SimplificationAngleTolerance,Z_Param_WindingTolerance);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function Carve

// Begin Class UProceduralSkeletalMeshComponent Function CarveBone
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics
{
	struct ProceduralSkeletalMeshComponent_eventCarveBone_Parms
	{
		UStaticMesh* CarveMesh;
		FRotator CarveRotation;
		FVector CarveScale;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarveMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarveRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarveScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_CarveMesh = { "CarveMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBone_Parms, CarveMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_CarveRotation = { "CarveRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBone_Parms, CarveRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_CarveScale = { "CarveScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBone_Parms, CarveScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBone_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_CarveMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_CarveRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_CarveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "CarveBone", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::ProceduralSkeletalMeshComponent_eventCarveBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::ProceduralSkeletalMeshComponent_eventCarveBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execCarveBone)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_CarveMesh);
	P_GET_STRUCT(FRotator,Z_Param_CarveRotation);
	P_GET_STRUCT(FVector,Z_Param_CarveScale);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CarveBone(Z_Param_CarveMesh,Z_Param_CarveRotation,Z_Param_CarveScale,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function CarveBone

// Begin Class UProceduralSkeletalMeshComponent Function CarveBoneWithSeparation
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics
{
	struct ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms
	{
		UStaticMesh* CarveMesh;
		FRotator CarveRotation;
		FVector CarveScale;
		FName BoneName;
		FProceduralSkeletalMeshSeparationCarve ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarveMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarveRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarveScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_CarveMesh = { "CarveMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms, CarveMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_CarveRotation = { "CarveRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms, CarveRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_CarveScale = { "CarveScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms, CarveScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms, ReturnValue), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve, METADATA_PARAMS(0, nullptr) }; // 1607990205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_CarveMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_CarveRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_CarveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "CarveBoneWithSeparation", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventCarveBoneWithSeparation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execCarveBoneWithSeparation)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_CarveMesh);
	P_GET_STRUCT(FRotator,Z_Param_CarveRotation);
	P_GET_STRUCT(FVector,Z_Param_CarveScale);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProceduralSkeletalMeshSeparationCarve*)Z_Param__Result=P_THIS->CarveBoneWithSeparation(Z_Param_CarveMesh,Z_Param_CarveRotation,Z_Param_CarveScale,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function CarveBoneWithSeparation

// Begin Class UProceduralSkeletalMeshComponent Function CarveWithSeparation
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics
{
	struct ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms
	{
		UStaticMesh* CarveMesh;
		FTransform WorldSpaceTransform;
		float SimplificationAngleTolerance;
		float WindingTolerance;
		FProceduralSkeletalMeshSeparationCarve ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "CPP_Default_SimplificationAngleTolerance", "0.250000" },
		{ "CPP_Default_WindingTolerance", "0.400000" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarveMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationAngleTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingTolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_CarveMesh = { "CarveMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms, CarveMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_WorldSpaceTransform = { "WorldSpaceTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms, WorldSpaceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_SimplificationAngleTolerance = { "SimplificationAngleTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms, SimplificationAngleTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_WindingTolerance = { "WindingTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms, WindingTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms, ReturnValue), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationCarve, METADATA_PARAMS(0, nullptr) }; // 1607990205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_CarveMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_WorldSpaceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_SimplificationAngleTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_WindingTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "CarveWithSeparation", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventCarveWithSeparation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execCarveWithSeparation)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_CarveMesh);
	P_GET_STRUCT(FTransform,Z_Param_WorldSpaceTransform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SimplificationAngleTolerance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WindingTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProceduralSkeletalMeshSeparationCarve*)Z_Param__Result=P_THIS->CarveWithSeparation(Z_Param_CarveMesh,Z_Param_WorldSpaceTransform,Z_Param_SimplificationAngleTolerance,Z_Param_WindingTolerance);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function CarveWithSeparation

// Begin Class UProceduralSkeletalMeshComponent Function RefreshFromProceduralMesh
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics
{
	struct ProceduralSkeletalMeshComponent_eventRefreshFromProceduralMesh_Parms
	{
		UProceduralMeshComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventRefreshFromProceduralMesh_Parms, Component), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "RefreshFromProceduralMesh", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::ProceduralSkeletalMeshComponent_eventRefreshFromProceduralMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::ProceduralSkeletalMeshComponent_eventRefreshFromProceduralMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execRefreshFromProceduralMesh)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshFromProceduralMesh(Z_Param_Component);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function RefreshFromProceduralMesh

// Begin Class UProceduralSkeletalMeshComponent Function Slice
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics
{
	struct ProceduralSkeletalMeshComponent_eventSlice_Parms
	{
		FVector Position;
		FVector Normal;
		bool Ragdoll;
		UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh;
		UProceduralSkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "CPP_Default_OtherHalfSkinnedMesh", "None" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherHalfSkinnedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static void NewProp_Ragdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ragdoll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherHalfSkinnedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSlice_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSlice_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Ragdoll_SetBit(void* Obj)
{
	((ProceduralSkeletalMeshComponent_eventSlice_Parms*)Obj)->Ragdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Ragdoll = { "Ragdoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProceduralSkeletalMeshComponent_eventSlice_Parms), &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Ragdoll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_OtherHalfSkinnedMesh = { "OtherHalfSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSlice_Parms, OtherHalfSkinnedMesh), Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherHalfSkinnedMesh_MetaData), NewProp_OtherHalfSkinnedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSlice_Parms, ReturnValue), Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_Ragdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_OtherHalfSkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "Slice", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::ProceduralSkeletalMeshComponent_eventSlice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::ProceduralSkeletalMeshComponent_eventSlice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execSlice)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_UBOOL(Z_Param_Ragdoll);
	P_GET_OBJECT(UProceduralSkeletalMeshComponent,Z_Param_OtherHalfSkinnedMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UProceduralSkeletalMeshComponent**)Z_Param__Result=P_THIS->Slice(Z_Param_Position,Z_Param_Normal,Z_Param_Ragdoll,Z_Param_OtherHalfSkinnedMesh);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function Slice

// Begin Class UProceduralSkeletalMeshComponent Function SliceBoneWithSeparation
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics
{
	struct ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms
	{
		FName BoneName;
		FVector Normal;
		bool Ragdoll;
		UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh;
		FProceduralSkeletalMeshSeparationSlice ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "CPP_Default_OtherHalfSkinnedMesh", "None" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherHalfSkinnedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static void NewProp_Ragdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ragdoll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherHalfSkinnedMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_Ragdoll_SetBit(void* Obj)
{
	((ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms*)Obj)->Ragdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_Ragdoll = { "Ragdoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms), &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_Ragdoll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_OtherHalfSkinnedMesh = { "OtherHalfSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms, OtherHalfSkinnedMesh), Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherHalfSkinnedMesh_MetaData), NewProp_OtherHalfSkinnedMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms, ReturnValue), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice, METADATA_PARAMS(0, nullptr) }; // 1345530050
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_Ragdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_OtherHalfSkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "SliceBoneWithSeparation", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventSliceBoneWithSeparation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execSliceBoneWithSeparation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_UBOOL(Z_Param_Ragdoll);
	P_GET_OBJECT(UProceduralSkeletalMeshComponent,Z_Param_OtherHalfSkinnedMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProceduralSkeletalMeshSeparationSlice*)Z_Param__Result=P_THIS->SliceBoneWithSeparation(Z_Param_BoneName,Z_Param_Normal,Z_Param_Ragdoll,Z_Param_OtherHalfSkinnedMesh);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function SliceBoneWithSeparation

// Begin Class UProceduralSkeletalMeshComponent Function SliceWithSeparation
struct Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics
{
	struct ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms
	{
		FVector Position;
		FVector Normal;
		bool Ragdoll;
		UProceduralSkeletalMeshComponent* OtherHalfSkinnedMesh;
		FProceduralSkeletalMeshSeparationSlice ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operations" },
		{ "CPP_Default_OtherHalfSkinnedMesh", "None" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherHalfSkinnedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static void NewProp_Ragdoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Ragdoll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherHalfSkinnedMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Ragdoll_SetBit(void* Obj)
{
	((ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms*)Obj)->Ragdoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Ragdoll = { "Ragdoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms), &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Ragdoll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_OtherHalfSkinnedMesh = { "OtherHalfSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms, OtherHalfSkinnedMesh), Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherHalfSkinnedMesh_MetaData), NewProp_OtherHalfSkinnedMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms, ReturnValue), Z_Construct_UScriptStruct_FProceduralSkeletalMeshSeparationSlice, METADATA_PARAMS(0, nullptr) }; // 1345530050
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_Ragdoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_OtherHalfSkinnedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralSkeletalMeshComponent, nullptr, "SliceWithSeparation", nullptr, nullptr, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::ProceduralSkeletalMeshComponent_eventSliceWithSeparation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralSkeletalMeshComponent::execSliceWithSeparation)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_UBOOL(Z_Param_Ragdoll);
	P_GET_OBJECT(UProceduralSkeletalMeshComponent,Z_Param_OtherHalfSkinnedMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProceduralSkeletalMeshSeparationSlice*)Z_Param__Result=P_THIS->SliceWithSeparation(Z_Param_Position,Z_Param_Normal,Z_Param_Ragdoll,Z_Param_OtherHalfSkinnedMesh);
	P_NATIVE_END;
}
// End Class UProceduralSkeletalMeshComponent Function SliceWithSeparation

// Begin Class UProceduralSkeletalMeshComponent
void UProceduralSkeletalMeshComponent::StaticRegisterNativesUProceduralSkeletalMeshComponent()
{
	UClass* Class = UProceduralSkeletalMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Carve", &UProceduralSkeletalMeshComponent::execCarve },
		{ "CarveBone", &UProceduralSkeletalMeshComponent::execCarveBone },
		{ "CarveBoneWithSeparation", &UProceduralSkeletalMeshComponent::execCarveBoneWithSeparation },
		{ "CarveWithSeparation", &UProceduralSkeletalMeshComponent::execCarveWithSeparation },
		{ "RefreshFromProceduralMesh", &UProceduralSkeletalMeshComponent::execRefreshFromProceduralMesh },
		{ "Slice", &UProceduralSkeletalMeshComponent::execSlice },
		{ "SliceBoneWithSeparation", &UProceduralSkeletalMeshComponent::execSliceBoneWithSeparation },
		{ "SliceWithSeparation", &UProceduralSkeletalMeshComponent::execSliceWithSeparation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralSkeletalMeshComponent);
UClass* Z_Construct_UClass_UProceduralSkeletalMeshComponent_NoRegister()
{
	return UProceduralSkeletalMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Component that allows the owner to receive damage\n/// </summary>\n" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "ProceduralSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nComponent that allows the owner to receive damage\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapMaterial_MetaData[] = {
		{ "Category", "Procedural Mesh Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to be applied to slice caps\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralSkeletalMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to be applied to slice caps" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Carve, "Carve" }, // 1892055123
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBone, "CarveBone" }, // 2801578720
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveBoneWithSeparation, "CarveBoneWithSeparation" }, // 4100002182
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_CarveWithSeparation, "CarveWithSeparation" }, // 4199601897
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_RefreshFromProceduralMesh, "RefreshFromProceduralMesh" }, // 671384313
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_Slice, "Slice" }, // 1088756024
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceBoneWithSeparation, "SliceBoneWithSeparation" }, // 2704599383
		{ &Z_Construct_UFunction_UProceduralSkeletalMeshComponent_SliceWithSeparation, "SliceWithSeparation" }, // 3649016265
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralSkeletalMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::NewProp_CapMaterial = { "CapMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralSkeletalMeshComponent, CapMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapMaterial_MetaData), NewProp_CapMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::NewProp_CapMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralSkeletalMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::ClassParams = {
	&UProceduralSkeletalMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::PropPointers),
	0,
	0x00A010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralSkeletalMeshComponent()
{
	if (!Z_Registration_Info_UClass_UProceduralSkeletalMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UProceduralSkeletalMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralSkeletalMeshComponent.OuterSingleton;
}
template<> PROCEDURALSKELETALMESH_API UClass* StaticClass<UProceduralSkeletalMeshComponent>()
{
	return UProceduralSkeletalMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralSkeletalMeshComponent);
UProceduralSkeletalMeshComponent::~UProceduralSkeletalMeshComponent() {}
// End Class UProceduralSkeletalMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralSkeletalMeshComponent, UProceduralSkeletalMeshComponent::StaticClass, TEXT("UProceduralSkeletalMeshComponent"), &Z_Registration_Info_UClass_UProceduralSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralSkeletalMeshComponent), 1210438901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_3250445731(TEXT("/Script/ProceduralSkeletalMesh"),
	Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheMutantIsland_Plugins_Procedur9b2dd5f0147dV1_Source_ProceduralSkeletalMesh_Public_ProceduralSkeletalMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
