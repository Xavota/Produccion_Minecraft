// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/MinecraftHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinecraftHUD() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftHUD_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_AMinecraftHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void AMinecraftHUD::StaticRegisterNativesAMinecraftHUD()
	{
	}
	UClass* Z_Construct_UClass_AMinecraftHUD_NoRegister()
	{
		return AMinecraftHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMinecraftHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinecraftHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinecraftHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MinecraftHUD.h" },
		{ "ModuleRelativePath", "MinecraftHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinecraftHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinecraftHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinecraftHUD_Statics::ClassParams = {
		&AMinecraftHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMinecraftHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinecraftHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinecraftHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinecraftHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinecraftHUD, 2861204134);
	template<> MINECRAFT_API UClass* StaticClass<AMinecraftHUD>()
	{
		return AMinecraftHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinecraftHUD(Z_Construct_UClass_AMinecraftHUD, &AMinecraftHUD::StaticClass, TEXT("/Script/Minecraft"), TEXT("AMinecraftHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinecraftHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
