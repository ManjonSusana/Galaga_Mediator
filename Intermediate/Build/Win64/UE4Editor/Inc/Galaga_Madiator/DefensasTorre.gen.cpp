// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Madiator/DefensasTorre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefensasTorre() {}
// Cross Module References
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_ADefensasTorre_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_ADefensasTorre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_Madiator();
// End Cross Module References
	void ADefensasTorre::StaticRegisterNativesADefensasTorre()
	{
	}
	UClass* Z_Construct_UClass_ADefensasTorre_NoRegister()
	{
		return ADefensasTorre::StaticClass();
	}
	struct Z_Construct_UClass_ADefensasTorre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefensasTorre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Madiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefensasTorre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefensasTorre.h" },
		{ "ModuleRelativePath", "DefensasTorre.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefensasTorre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefensasTorre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefensasTorre_Statics::ClassParams = {
		&ADefensasTorre::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefensasTorre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefensasTorre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefensasTorre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefensasTorre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefensasTorre, 249702605);
	template<> GALAGA_MADIATOR_API UClass* StaticClass<ADefensasTorre>()
	{
		return ADefensasTorre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefensasTorre(Z_Construct_UClass_ADefensasTorre, &ADefensasTorre::StaticClass, TEXT("/Script/Galaga_Madiator"), TEXT("ADefensasTorre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefensasTorre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
