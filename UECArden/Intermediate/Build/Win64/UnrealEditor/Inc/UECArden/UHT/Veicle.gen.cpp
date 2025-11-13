// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArden/Veicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVeicle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDEN_API UClass* Z_Construct_UClass_AVeicle();
UECARDEN_API UClass* Z_Construct_UClass_AVeicle_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArden();
// End Cross Module References

// Begin Class AVeicle
void AVeicle::StaticRegisterNativesAVeicle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVeicle);
UClass* Z_Construct_UClass_AVeicle_NoRegister()
{
	return AVeicle::StaticClass();
}
struct Z_Construct_UClass_AVeicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Veicle.h" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Veicle" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VeicleName_MetaData[] = {
		{ "Category", "Veicle" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fuel_MetaData[] = {
		{ "Category", "Veicle" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wheels_MetaData[] = {
		{ "Category", "Veicle" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsElectric_MetaData[] = {
		{ "Category", "Veicle" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VeicleColor_MetaData[] = {
		{ "Category", "Veicle" },
		{ "ModuleRelativePath", "Veicle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VeicleName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Fuel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Wheels;
	static void NewProp_bIsElectric_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsElectric;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VeicleColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVeicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVeicle_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVeicle, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVeicle_Statics::NewProp_VeicleName = { "VeicleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVeicle, VeicleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VeicleName_MetaData), NewProp_VeicleName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVeicle_Statics::NewProp_Fuel = { "Fuel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVeicle, Fuel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fuel_MetaData), NewProp_Fuel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVeicle_Statics::NewProp_Wheels = { "Wheels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVeicle, Wheels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wheels_MetaData), NewProp_Wheels_MetaData) };
void Z_Construct_UClass_AVeicle_Statics::NewProp_bIsElectric_SetBit(void* Obj)
{
	((AVeicle*)Obj)->bIsElectric = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVeicle_Statics::NewProp_bIsElectric = { "bIsElectric", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVeicle), &Z_Construct_UClass_AVeicle_Statics::NewProp_bIsElectric_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsElectric_MetaData), NewProp_bIsElectric_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVeicle_Statics::NewProp_VeicleColor = { "VeicleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVeicle, VeicleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VeicleColor_MetaData), NewProp_VeicleColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVeicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVeicle_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVeicle_Statics::NewProp_VeicleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVeicle_Statics::NewProp_Fuel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVeicle_Statics::NewProp_Wheels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVeicle_Statics::NewProp_bIsElectric,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVeicle_Statics::NewProp_VeicleColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVeicle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVeicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVeicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVeicle_Statics::ClassParams = {
	&AVeicle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVeicle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVeicle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVeicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AVeicle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVeicle()
{
	if (!Z_Registration_Info_UClass_AVeicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVeicle.OuterSingleton, Z_Construct_UClass_AVeicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVeicle.OuterSingleton;
}
template<> UECARDEN_API UClass* StaticClass<AVeicle>()
{
	return AVeicle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVeicle);
AVeicle::~AVeicle() {}
// End Class AVeicle

// Begin Registration
struct Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Veicle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVeicle, AVeicle::StaticClass, TEXT("AVeicle"), &Z_Registration_Info_UClass_AVeicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVeicle), 1564785856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Veicle_h_4267837027(TEXT("/Script/UECArden"),
	Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Veicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UECArden_Source_UECArden_Veicle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
