// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TacShooter25/TacShooter25PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTacShooter25PlayerController() {}
// Cross Module References
	TACSHOOTER25_API UClass* Z_Construct_UClass_ATacShooter25PlayerController_NoRegister();
	TACSHOOTER25_API UClass* Z_Construct_UClass_ATacShooter25PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TacShooter25();
// End Cross Module References
	void ATacShooter25PlayerController::StaticRegisterNativesATacShooter25PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATacShooter25PlayerController_NoRegister()
	{
		return ATacShooter25PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATacShooter25PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATacShooter25PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TacShooter25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATacShooter25PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TacShooter25PlayerController.h" },
		{ "ModuleRelativePath", "TacShooter25PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATacShooter25PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATacShooter25PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATacShooter25PlayerController_Statics::ClassParams = {
		&ATacShooter25PlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATacShooter25PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATacShooter25PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATacShooter25PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATacShooter25PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATacShooter25PlayerController, 268921233);
	template<> TACSHOOTER25_API UClass* StaticClass<ATacShooter25PlayerController>()
	{
		return ATacShooter25PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATacShooter25PlayerController(Z_Construct_UClass_ATacShooter25PlayerController, &ATacShooter25PlayerController::StaticClass, TEXT("/Script/TacShooter25"), TEXT("ATacShooter25PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATacShooter25PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
