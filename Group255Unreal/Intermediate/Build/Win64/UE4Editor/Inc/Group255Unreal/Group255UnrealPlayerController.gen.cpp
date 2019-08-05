// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group255Unreal/Group255UnrealPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroup255UnrealPlayerController() {}
// Cross Module References
	GROUP255UNREAL_API UClass* Z_Construct_UClass_AGroup255UnrealPlayerController_NoRegister();
	GROUP255UNREAL_API UClass* Z_Construct_UClass_AGroup255UnrealPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Group255Unreal();
// End Cross Module References
	void AGroup255UnrealPlayerController::StaticRegisterNativesAGroup255UnrealPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGroup255UnrealPlayerController_NoRegister()
	{
		return AGroup255UnrealPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGroup255UnrealPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Group255Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Group255UnrealPlayerController.h" },
		{ "ModuleRelativePath", "Group255UnrealPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroup255UnrealPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::ClassParams = {
		&AGroup255UnrealPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroup255UnrealPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGroup255UnrealPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGroup255UnrealPlayerController, 3231676293);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGroup255UnrealPlayerController(Z_Construct_UClass_AGroup255UnrealPlayerController, &AGroup255UnrealPlayerController::StaticClass, TEXT("/Script/Group255Unreal"), TEXT("AGroup255UnrealPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroup255UnrealPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
