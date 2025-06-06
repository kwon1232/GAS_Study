// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Prop/ABFountain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABFountain();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABFountain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABFountain::StaticRegisterNativesAABFountain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABFountain);
	UClass* Z_Construct_UClass_AABFountain_NoRegister()
	{
		return AABFountain::StaticClass();
	}
	struct Z_Construct_UClass_AABFountain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Water;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Light;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABFountain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Prop/ABFountain.h" },
		{ "ModuleRelativePath", "Prop/ABFountain.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prop/ABFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABFountain_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABFountain, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABFountain_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::NewProp_Water_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prop/ABFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABFountain_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABFountain, Water), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABFountain_Statics::NewProp_Water_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::NewProp_Water_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::NewProp_Light_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Prop/ABFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABFountain_Statics::NewProp_Light = { "Light", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AABFountain, Light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABFountain_Statics::NewProp_Light_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::NewProp_Light_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABFountain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABFountain_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABFountain_Statics::NewProp_Water,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABFountain_Statics::NewProp_Light,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABFountain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABFountain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABFountain_Statics::ClassParams = {
		&AABFountain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABFountain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABFountain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABFountain()
	{
		if (!Z_Registration_Info_UClass_AABFountain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABFountain.OuterSingleton, Z_Construct_UClass_AABFountain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABFountain.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABFountain>()
	{
		return AABFountain::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABFountain);
	AABFountain::~AABFountain() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Prop_ABFountain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Prop_ABFountain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABFountain, AABFountain::StaticClass, TEXT("AABFountain"), &Z_Registration_Info_UClass_AABFountain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABFountain), 1415381849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Prop_ABFountain_h_1209899774(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Prop_ABFountain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Prop_ABFountain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
