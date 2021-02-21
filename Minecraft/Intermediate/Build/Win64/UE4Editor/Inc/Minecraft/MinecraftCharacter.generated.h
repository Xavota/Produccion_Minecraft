// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_MinecraftCharacter_generated_h
#error "MinecraftCharacter.generated.h already included, missing '#pragma once' in MinecraftCharacter.h"
#endif
#define MINECRAFT_MinecraftCharacter_generated_h

#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_SPARSE_DATA
#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinecraftCharacter(); \
	friend struct Z_Construct_UClass_AMinecraftCharacter_Statics; \
public: \
	DECLARE_CLASS(AMinecraftCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AMinecraftCharacter)


#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMinecraftCharacter(); \
	friend struct Z_Construct_UClass_AMinecraftCharacter_Statics; \
public: \
	DECLARE_CLASS(AMinecraftCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AMinecraftCharacter)


#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinecraftCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinecraftCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinecraftCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinecraftCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinecraftCharacter(AMinecraftCharacter&&); \
	NO_API AMinecraftCharacter(const AMinecraftCharacter&); \
public:


#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinecraftCharacter(AMinecraftCharacter&&); \
	NO_API AMinecraftCharacter(const AMinecraftCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinecraftCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinecraftCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinecraftCharacter)


#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMinecraftCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMinecraftCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMinecraftCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMinecraftCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMinecraftCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMinecraftCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMinecraftCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMinecraftCharacter, L_MotionController); }


#define Minecraft_Source_Minecraft_MinecraftCharacter_h_17_PROLOG
#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_SPARSE_DATA \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_INCLASS \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_MinecraftCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_SPARSE_DATA \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_MinecraftCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class AMinecraftCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_MinecraftCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
