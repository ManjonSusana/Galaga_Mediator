// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Madiator/IMediator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMediator() {}
// Cross Module References
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_UIMediator_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_UIMediator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_Madiator();
// End Cross Module References
	void UIMediator::StaticRegisterNativesUIMediator()
	{
	}
	UClass* Z_Construct_UClass_UIMediator_NoRegister()
	{
		return UIMediator::StaticClass();
	}
	struct Z_Construct_UClass_UIMediator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMediator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Madiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMediator_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IMediator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMediator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIMediator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIMediator_Statics::ClassParams = {
		&UIMediator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIMediator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMediator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMediator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIMediator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIMediator, 1631803081);
	template<> GALAGA_MADIATOR_API UClass* StaticClass<UIMediator>()
	{
		return UIMediator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIMediator(Z_Construct_UClass_UIMediator, &UIMediator::StaticClass, TEXT("/Script/Galaga_Madiator"), TEXT("UIMediator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMediator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
