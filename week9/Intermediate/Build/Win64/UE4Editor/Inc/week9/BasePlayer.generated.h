// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEEK9_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define WEEK9_BasePlayer_generated_h

#define week9_Source_week9_BasePlayer_h_16_SPARSE_DATA
#define week9_Source_week9_BasePlayer_h_16_RPC_WRAPPERS
#define week9_Source_week9_BasePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define week9_Source_week9_BasePlayer_h_16_EVENT_PARMS
#define week9_Source_week9_BasePlayer_h_16_CALLBACK_WRAPPERS
#define week9_Source_week9_BasePlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/week9"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define week9_Source_week9_BasePlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/week9"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define week9_Source_week9_BasePlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define week9_Source_week9_BasePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define week9_Source_week9_BasePlayer_h_16_PRIVATE_PROPERTY_OFFSET
#define week9_Source_week9_BasePlayer_h_13_PROLOG \
	week9_Source_week9_BasePlayer_h_16_EVENT_PARMS


#define week9_Source_week9_BasePlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	week9_Source_week9_BasePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	week9_Source_week9_BasePlayer_h_16_SPARSE_DATA \
	week9_Source_week9_BasePlayer_h_16_RPC_WRAPPERS \
	week9_Source_week9_BasePlayer_h_16_CALLBACK_WRAPPERS \
	week9_Source_week9_BasePlayer_h_16_INCLASS \
	week9_Source_week9_BasePlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define week9_Source_week9_BasePlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	week9_Source_week9_BasePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	week9_Source_week9_BasePlayer_h_16_SPARSE_DATA \
	week9_Source_week9_BasePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	week9_Source_week9_BasePlayer_h_16_CALLBACK_WRAPPERS \
	week9_Source_week9_BasePlayer_h_16_INCLASS_NO_PURE_DECLS \
	week9_Source_week9_BasePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEEK9_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID week9_Source_week9_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
