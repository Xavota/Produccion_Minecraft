// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/MinecraftGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinecraftGameMode() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftGameMode_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AMinecraftGameMode::StaticRegisterNativesAMinecraftGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMinecraftGameMode_NoRegister()
	{
		return AMinecraftGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMinecraftGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinecraftGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MinecraftGameMode.h" },
		{ "ModuleRelativePath", "MinecraftGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinecraftGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinecraftGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinecraftGameMode_Statics::ClassParams = {
		&AMinecraftGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMinecraftGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinecraftGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinecraftGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinecraftGameMode, 1175050131);
	template<> MINECRAFT_API UClass* StaticClass<AMinecraftGameMode>()
	{
		return AMinecraftGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinecraftGameMode(Z_Construct_UClass_AMinecraftGameMode, &AMinecraftGameMode::StaticClass, TEXT("/Script/Minecraft"), TEXT("AMinecraftGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinecraftGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
