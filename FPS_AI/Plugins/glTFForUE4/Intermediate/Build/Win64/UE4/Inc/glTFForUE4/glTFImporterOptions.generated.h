// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GLTFFORUE4_glTFImporterOptions_generated_h
#error "glTFImporterOptions.generated.h already included, missing '#pragma once' in glTFImporterOptions.h"
#endif
#define GLTFFORUE4_glTFImporterOptions_generated_h

#define D__develop_gitlab_runner_builds_048598dd_0_c4g_gltf_UE4PluginBuilder_glTFForUE4_HostProject_Plugins_glTFForUE4_Source_glTFForUE4_Public_glTF_glTFImporterOptions_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFImporterOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GLTFFORUE4_API UScriptStruct* StaticStruct<struct FglTFImporterOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__develop_gitlab_runner_builds_048598dd_0_c4g_gltf_UE4PluginBuilder_glTFForUE4_HostProject_Plugins_glTFForUE4_Source_glTFForUE4_Public_glTF_glTFImporterOptions_h


#define FOREACH_ENUM_EGLTFIMPORTTYPE(op) \
	op(EglTFImportType::None) \
	op(EglTFImportType::StaticMesh) \
	op(EglTFImportType::SkeletalMesh) \
	op(EglTFImportType::Actor) \
	op(EglTFImportType::Level) 

enum class EglTFImportType : uint8;
template<> GLTFFORUE4_API UEnum* StaticEnum<EglTFImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
