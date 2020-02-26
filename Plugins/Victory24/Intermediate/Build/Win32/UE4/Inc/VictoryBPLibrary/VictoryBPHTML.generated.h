// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VICTORYBPLIBRARY_VictoryBPHTML_generated_h
#error "VictoryBPHTML.generated.h already included, missing '#pragma once' in VictoryBPHTML.h"
#endif
#define VICTORYBPLIBRARY_VictoryBPHTML_generated_h

#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_SPARSE_DATA
#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVictoryHTML5_SetCursorVisible) \
	{ \
		P_GET_UBOOL(Z_Param_MakeVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPHTML::VictoryHTML5_SetCursorVisible(Z_Param_MakeVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHTML) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPHTML::IsHTML(); \
		P_NATIVE_END; \
	}


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVictoryHTML5_SetCursorVisible) \
	{ \
		P_GET_UBOOL(Z_Param_MakeVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVictoryBPHTML::VictoryHTML5_SetCursorVisible(Z_Param_MakeVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHTML) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVictoryBPHTML::IsHTML(); \
		P_NATIVE_END; \
	}


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVictoryBPHTML(); \
	friend struct Z_Construct_UClass_UVictoryBPHTML_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPHTML, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPHTML)


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVictoryBPHTML(); \
	friend struct Z_Construct_UClass_UVictoryBPHTML_Statics; \
public: \
	DECLARE_CLASS(UVictoryBPHTML, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VictoryBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(UVictoryBPHTML)


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPHTML(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPHTML) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPHTML); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPHTML); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPHTML(UVictoryBPHTML&&); \
	NO_API UVictoryBPHTML(const UVictoryBPHTML&); \
public:


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVictoryBPHTML(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVictoryBPHTML(UVictoryBPHTML&&); \
	NO_API UVictoryBPHTML(const UVictoryBPHTML&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVictoryBPHTML); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVictoryBPHTML); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVictoryBPHTML)


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_PRIVATE_PROPERTY_OFFSET
#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_20_PROLOG
#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_PRIVATE_PROPERTY_OFFSET \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_SPARSE_DATA \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_PRIVATE_PROPERTY_OFFSET \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_SPARSE_DATA \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_INCLASS_NO_PURE_DECLS \
	Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VICTORYBPLIBRARY_API UClass* StaticClass<class UVictoryBPHTML>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Projects_Sun_PluginStaging_Output24_HostProject_Plugins_VictoryBPLibrary_Source_VictoryBPLibrary_Public_VictoryBPHTML_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
