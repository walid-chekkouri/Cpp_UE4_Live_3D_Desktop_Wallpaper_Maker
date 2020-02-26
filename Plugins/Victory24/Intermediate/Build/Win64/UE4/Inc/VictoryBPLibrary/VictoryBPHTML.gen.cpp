// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryBPLibrary/Public/VictoryBPHTML.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPHTML() {}
// Cross Module References
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UVictoryBPHTML_IsHTML();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible();
// End Cross Module References
	void UVictoryBPHTML::StaticRegisterNativesUVictoryBPHTML()
	{
		UClass* Class = UVictoryBPHTML::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsHTML", &UVictoryBPHTML::execIsHTML },
			{ "VictoryHTML5_SetCursorVisible", &UVictoryBPHTML::execVictoryHTML5_SetCursorVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics
	{
		struct VictoryBPHTML_eventIsHTML_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPHTML_eventIsHTML_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPHTML_eventIsHTML_Parms), &Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|HTML5" },
		{ "Comment", "/** Is the current OS HTML5? This code will only run in games packaged for HTML5, it will not run in Editor builds :) Use this to customize particle FX for HTML5 vs PC builds! Or for any custom HTML5-specific game logic! <3 Rama*/" },
		{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
		{ "ToolTip", "Is the current OS HTML5? This code will only run in games packaged for HTML5, it will not run in Editor builds :) Use this to customize particle FX for HTML5 vs PC builds! Or for any custom HTML5-specific game logic! <3 Rama" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPHTML, nullptr, "IsHTML", nullptr, nullptr, sizeof(VictoryBPHTML_eventIsHTML_Parms), Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPHTML_IsHTML()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPHTML_IsHTML_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics
	{
		struct VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms
		{
			bool MakeVisible;
		};
		static void NewProp_MakeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MakeVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::NewProp_MakeVisible_SetBit(void* Obj)
	{
		((VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms*)Obj)->MakeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::NewProp_MakeVisible = { "MakeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms), &Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::NewProp_MakeVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::NewProp_MakeVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|HTML5" },
		{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPHTML, nullptr, "VictoryHTML5_SetCursorVisible", nullptr, nullptr, sizeof(VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms), Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister()
	{
		return UVictoryBPHTML::StaticClass();
	}
	struct Z_Construct_UClass_UVictoryBPHTML_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVictoryBPHTML_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVictoryBPHTML_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVictoryBPHTML_IsHTML, "IsHTML" }, // 3623348416
		{ &Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible, "VictoryHTML5_SetCursorVisible" }, // 124380280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVictoryBPHTML_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//note about UBlueprintFunctionLibrary\n// This class is a base class for any function libraries exposed to blueprints.\n// Methods in subclasses are expected to be static, and no methods should be added to the base class.\n" },
		{ "IncludePath", "VictoryBPHTML.h" },
		{ "ModuleRelativePath", "Public/VictoryBPHTML.h" },
		{ "ToolTip", "note about UBlueprintFunctionLibrary\n This class is a base class for any function libraries exposed to blueprints.\n Methods in subclasses are expected to be static, and no methods should be added to the base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVictoryBPHTML_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVictoryBPHTML>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVictoryBPHTML_Statics::ClassParams = {
		&UVictoryBPHTML::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVictoryBPHTML_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVictoryBPHTML_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVictoryBPHTML()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVictoryBPHTML_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVictoryBPHTML, 2586791585);
	template<> VICTORYBPLIBRARY_API UClass* StaticClass<UVictoryBPHTML>()
	{
		return UVictoryBPHTML::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVictoryBPHTML(Z_Construct_UClass_UVictoryBPHTML, &UVictoryBPHTML::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UVictoryBPHTML"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryBPHTML);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
