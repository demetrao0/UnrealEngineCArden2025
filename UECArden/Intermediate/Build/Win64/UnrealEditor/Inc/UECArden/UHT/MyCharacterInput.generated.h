// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacterInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN_MyCharacterInput_generated_h
#error "MyCharacterInput.generated.h already included, missing '#pragma once' in MyCharacterInput.h"
#endif
#define UECARDEN_MyCharacterInput_generated_h

#define FID_UECArden_Source_UECArden_MyCharacterInput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacterInput(); \
	friend struct Z_Construct_UClass_AMyCharacterInput_Statics; \
public: \
	DECLARE_CLASS(AMyCharacterInput, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacterInput) \
	static const TCHAR* StaticConfigName() {return TEXT("game");} \



#define FID_UECArden_Source_UECArden_MyCharacterInput_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCharacterInput(AMyCharacterInput&&); \
	AMyCharacterInput(const AMyCharacterInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacterInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacterInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacterInput) \
	NO_API virtual ~AMyCharacterInput();


#define FID_UECArden_Source_UECArden_MyCharacterInput_h_14_PROLOG
#define FID_UECArden_Source_UECArden_MyCharacterInput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_MyCharacterInput_h_17_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_MyCharacterInput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class AMyCharacterInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_MyCharacterInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
