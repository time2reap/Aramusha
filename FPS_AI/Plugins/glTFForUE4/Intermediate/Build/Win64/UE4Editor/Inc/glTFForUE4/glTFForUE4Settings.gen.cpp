// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4/Classes/glTFForUE4Settings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFForUE4Settings() {}
// Cross Module References
	GLTFFORUE4_API UClass* Z_Construct_UClass_UglTFForUE4Settings_NoRegister();
	GLTFFORUE4_API UClass* Z_Construct_UClass_UglTFForUE4Settings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4();
// End Cross Module References
	void UglTFForUE4Settings::StaticRegisterNativesUglTFForUE4Settings()
	{
	}
	UClass* Z_Construct_UClass_UglTFForUE4Settings_NoRegister()
	{
		return UglTFForUE4Settings::StaticClass();
	}
	struct Z_Construct_UClass_UglTFForUE4Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFForUE4Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFForUE4Settings_Statics::Class_MetaDataParams[] = {
		{ "Category", "glTFForUE4" },
		{ "IncludePath", "glTFForUE4Settings.h" },
		{ "ModuleRelativePath", "Classes/glTFForUE4Settings.h" },
		{ "ToolTip", "!\n * \\class UglTFForUE4Settings\n *\n * \\brief The settings of the `glTFForUE4`" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFForUE4Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFForUE4Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UglTFForUE4Settings_Statics::ClassParams = {
		&UglTFForUE4Settings::StaticClass,
		"glTFForUE4Settings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFForUE4Settings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UglTFForUE4Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFForUE4Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UglTFForUE4Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UglTFForUE4Settings, 3525841463);
	template<> GLTFFORUE4_API UClass* StaticClass<UglTFForUE4Settings>()
	{
		return UglTFForUE4Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UglTFForUE4Settings(Z_Construct_UClass_UglTFForUE4Settings, &UglTFForUE4Settings::StaticClass, TEXT("/Script/glTFForUE4"), TEXT("UglTFForUE4Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFForUE4Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
