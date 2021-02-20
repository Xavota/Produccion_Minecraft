// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MINECRAFT_MinecraftProjectile_generated_h
#error "MinecraftProjectile.generated.h already included, missing '#pragma once' in MinecraftProjectile.h"
#endif
#define MINECRAFT_MinecraftProjectile_generated_h

#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_SPARSE_DATA
#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinecraftProjectile(); \
	friend struct Z_Construct_UClass_AMinecraftProjectile_Statics; \
public: \
	DECLARE_CLASS(AMinecraftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AMinecraftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMinecraftProjectile(); \
	friend struct Z_Construct_UClass_AMinecraftProjectile_Statics; \
public: \
	DECLARE_CLASS(AMinecraftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(AMinecraftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinecraftProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinecraftProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinecraftProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinecraftProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinecraftProjectile(AMinecraftProjectile&&); \
	NO_API AMinecraftProjectile(const AMinecraftProjectile&); \
public:


#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinecraftProjectile(AMinecraftProjectile&&); \
	NO_API AMinecraftProjectile(const AMinecraftProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinecraftProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinecraftProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinecraftProjectile)


#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMinecraftProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMinecraftProjectile, ProjectileMovement); }


#define Minecraft_Source_Minecraft_MinecraftProjectile_h_12_PROLOG
#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_INCLASS \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_MinecraftProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_SPARSE_DATA \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_MinecraftProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class AMinecraftProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_MinecraftProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
