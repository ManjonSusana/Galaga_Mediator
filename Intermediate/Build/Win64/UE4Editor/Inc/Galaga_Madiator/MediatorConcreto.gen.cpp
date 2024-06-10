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
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AGalaga_MadiatorPawn_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_AEscuadron_NoRegister();
	GALAGA_MADIATOR_API UClass* Z_Construct_UClass_ATorre_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_escuadron_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_escuadron;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_torre_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_torre;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_jugador_MetaData[] = {
		{ "Category", "Mediador Pawn" },
		{ "Comment", "//declaracion de variables\n" },
		{ "ModuleRelativePath", "MediatorConcreto.h" },
		{ "ToolTip", "declaracion de variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_jugador = { "jugador", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMediatorConcreto, jugador), Z_Construct_UClass_AGalaga_MadiatorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_escuadron_MetaData[] = {
		{ "Category", "Mediador Escuadron" },
		{ "ModuleRelativePath", "MediatorConcreto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_escuadron = { "escuadron", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMediatorConcreto, escuadron), Z_Construct_UClass_AEscuadron_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_escuadron_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_escuadron_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_torre_MetaData[] = {
		{ "Category", "Mediador Torre" },
		{ "ModuleRelativePath", "MediatorConcreto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_torre = { "torre", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMediatorConcreto, torre), Z_Construct_UClass_ATorre_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_torre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_torre_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMediatorConcreto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_escuadron,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediatorConcreto_Statics::NewProp_torre,
	};
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
		Z_Construct_UClass_AMediatorConcreto_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMediatorConcreto_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMediatorConcreto, 3140334584);
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
