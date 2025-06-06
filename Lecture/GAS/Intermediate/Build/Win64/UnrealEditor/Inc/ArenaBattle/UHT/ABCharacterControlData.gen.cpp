// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Character/ABCharacterControlData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterControlData() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterControlData();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterControlData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABCharacterControlData::StaticRegisterNativesUABCharacterControlData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterControlData);
	UClass* Z_Construct_UClass_UABCharacterControlData_NoRegister()
	{
		return UABCharacterControlData::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterControlData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[];
#endif
		static void NewProp_bUseControllerRotationYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[];
#endif
		static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerDesiredRotation_MetaData[];
#endif
		static void NewProp_bUseControllerDesiredRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerDesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[];
#endif
		static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[];
#endif
		static void NewProp_bInheritPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritYaw_MetaData[];
#endif
		static void NewProp_bInheritYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritRoll_MetaData[];
#endif
		static void NewProp_bInheritRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[];
#endif
		static void NewProp_bDoCollisionTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterControlData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/ABCharacterControlData.h" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bUseControllerRotationYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw = { "bUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bOrientRotationToMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bUseControllerDesiredRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation = { "bUseControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterControlData, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterControlData, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterControlData, TargetArmLength), METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterControlData, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bUsePawnControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bInheritPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bInheritYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw = { "bInheritYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bInheritRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll = { "bInheritRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/ABCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
	{
		((UABCharacterControlData*)Obj)->bDoCollisionTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UABCharacterControlData), &Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bOrientRotationToMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUseControllerDesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_TargetArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bUsePawnControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bInheritRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterControlData_Statics::NewProp_bDoCollisionTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterControlData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterControlData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterControlData_Statics::ClassParams = {
		&UABCharacterControlData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterControlData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterControlData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterControlData()
	{
		if (!Z_Registration_Info_UClass_UABCharacterControlData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterControlData.OuterSingleton, Z_Construct_UClass_UABCharacterControlData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterControlData.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABCharacterControlData>()
	{
		return UABCharacterControlData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterControlData);
	UABCharacterControlData::~UABCharacterControlData() {}
	struct Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterControlData, UABCharacterControlData::StaticClass, TEXT("UABCharacterControlData"), &Z_Registration_Info_UClass_UABCharacterControlData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterControlData), 2705171117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterControlData_h_357916867(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Engine_UE5_Inflearn_GAS_GAS_Study_Lecture_GAS_Source_ArenaBattle_Character_ABCharacterControlData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
