// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFForUE4/Public/glTF/glTFImporterOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeglTFImporterOptions() {}
// Cross Module References
	GLTFFORUE4_API UEnum* Z_Construct_UEnum_glTFForUE4_EglTFImportType();
	UPackage* Z_Construct_UPackage__Script_glTFForUE4();
	GLTFFORUE4_API UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptions();
// End Cross Module References
	static UEnum* EglTFImportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_glTFForUE4_EglTFImportType, Z_Construct_UPackage__Script_glTFForUE4(), TEXT("EglTFImportType"));
		}
		return Singleton;
	}
	template<> GLTFFORUE4_API UEnum* StaticEnum<EglTFImportType>()
	{
		return EglTFImportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EglTFImportType(EglTFImportType_StaticEnum, TEXT("/Script/glTFForUE4"), TEXT("EglTFImportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_glTFForUE4_EglTFImportType_Hash() { return 1400449230U; }
	UEnum* Z_Construct_UEnum_glTFForUE4_EglTFImportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_glTFForUE4();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EglTFImportType"), 0, Get_Z_Construct_UEnum_glTFForUE4_EglTFImportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EglTFImportType::None", (int64)EglTFImportType::None },
				{ "EglTFImportType::StaticMesh", (int64)EglTFImportType::StaticMesh },
				{ "EglTFImportType::SkeletalMesh", (int64)EglTFImportType::SkeletalMesh },
				{ "EglTFImportType::Actor", (int64)EglTFImportType::Actor },
				{ "EglTFImportType::Level", (int64)EglTFImportType::Level },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_glTFForUE4,
				nullptr,
				"EglTFImportType",
				"EglTFImportType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FglTFImporterOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GLTFFORUE4_API uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FglTFImporterOptions, Z_Construct_UPackage__Script_glTFForUE4(), TEXT("glTFImporterOptions"), sizeof(FglTFImporterOptions), Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash());
	}
	return Singleton;
}
template<> GLTFFORUE4_API UScriptStruct* StaticStruct<FglTFImporterOptions>()
{
	return FglTFImporterOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FglTFImporterOptions(FglTFImporterOptions::StaticStruct, TEXT("/Script/glTFForUE4"), TEXT("glTFImporterOptions"), false, nullptr, nullptr);
static struct FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptions
{
	FScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("glTFImporterOptions")),new UScriptStruct::TCppStructOps<FglTFImporterOptions>);
	}
} ScriptStruct_glTFForUE4_StaticRegisterNativesFglTFImporterOptions;
	struct Z_Construct_UScriptStruct_FglTFImporterOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportTexture_MetaData[];
#endif
		static void NewProp_bImportTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMaterial_MetaData[];
#endif
		static void NewProp_bImportMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAnimationForSkeletalMesh_MetaData[];
#endif
		static void NewProp_bImportAnimationForSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAnimationForSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIntegrateAllMeshsForStaticMesh_MetaData[];
#endif
		static void NewProp_bIntegrateAllMeshsForStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIntegrateAllMeshsForStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[];
#endif
		static void NewProp_bRecomputeTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormal_MetaData[];
#endif
		static void NewProp_bInvertNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScaleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshScaleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathInEngine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathInEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathInOS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathInOS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FglTFImporterOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bImportTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture = { "bImportTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Material options" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bImportMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial = { "bImportMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Skeletal Mesh options" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bImportAnimationForSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh = { "bImportAnimationForSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Static Mesh options" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bIntegrateAllMeshsForStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh = { "bIntegrateAllMeshsForStaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bRecomputeTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bRecomputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bUseMikkTSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal_SetBit(void* Obj)
	{
		((FglTFImporterOptions*)Obj)->bInvertNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal = { "bInvertNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FglTFImporterOptions), &Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_MeshScaleRatio_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Mesh options" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_MeshScaleRatio = { "MeshScaleRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, MeshScaleRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_MeshScaleRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_MeshScaleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
		{ "ToolTip", "Import options" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType = { "ImportType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, ImportType), Z_Construct_UEnum_glTFForUE4_EglTFImportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine = { "FilePathInEngine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, FilePathInEngine), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS_MetaData[] = {
		{ "Category", "glTFForUE4Ed" },
		{ "ModuleRelativePath", "Public/glTF/glTFImporterOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS = { "FilePathInOS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FglTFImporterOptions, FilePathInOS), METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bImportAnimationForSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bIntegrateAllMeshsForStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bRecomputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bUseMikkTSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_bInvertNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_MeshScaleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_ImportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::NewProp_FilePathInOS,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_glTFForUE4,
		nullptr,
		&NewStructOps,
		"glTFImporterOptions",
		sizeof(FglTFImporterOptions),
		alignof(FglTFImporterOptions),
		Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FglTFImporterOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_glTFForUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("glTFImporterOptions"), sizeof(FglTFImporterOptions), Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FglTFImporterOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FglTFImporterOptions_Hash() { return 1701980028U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
