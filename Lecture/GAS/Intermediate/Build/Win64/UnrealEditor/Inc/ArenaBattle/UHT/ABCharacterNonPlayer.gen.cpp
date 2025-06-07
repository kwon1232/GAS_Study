// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterNonPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterNonPlayer() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterBase();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterNonPlayer();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterNonPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABCharacterNonPlayer::StaticRegisterNativesAABCharacterNonPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABCharacterNonPlayer);
	UClass* Z_Construct_UClass_AABCharacterNonPlayer_NoRegister()
	{
		return AABCharacterNonPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AABCharacterNonPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABCharacterNonPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AABCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacterNonPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ABCharacterNonPlayer.h" },
		{ "ModuleRelativePath", "Character/ABCharacterNonPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_Inner = { "NPCMeshes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Character/ABCharacterNonPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes = { "NPCMeshes", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABCharacterNonPlayer, NPCMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterNonPlayer_Statics::NewProp_NPCMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABCharacterNonPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacterNonPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacterNonPlayer_Statics::ClassParams = {
		&AABCharacterNonPlayer::StaticClass,
		"ArenaBattle",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABCharacterNonPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterNonPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABCharacterNonPlayer()
	{
		if (!Z_Registration_Info_UClass_AABCharacterNonPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABCharacterNonPlayer.OuterSingleton, Z_Construct_UClass_AABCharacterNonPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABCharacterNonPlayer.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABCharacterNonPlayer>()
	{
		return AABCharacterNonPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABCharacterNonPlayer);
	AABCharacterNonPlayer::~AABCharacterNonPlayer() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABCharacterNonPlayer, AABCharacterNonPlayer::StaticClass, TEXT("AABCharacterNonPlayer"), &Z_Registration_Info_UClass_AABCharacterNonPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacterNonPlayer), 3674292917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_1778564090(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterNonPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
