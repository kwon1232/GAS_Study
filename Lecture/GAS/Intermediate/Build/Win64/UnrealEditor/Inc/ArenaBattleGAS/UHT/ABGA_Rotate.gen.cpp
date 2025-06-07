// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleGAS/GA/ABGA_Rotate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGA_Rotate() {}
// Cross Module References
	ARENABATTLEGAS_API UClass* Z_Construct_UClass_UABGA_Rotate();
	ARENABATTLEGAS_API UClass* Z_Construct_UClass_UABGA_Rotate_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleGAS();
// End Cross Module References
	void UABGA_Rotate::StaticRegisterNativesUABGA_Rotate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGA_Rotate);
	UClass* Z_Construct_UClass_UABGA_Rotate_NoRegister()
	{
		return UABGA_Rotate::StaticClass();
	}
	struct Z_Construct_UClass_UABGA_Rotate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGA_Rotate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleGAS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGA_Rotate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GA/ABGA_Rotate.h" },
		{ "ModuleRelativePath", "GA/ABGA_Rotate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGA_Rotate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGA_Rotate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGA_Rotate_Statics::ClassParams = {
		&UABGA_Rotate::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGA_Rotate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGA_Rotate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGA_Rotate()
	{
		if (!Z_Registration_Info_UClass_UABGA_Rotate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGA_Rotate.OuterSingleton, Z_Construct_UClass_UABGA_Rotate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABGA_Rotate.OuterSingleton;
	}
	template<> ARENABATTLEGAS_API UClass* StaticClass<UABGA_Rotate>()
	{
		return UABGA_Rotate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGA_Rotate);
	UABGA_Rotate::~UABGA_Rotate() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_GA_ABGA_Rotate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_GA_ABGA_Rotate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABGA_Rotate, UABGA_Rotate::StaticClass, TEXT("UABGA_Rotate"), &Z_Registration_Info_UClass_UABGA_Rotate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGA_Rotate), 2738042145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_GA_ABGA_Rotate_h_3508408009(TEXT("/Script/ArenaBattleGAS"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_GA_ABGA_Rotate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_GA_ABGA_Rotate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
