// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PluginDemoProject/PluginDemoProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginDemoProjectGameModeBase() {}
// Cross Module References
	PLUGINDEMOPROJECT_API UClass* Z_Construct_UClass_APluginDemoProjectGameModeBase_NoRegister();
	PLUGINDEMOPROJECT_API UClass* Z_Construct_UClass_APluginDemoProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PluginDemoProject();
// End Cross Module References
	void APluginDemoProjectGameModeBase::StaticRegisterNativesAPluginDemoProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APluginDemoProjectGameModeBase_NoRegister()
	{
		return APluginDemoProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginDemoProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PluginDemoProjectGameModeBase.h" },
		{ "ModuleRelativePath", "PluginDemoProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APluginDemoProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::ClassParams = {
		&APluginDemoProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APluginDemoProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APluginDemoProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APluginDemoProjectGameModeBase, 1888411377);
	template<> PLUGINDEMOPROJECT_API UClass* StaticClass<APluginDemoProjectGameModeBase>()
	{
		return APluginDemoProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APluginDemoProjectGameModeBase(Z_Construct_UClass_APluginDemoProjectGameModeBase, &APluginDemoProjectGameModeBase::StaticClass, TEXT("/Script/PluginDemoProject"), TEXT("APluginDemoProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APluginDemoProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
