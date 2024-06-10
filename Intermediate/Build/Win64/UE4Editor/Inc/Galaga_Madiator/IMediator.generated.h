// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GALAGA_MADIATOR_IMediator_generated_h
#error "IMediator.generated.h already included, missing '#pragma once' in IMediator.h"
#endif
#define GALAGA_MADIATOR_IMediator_generated_h

#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_SPARSE_DATA
#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_RPC_WRAPPERS
#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_MADIATOR_API UIMediator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_MADIATOR_API, UIMediator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_MADIATOR_API UIMediator(UIMediator&&); \
	GALAGA_MADIATOR_API UIMediator(const UIMediator&); \
public:


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GALAGA_MADIATOR_API UIMediator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GALAGA_MADIATOR_API UIMediator(UIMediator&&); \
	GALAGA_MADIATOR_API UIMediator(const UIMediator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GALAGA_MADIATOR_API, UIMediator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMediator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMediator)


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIMediator(); \
	friend struct Z_Construct_UClass_UIMediator_Statics; \
public: \
	DECLARE_CLASS(UIMediator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Galaga_Madiator"), GALAGA_MADIATOR_API) \
	DECLARE_SERIALIZER(UIMediator)


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_GENERATED_UINTERFACE_BODY() \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIMediator() {} \
public: \
	typedef UIMediator UClassType; \
	typedef IIMediator ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIMediator() {} \
public: \
	typedef UIMediator UClassType; \
	typedef IIMediator ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_10_PROLOG
#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_SPARSE_DATA \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_RPC_WRAPPERS \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_SPARSE_DATA \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_Madiator_Source_Galaga_Madiator_IMediator_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_MADIATOR_API UClass* StaticClass<class UIMediator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_Madiator_Source_Galaga_Madiator_IMediator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
