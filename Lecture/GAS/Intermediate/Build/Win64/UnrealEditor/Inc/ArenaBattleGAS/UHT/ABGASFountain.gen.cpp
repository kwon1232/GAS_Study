// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleGAS/Prop/ABGASFountain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGASFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABFountain();
	ARENABATTLEGAS_API UClass* Z_Construct_UClass_AABGASFountain();
	ARENABATTLEGAS_API UClass* Z_Construct_UClass_AABGASFountain_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleGAS();
// End Cross Module References
	void AABGASFountain::StaticRegisterNativesAABGASFountain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABGASFountain);
	UClass* Z_Construct_UClass_AABGASFountain_NoRegister()
	{
		return AABGASFountain::StaticClass();
	}
	struct Z_Construct_UClass_AABGASFountain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotatingMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionPeriod;
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
	UObject* (*const Z_Construct_UClass_AABGASFountain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AABFountain,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleGAS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASFountain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Prop/ABGASFountain.h" },
		{ "ModuleRelativePath", "Prop/ABGASFountain.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASFountain_Statics::NewProp_RotatingMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prop/ABGASFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABGASFountain_Statics::NewProp_RotatingMovement = { "RotatingMovement", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABGASFountain, RotatingMovement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABGASFountain_Statics::NewProp_RotatingMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASFountain_Statics::NewProp_RotatingMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASFountain_Statics::NewProp_ActionPeriod_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Prop/ABGASFountain.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABGASFountain_Statics::NewProp_ActionPeriod = { "ActionPeriod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABGASFountain, ActionPeriod), METADATA_PARAMS(Z_Construct_UClass_AABGASFountain_Statics::NewProp_ActionPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASFountain_Statics::NewProp_ActionPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASFountain_Statics::NewProp_ASC_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prop/ABGASFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABGASFountain_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABGASFountain, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABGASFountain_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASFountain_Statics::NewProp_ASC_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities_Inner = { "StartAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Prop/ABGASFountain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities = { "StartAbilities", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABGASFountain, StartAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGASFountain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASFountain_Statics::NewProp_RotatingMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASFountain_Statics::NewProp_ActionPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASFountain_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGASFountain_Statics::NewProp_StartAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABGASFountain_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AABGASFountain, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABGASFountain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGASFountain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABGASFountain_Statics::ClassParams = {
		&AABGASFountain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABGASFountain_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABGASFountain_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABGASFountain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABGASFountain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABGASFountain()
	{
		if (!Z_Registration_Info_UClass_AABGASFountain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABGASFountain.OuterSingleton, Z_Construct_UClass_AABGASFountain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABGASFountain.OuterSingleton;
	}
	template<> ARENABATTLEGAS_API UClass* StaticClass<AABGASFountain>()
	{
		return AABGASFountain::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABGASFountain);
	AABGASFountain::~AABGASFountain() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Prop_ABGASFountain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Prop_ABGASFountain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABGASFountain, AABGASFountain::StaticClass, TEXT("AABGASFountain"), &Z_Registration_Info_UClass_AABGASFountain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABGASFountain), 2432089537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Prop_ABGASFountain_h_2153235748(TEXT("/Script/ArenaBattleGAS"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Prop_ABGASFountain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattleGAS_Prop_ABGASFountain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
