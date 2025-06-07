// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleGAS/Character/ABGASCharacterPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGASCharacterPlayer() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacterPlayer();
	ARENABATTLEGAS_API UClass* Z_Construct_UClass_AABGASCharacterPlayer();
	ARENABATTLEGAS_API UClass* Z_Construct_UClass_AABGASCharacterPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleGAS();
// End Cross Module References
	void AABGASCharacterPlayer::StaticRegisterNativesAABGASCharacterPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABGASCharacterPlayer);
	UClass* Z_Construct_UClass_AABGASCharacterPlayer_NoRegister()
	{
		return AABGASCharacterPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AABGASCharacterPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABGASCharacterPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AABCharacterPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleGAS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASCharacterPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ABGASCharacterPlayer.h" },
		{ "ModuleRelativePath", "Character/ABGASCharacterPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_ASC_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/ABGASCharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABGASCharacterPlayer, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_ASC_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities_Inner = { "StartAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Character/ABGASCharacterPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities = { "StartAbilities", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABGASCharacterPlayer, StartAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGASCharacterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASCharacterPlayer_Statics::NewProp_StartAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABGASCharacterPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AABGASCharacterPlayer, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABGASCharacterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGASCharacterPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABGASCharacterPlayer_Statics::ClassParams = {
		&AABGASCharacterPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABGASCharacterPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABGASCharacterPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABGASCharacterPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASCharacterPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABGASCharacterPlayer()
	{
		if (!Z_Registration_Info_UClass_AABGASCharacterPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABGASCharacterPlayer.OuterSingleton, Z_Construct_UClass_AABGASCharacterPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABGASCharacterPlayer.OuterSingleton;
	}
	template<> ARENABATTLEGAS_API UClass* StaticClass<AABGASCharacterPlayer>()
	{
		return AABGASCharacterPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABGASCharacterPlayer);
	AABGASCharacterPlayer::~AABGASCharacterPlayer() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Character_ABGASCharacterPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Character_ABGASCharacterPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABGASCharacterPlayer, AABGASCharacterPlayer::StaticClass, TEXT("AABGASCharacterPlayer"), &Z_Registration_Info_UClass_AABGASCharacterPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABGASCharacterPlayer), 1507187983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Character_ABGASCharacterPlayer_h_3696421693(TEXT("/Script/ArenaBattleGAS"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Character_ABGASCharacterPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Character_ABGASCharacterPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
