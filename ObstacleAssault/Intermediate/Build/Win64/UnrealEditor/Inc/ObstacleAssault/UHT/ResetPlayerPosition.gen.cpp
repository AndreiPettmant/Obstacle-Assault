// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/ResetPlayerPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetPlayerPosition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AResetPlayerPosition();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AResetPlayerPosition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// End Cross Module References
	DEFINE_FUNCTION(AResetPlayerPosition::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	void AResetPlayerPosition::StaticRegisterNativesAResetPlayerPosition()
	{
		UClass* Class = AResetPlayerPosition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AResetPlayerPosition::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics
	{
		struct ResetPlayerPosition_eventOnOverlapBegin_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResetPlayerPosition_eventOnOverlapBegin_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResetPlayerPosition_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::NewProp_overlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ResetPlayerPosition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResetPlayerPosition, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::ResetPlayerPosition_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::ResetPlayerPosition_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResetPlayerPosition);
	UClass* Z_Construct_UClass_AResetPlayerPosition_NoRegister()
	{
		return AResetPlayerPosition::StaticClass();
	}
	struct Z_Construct_UClass_AResetPlayerPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResetPlayerPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResetPlayerPosition_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AResetPlayerPosition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResetPlayerPosition_OnOverlapBegin, "OnOverlapBegin" }, // 774027192
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResetPlayerPosition_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPlayerPosition_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResetPlayerPosition.h" },
		{ "ModuleRelativePath", "ResetPlayerPosition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetPlayerPosition_Statics::NewProp_playerStart_MetaData[] = {
		{ "Category", "Start Portal" },
		{ "ModuleRelativePath", "ResetPlayerPosition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResetPlayerPosition_Statics::NewProp_playerStart = { "playerStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResetPlayerPosition, playerStart), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResetPlayerPosition_Statics::NewProp_playerStart_MetaData), Z_Construct_UClass_AResetPlayerPosition_Statics::NewProp_playerStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResetPlayerPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResetPlayerPosition_Statics::NewProp_playerStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResetPlayerPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResetPlayerPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResetPlayerPosition_Statics::ClassParams = {
		&AResetPlayerPosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AResetPlayerPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AResetPlayerPosition_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResetPlayerPosition_Statics::Class_MetaDataParams), Z_Construct_UClass_AResetPlayerPosition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResetPlayerPosition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AResetPlayerPosition()
	{
		if (!Z_Registration_Info_UClass_AResetPlayerPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResetPlayerPosition.OuterSingleton, Z_Construct_UClass_AResetPlayerPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResetPlayerPosition.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AResetPlayerPosition>()
	{
		return AResetPlayerPosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResetPlayerPosition);
	AResetPlayerPosition::~AResetPlayerPosition() {}
	struct Z_CompiledInDeferFile_FID_Users_Andrei_Desktop_Stuff_EstudosUnreal_Obstacle_Assault_ObstacleAssault_Source_ObstacleAssault_ResetPlayerPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Andrei_Desktop_Stuff_EstudosUnreal_Obstacle_Assault_ObstacleAssault_Source_ObstacleAssault_ResetPlayerPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResetPlayerPosition, AResetPlayerPosition::StaticClass, TEXT("AResetPlayerPosition"), &Z_Registration_Info_UClass_AResetPlayerPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResetPlayerPosition), 1881939040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Andrei_Desktop_Stuff_EstudosUnreal_Obstacle_Assault_ObstacleAssault_Source_ObstacleAssault_ResetPlayerPosition_h_3204579587(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_Users_Andrei_Desktop_Stuff_EstudosUnreal_Obstacle_Assault_ObstacleAssault_Source_ObstacleAssault_ResetPlayerPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Andrei_Desktop_Stuff_EstudosUnreal_Obstacle_Assault_ObstacleAssault_Source_ObstacleAssault_ResetPlayerPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
