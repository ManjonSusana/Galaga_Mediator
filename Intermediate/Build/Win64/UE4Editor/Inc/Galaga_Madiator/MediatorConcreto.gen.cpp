// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_Madiator/MediatorConcreto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediatorConcreto() {}
// Cross Module References
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AMediatorConcreto_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AMediatorConcreto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_Madiator();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_UIMediator_NoRegister();
// End Cross Module References
	void AMediatorConcreto::StaticRegisterNativesAMediatorConcreto()
	{
	}
	UClass* Z_Construct_UClass_AMediatorConcreto_NoRegister()
	{
		return AMediatorConcreto::StaticClass();
	}
	struct Z_Construct_UClass_AMediatorConcreto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMediatorConcreto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_Madiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediatorConcreto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MediatorConcreto.h" },
		{ "ModuleRelativePath", "MediatorConcreto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMediatorConcreto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIMediator_NoRegister, (int32)VTABLE_OFFSET(AMediatorConcreto, IIMediator), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMediatorConcreto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediatorConcreto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMediatorConcreto_Statics::ClassParams = {
		&AMediatorConcreto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMediatorConcreto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMediatorConcreto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMediatorConcreto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMediatorConcreto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMediatorConcreto, 1126057210);
	template<> GALAGA_MADIATOR_API UClass* StaticClass<AMediatorConcreto>()
	{
		return AMediatorConcreto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMediatorConcreto(Z_Construct_UClass_AMediatorConcreto, &AMediatorConcreto::StaticClass, TEXT("/Script/Galaga_Madiator"), TEXT("AMediatorConcreto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMediatorConcreto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
