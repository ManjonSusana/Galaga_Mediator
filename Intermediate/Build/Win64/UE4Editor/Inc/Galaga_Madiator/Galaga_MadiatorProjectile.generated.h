// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_MADIATOR_Galaga_MadiatorProjectile_generated_h
#error "Galaga_MadiatorProjectile.generated.h already included, missing '#pragma once' in Galaga_MadiatorProjectile.h"
#endif
#define GALAGA_MADIATOR_Galaga_MadiatorProjectile_generated_h

#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_SPARSE_DATA
#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGalaga_MadiatorProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_MadiatorProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_MadiatorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_Madiator"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_MadiatorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGalaga_MadiatorProjectile(); \
	friend struct Z_Construct_UClass_AGalaga_MadiatorProjectile_Statics; \
public: \
	DECLARE_CLASS(AGalaga_MadiatorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_Madiator"), NO_API) \
	DECLARE_SERIALIZER(AGalaga_MadiatorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGalaga_MadiatorProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGalaga_MadiatorProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_MadiatorProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_MadiatorProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_MadiatorProjectile(AGalaga_MadiatorProjectile&&); \
	NO_API AGalaga_MadiatorProjectile(const AGalaga_MadiatorProjectile&); \
public:


#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGalaga_MadiatorProjectile(AGalaga_MadiatorProjectile&&); \
	NO_API AGalaga_MadiatorProjectile(const AGalaga_MadiatorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGalaga_MadiatorProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGalaga_MadiatorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGalaga_MadiatorProjectile)


#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGalaga_MadiatorProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGalaga_MadiatorProjectile, ProjectileMovement); }


#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_12_PROLOG
#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_SPARSE_DATA \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_RPC_WRAPPERS \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_INCLASS \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_SPARSE_DATA \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_MADIATOR_API UClass* StaticClass<class AGalaga_MadiatorProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_Madiator_Source_Galaga_Madiator_Galaga_MadiatorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
