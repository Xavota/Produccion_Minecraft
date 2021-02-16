// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_Block_CPP_generated_h
#error "Block_CPP.generated.h already included, missing '#pragma once' in Block_CPP.h"
#endif
#define MINECRAFT_Block_CPP_generated_h

#define Minecraft_Source_Minecraft_Block_CPP_h_19_SPARSE_DATA
#define Minecraft_Source_Minecraft_Block_CPP_h_19_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_Block_CPP_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_Block_CPP_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock_CPP(); \
	friend struct Z_Construct_UClass_ABlock_CPP_Statics; \
public: \
	DECLARE_CLASS(ABlock_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABlock_CPP)


#define Minecraft_Source_Minecraft_Block_CPP_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABlock_CPP(); \
	friend struct Z_Construct_UClass_ABlock_CPP_Statics; \
public: \
	DECLARE_CLASS(ABlock_CPP, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABlock_CPP)


#define Minecraft_Source_Minecraft_Block_CPP_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock_CPP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock_CPP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock_CPP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock_CPP(ABlock_CPP&&); \
	NO_API ABlock_CPP(const ABlock_CPP&); \
public:


#define Minecraft_Source_Minecraft_Block_CPP_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock_CPP(ABlock_CPP&&); \
	NO_API ABlock_CPP(const ABlock_CPP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock_CPP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock_CPP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock_CPP)


#define Minecraft_Source_Minecraft_Block_CPP_h_19_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_Block_CPP_h_16_PROLOG
#define Minecraft_Source_Minecraft_Block_CPP_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Block_CPP_h_19_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Block_CPP_h_19_SPARSE_DATA \
	Minecraft_Source_Minecraft_Block_CPP_h_19_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_Block_CPP_h_19_INCLASS \
	Minecraft_Source_Minecraft_Block_CPP_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_Block_CPP_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Block_CPP_h_19_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Block_CPP_h_19_SPARSE_DATA \
	Minecraft_Source_Minecraft_Block_CPP_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Block_CPP_h_19_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Block_CPP_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ABlock_CPP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_Block_CPP_h


#define FOREACH_ENUM_EBLOCK_TYPE(op) \
	op(SOLID) \
	op(LIQUID) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
