// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacShooter25/TacShooter25GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacShooter25GameMode() {}
// Cross Module References
	TACSHOOTER25_API UClass* Z_Construct_UClass_ATacShooter25GameMode_NoRegister();
	TACSHOOTER25_API UClass* Z_Construct_UClass_ATacShooter25GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TacShooter25();
// End Cross Module References
	void ATacShooter25GameMode::StaticRegisterNativesATacShooter25GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATacShooter25GameMode_NoRegister()
	{
		return ATacShooter25GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATacShooter25GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATacShooter25GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TacShooter25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATacShooter25GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TacShooter25GameMode.h" },
		{ "ModuleRelativePath", "TacShooter25GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATacShooter25GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATacShooter25GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATacShooter25GameMode_Statics::ClassParams = {
		&ATacShooter25GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATacShooter25GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATacShooter25GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATacShooter25GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATacShooter25GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATacShooter25GameMode, 795738617);
	template<> TACSHOOTER25_API UClass* StaticClass<ATacShooter25GameMode>()
	{
		return ATacShooter25GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATacShooter25GameMode(Z_Construct_UClass_ATacShooter25GameMode, &ATacShooter25GameMode::StaticClass, TEXT("/Script/TacShooter25"), TEXT("ATacShooter25GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATacShooter25GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
