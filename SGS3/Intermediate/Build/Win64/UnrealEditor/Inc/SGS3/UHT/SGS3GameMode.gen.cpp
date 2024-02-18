// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGS3/SGS3GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGS3GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SGS3_API UClass* Z_Construct_UClass_ASGS3GameMode();
	SGS3_API UClass* Z_Construct_UClass_ASGS3GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SGS3();
// End Cross Module References
	void ASGS3GameMode::StaticRegisterNativesASGS3GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASGS3GameMode);
	UClass* Z_Construct_UClass_ASGS3GameMode_NoRegister()
	{
		return ASGS3GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASGS3GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGS3GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SGS3,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGS3GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGS3GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SGS3GameMode.h" },
		{ "ModuleRelativePath", "SGS3GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGS3GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGS3GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGS3GameMode_Statics::ClassParams = {
		&ASGS3GameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGS3GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGS3GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASGS3GameMode()
	{
		if (!Z_Registration_Info_UClass_ASGS3GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGS3GameMode.OuterSingleton, Z_Construct_UClass_ASGS3GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASGS3GameMode.OuterSingleton;
	}
	template<> SGS3_API UClass* StaticClass<ASGS3GameMode>()
	{
		return ASGS3GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGS3GameMode);
	ASGS3GameMode::~ASGS3GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_SGS3_SGS3_SGS3_Source_SGS3_SGS3GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_SGS3_SGS3_SGS3_Source_SGS3_SGS3GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASGS3GameMode, ASGS3GameMode::StaticClass, TEXT("ASGS3GameMode"), &Z_Registration_Info_UClass_ASGS3GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGS3GameMode), 3897821930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_SGS3_SGS3_SGS3_Source_SGS3_SGS3GameMode_h_4219004598(TEXT("/Script/SGS3"),
		Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_SGS3_SGS3_SGS3_Source_SGS3_SGS3GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ywe21afu_Documents_UnrealProjects_SGS3_SGS3_SGS3_Source_SGS3_SGS3GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
