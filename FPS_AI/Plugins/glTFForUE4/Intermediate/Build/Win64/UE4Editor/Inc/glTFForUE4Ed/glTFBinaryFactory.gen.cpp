// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4Ed/Private/glTF/glTFBinaryFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFBinaryFactory() {}
// Cross Module References
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFBinaryFactory_NoRegister();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFBinaryFactory();
	GLTFFORUE4ED_API UClass* Z_Construct_UClass_UglTFFactory();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4Ed();
// End Cross Module References
	void UglTFBinaryFactory::StaticRegisterNativesUglTFBinaryFactory()
	{
	}
	UClass* Z_Construct_UClass_UglTFBinaryFactory_NoRegister()
	{
		return UglTFBinaryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UglTFBinaryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UglTFBinaryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UglTFFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4Ed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UglTFBinaryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "glTF/glTFBinaryFactory.h" },
		{ "ModuleRelativePath", "Private/glTF/glTFBinaryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UglTFBinaryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UglTFBinaryFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UglTFBinaryFactory_Statics::ClassParams = {
		&UglTFBinaryFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UglTFBinaryFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UglTFBinaryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UglTFBinaryFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UglTFBinaryFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UglTFBinaryFactory, 3695907282);
	template<> GLTFFORUE4ED_API UClass* StaticClass<UglTFBinaryFactory>()
	{
		return UglTFBinaryFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UglTFBinaryFactory(Z_Construct_UClass_UglTFBinaryFactory, &UglTFBinaryFactory::StaticClass, TEXT("/Script/glTFForUE4Ed"), TEXT("UglTFBinaryFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UglTFBinaryFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
