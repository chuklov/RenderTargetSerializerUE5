// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderTargetSerializerBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef RENDERTARGETSERIALIZER_RenderTargetSerializerBPLibrary_generated_h
#error "RenderTargetSerializerBPLibrary.generated.h already included, missing '#pragma once' in RenderTargetSerializerBPLibrary.h"
#endif
#define RENDERTARGETSERIALIZER_RenderTargetSerializerBPLibrary_generated_h

#define FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDeserializeRenderTarget); \
	DECLARE_FUNCTION(execSerializeRenderTarget);


#define FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURenderTargetSerializerBPLibrary(); \
	friend struct Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URenderTargetSerializerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderTargetSerializer"), NO_API) \
	DECLARE_SERIALIZER(URenderTargetSerializerBPLibrary)


#define FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderTargetSerializerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderTargetSerializerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderTargetSerializerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderTargetSerializerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URenderTargetSerializerBPLibrary(URenderTargetSerializerBPLibrary&&); \
	URenderTargetSerializerBPLibrary(const URenderTargetSerializerBPLibrary&); \
public: \
	NO_API virtual ~URenderTargetSerializerBPLibrary();


#define FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_15_PROLOG
#define FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_RPC_WRAPPERS \
	FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_INCLASS \
	FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERTARGETSERIALIZER_API UClass* StaticClass<class URenderTargetSerializerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
