// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/TransformMidifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformMidifierActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UECARDEN_API UClass* Z_Construct_UClass_ATransformMidifierActor();
UECARDEN_API UClass* Z_Construct_UClass_ATransformMidifierActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class ATransformMidifierActor Function ChangeMaterial
struct Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformMidifierActor, nullptr, "ChangeMaterial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformMidifierActor::execChangeMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMaterial();
	P_NATIVE_END;
}
// End Class ATransformMidifierActor Function ChangeMaterial

// Begin Class ATransformMidifierActor Function ModifyTargetTransform
struct Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics
{
	struct TransformMidifierActor_eventModifyTargetTransform_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformMidifierActor_eventModifyTargetTransform_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformMidifierActor, nullptr, "ModifyTargetTransform", nullptr, nullptr, Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::TransformMidifierActor_eventModifyTargetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::TransformMidifierActor_eventModifyTargetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformMidifierActor::execModifyTargetTransform)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyTargetTransform(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ATransformMidifierActor Function ModifyTargetTransform

// Begin Class ATransformMidifierActor Function MoveToNextPosition
struct Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformMidifierActor, nullptr, "MoveToNextPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformMidifierActor::execMoveToNextPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToNextPosition();
	P_NATIVE_END;
}
// End Class ATransformMidifierActor Function MoveToNextPosition

// Begin Class ATransformMidifierActor
void ATransformMidifierActor::StaticRegisterNativesATransformMidifierActor()
{
	UClass* Class = ATransformMidifierActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMaterial", &ATransformMidifierActor::execChangeMaterial },
		{ "ModifyTargetTransform", &ATransformMidifierActor::execModifyTargetTransform },
		{ "MoveToNextPosition", &ATransformMidifierActor::execMoveToNextPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformMidifierActor);
UClass* Z_Construct_UClass_ATransformMidifierActor_NoRegister()
{
	return ATransformMidifierActor::StaticClass();
}
struct Z_Construct_UClass_ATransformMidifierActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TransformMidifierActor.h" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable que almacene a target actor\n" },
#endif
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable que almacene a target actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionIndex_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformMidifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPositionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransformMidifierActor_ChangeMaterial, "ChangeMaterial" }, // 2211929378
		{ &Z_Construct_UFunction_ATransformMidifierActor_ModifyTargetTransform, "ModifyTargetTransform" }, // 3600973205
		{ &Z_Construct_UFunction_ATransformMidifierActor_MoveToNextPosition, "MoveToNextPosition" }, // 4147518950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformMidifierActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformMidifierActor, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformMidifierActor, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformMidifierActor, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformMidifierActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_CurrentPositionIndex = { "CurrentPositionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformMidifierActor, CurrentPositionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPositionIndex_MetaData), NewProp_CurrentPositionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransformMidifierActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_NewTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformMidifierActor_Statics::NewProp_CurrentPositionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformMidifierActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATransformMidifierActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformMidifierActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformMidifierActor_Statics::ClassParams = {
	&ATransformMidifierActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATransformMidifierActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATransformMidifierActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformMidifierActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformMidifierActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATransformMidifierActor()
{
	if (!Z_Registration_Info_UClass_ATransformMidifierActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformMidifierActor.OuterSingleton, Z_Construct_UClass_ATransformMidifierActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATransformMidifierActor.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<ATransformMidifierActor>()
{
	return ATransformMidifierActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformMidifierActor);
ATransformMidifierActor::~ATransformMidifierActor() {}
// End Class ATransformMidifierActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformMidifierActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATransformMidifierActor, ATransformMidifierActor::StaticClass, TEXT("ATransformMidifierActor"), &Z_Registration_Info_UClass_ATransformMidifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformMidifierActor), 414758549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformMidifierActor_h_4122912970(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformMidifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_TransformMidifierActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
