// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Madiator/Galaga_MadiatorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalaga_MadiatorGameMode() {}
// Cross Module References
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AGalaga_MadiatorGameMode_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AGalaga_MadiatorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Galaga_Madiator();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AGalaga_MadiatorPawn_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AEscuadron_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_ATorre_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_ADefensasTorre_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AMediatorConcreto_NoRegister();
// End Cross Module References
	void AGalaga_MadiatorGameMode::StaticRegisterNativesAGalaga_MadiatorGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalaga_MadiatorGameMode_NoRegister()
	{
		return AGalaga_MadiatorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escuadron_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escuadron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torre_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Torre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mediator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mediator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Madiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Galaga_MadiatorGameMode.h" },
		{ "ModuleRelativePath", "Galaga_MadiatorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Jugador_MetaData[] = {
		{ "Category", "GameMode Pawn" },
		{ "ModuleRelativePath", "Galaga_MadiatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_MadiatorGameMode, Jugador), Z_Construct_UClass_AGalaga_MadiatorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Escuadron_MetaData[] = {
		{ "Category", "GameMode Escuadron" },
		{ "ModuleRelativePath", "Galaga_MadiatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Escuadron = { "Escuadron", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_MadiatorGameMode, Escuadron), Z_Construct_UClass_AEscuadron_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Escuadron_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Escuadron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Torre_MetaData[] = {
		{ "Category", "GameMode Torre" },
		{ "ModuleRelativePath", "Galaga_MadiatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Torre = { "Torre", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_MadiatorGameMode, Torre), Z_Construct_UClass_ATorre_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Torre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Torre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Generador_MetaData[] = {
		{ "Category", "GameMode Generador" },
		{ "ModuleRelativePath", "Galaga_MadiatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Generador = { "Generador", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_MadiatorGameMode, Generador), Z_Construct_UClass_ADefensasTorre_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Generador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Generador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Mediator_MetaData[] = {
		{ "Category", "GameMode Mediator" },
		{ "ModuleRelativePath", "Galaga_MadiatorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Mediator = { "Mediator", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGalaga_MadiatorGameMode, Mediator), Z_Construct_UClass_AMediatorConcreto_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Mediator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Mediator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Escuadron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Torre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Generador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::NewProp_Mediator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalaga_MadiatorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::ClassParams = {
		&AGalaga_MadiatorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalaga_MadiatorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalaga_MadiatorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalaga_MadiatorGameMode, 3023221609);
	template<> GALAGA_MADIATOR_API UClass* StaticClass<AGalaga_MadiatorGameMode>()
	{
		return AGalaga_MadiatorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalaga_MadiatorGameMode(Z_Construct_UClass_AGalaga_MadiatorGameMode, &AGalaga_MadiatorGameMode::StaticClass, TEXT("/Script/Galaga_Madiator"), TEXT("AGalaga_MadiatorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalaga_MadiatorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
