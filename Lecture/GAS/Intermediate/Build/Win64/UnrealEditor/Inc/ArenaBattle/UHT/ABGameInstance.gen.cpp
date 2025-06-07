// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Game/ABGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameInstance() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInstance();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABGameInstance::StaticRegisterNativesUABGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameInstance);
	UClass* Z_Construct_UClass_UABGameInstance_NoRegister()
	{
		return UABGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UABGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Game/ABGameInstance.h" },
		{ "ModuleRelativePath", "Game/ABGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameInstance_Statics::ClassParams = {
		&UABGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameInstance()
	{
		if (!Z_Registration_Info_UClass_UABGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameInstance.OuterSingleton, Z_Construct_UClass_UABGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABGameInstance.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABGameInstance>()
	{
		return UABGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameInstance);
	UABGameInstance::~UABGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Game_ABGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Game_ABGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABGameInstance, UABGameInstance::StaticClass, TEXT("UABGameInstance"), &Z_Registration_Info_UClass_UABGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameInstance), 3421472444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Game_ABGameInstance_h_561330210(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Game_ABGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Game_ABGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
