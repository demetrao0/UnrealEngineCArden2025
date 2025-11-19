// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TransformMidifierActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UECARDEN_TransformMidifierActor_generated_h
#error "TransformMidifierActor.generated.h already included, missing '#pragma once' in TransformMidifierActor.h"
#endif
#define UECARDEN_TransformMidifierActor_generated_h

#define FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeMaterial); \
	DECLARE_FUNCTION(execMoveToNextPosition); \
	DECLARE_FUNCTION(execModifyTargetTransform);


#define FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATransformMidifierActor(); \
	friend struct Z_Construct_UClass_ATransformMidifierActor_Statics; \
public: \
	DECLARE_CLASS(ATransformMidifierActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UECArden"), NO_API) \
	DECLARE_SERIALIZER(ATransformMidifierActor)


#define FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATransformMidifierActor(ATransformMidifierActor&&); \
	ATransformMidifierActor(const ATransformMidifierActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATransformMidifierActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATransformMidifierActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATransformMidifierActor) \
	NO_API virtual ~ATransformMidifierActor();


#define FID_UECArden_Source_UECArden_TransformMidifierActor_h_9_PROLOG
#define FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UECArden_Source_UECArden_TransformMidifierActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UECARDEN_API UClass* StaticClass<class ATransformMidifierActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UECArden_Source_UECArden_TransformMidifierActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
