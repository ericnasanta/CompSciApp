// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPSCIAPP_CompSciAppCharacter_generated_h
#error "CompSciAppCharacter.generated.h already included, missing '#pragma once' in CompSciAppCharacter.h"
#endif
#define COMPSCIAPP_CompSciAppCharacter_generated_h

#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_RPC_WRAPPERS
#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesACompSciAppCharacter(); \
	friend COMPSCIAPP_API class UClass* Z_Construct_UClass_ACompSciAppCharacter(); \
	public: \
	DECLARE_CLASS(ACompSciAppCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, CompSciApp, NO_API) \
	DECLARE_SERIALIZER(ACompSciAppCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ACompSciAppCharacter*>(this); }


#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_INCLASS \
	private: \
	static void StaticRegisterNativesACompSciAppCharacter(); \
	friend COMPSCIAPP_API class UClass* Z_Construct_UClass_ACompSciAppCharacter(); \
	public: \
	DECLARE_CLASS(ACompSciAppCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, CompSciApp, NO_API) \
	DECLARE_SERIALIZER(ACompSciAppCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ACompSciAppCharacter*>(this); }


#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompSciAppCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompSciAppCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompSciAppCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompSciAppCharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACompSciAppCharacter(const ACompSciAppCharacter& InCopy); \
public:


#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ACompSciAppCharacter(const ACompSciAppCharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompSciAppCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompSciAppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACompSciAppCharacter)


#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_17_PROLOG
#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_RPC_WRAPPERS \
	CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_INCLASS \
	CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_INCLASS_NO_PURE_DECLS \
	CompSciApp_Source_CompSciApp_CompSciAppCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CompSciApp_Source_CompSciApp_CompSciAppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS