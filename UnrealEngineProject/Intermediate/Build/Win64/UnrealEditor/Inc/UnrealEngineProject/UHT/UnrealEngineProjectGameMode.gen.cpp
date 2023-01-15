// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineProject/UnrealEngineProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngineProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALENGINEPROJECT_API UClass* Z_Construct_UClass_AUnrealEngineProjectGameMode();
	UNREALENGINEPROJECT_API UClass* Z_Construct_UClass_AUnrealEngineProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineProject();
// End Cross Module References
	void AUnrealEngineProjectGameMode::StaticRegisterNativesAUnrealEngineProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealEngineProjectGameMode);
	UClass* Z_Construct_UClass_AUnrealEngineProjectGameMode_NoRegister()
	{
		return AUnrealEngineProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealEngineProjectGameMode.h" },
		{ "ModuleRelativePath", "UnrealEngineProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealEngineProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::ClassParams = {
		&AUnrealEngineProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealEngineProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnrealEngineProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealEngineProjectGameMode.OuterSingleton, Z_Construct_UClass_AUnrealEngineProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealEngineProjectGameMode.OuterSingleton;
	}
	template<> UNREALENGINEPROJECT_API UClass* StaticClass<AUnrealEngineProjectGameMode>()
	{
		return AUnrealEngineProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealEngineProjectGameMode);
	AUnrealEngineProjectGameMode::~AUnrealEngineProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_masteroflich_Documents_GitHub_UnrealEngineProject_UnrealEngineProject_Source_UnrealEngineProject_UnrealEngineProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_masteroflich_Documents_GitHub_UnrealEngineProject_UnrealEngineProject_Source_UnrealEngineProject_UnrealEngineProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealEngineProjectGameMode, AUnrealEngineProjectGameMode::StaticClass, TEXT("AUnrealEngineProjectGameMode"), &Z_Registration_Info_UClass_AUnrealEngineProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealEngineProjectGameMode), 1460710009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_masteroflich_Documents_GitHub_UnrealEngineProject_UnrealEngineProject_Source_UnrealEngineProject_UnrealEngineProjectGameMode_h_98350437(TEXT("/Script/UnrealEngineProject"),
		Z_CompiledInDeferFile_FID_Users_masteroflich_Documents_GitHub_UnrealEngineProject_UnrealEngineProject_Source_UnrealEngineProject_UnrealEngineProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_masteroflich_Documents_GitHub_UnrealEngineProject_UnrealEngineProject_Source_UnrealEngineProject_UnrealEngineProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
