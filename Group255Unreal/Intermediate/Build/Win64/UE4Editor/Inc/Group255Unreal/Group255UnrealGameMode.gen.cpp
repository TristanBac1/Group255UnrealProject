// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Group255Unreal/Group255UnrealGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroup255UnrealGameMode() {}
// Cross Module References
	GROUP255UNREAL_API UClass* Z_Construct_UClass_AGroup255UnrealGameMode_NoRegister();
	GROUP255UNREAL_API UClass* Z_Construct_UClass_AGroup255UnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Group255Unreal();
// End Cross Module References
	void AGroup255UnrealGameMode::StaticRegisterNativesAGroup255UnrealGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGroup255UnrealGameMode_NoRegister()
	{
		return AGroup255UnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGroup255UnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroup255UnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Group255Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroup255UnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Group255UnrealGameMode.h" },
		{ "ModuleRelativePath", "Group255UnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroup255UnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroup255UnrealGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGroup255UnrealGameMode_Statics::ClassParams = {
		&AGroup255UnrealGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGroup255UnrealGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGroup255UnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroup255UnrealGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGroup255UnrealGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGroup255UnrealGameMode, 348137506);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGroup255UnrealGameMode(Z_Construct_UClass_AGroup255UnrealGameMode, &AGroup255UnrealGameMode::StaticClass, TEXT("/Script/Group255Unreal"), TEXT("AGroup255UnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroup255UnrealGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
