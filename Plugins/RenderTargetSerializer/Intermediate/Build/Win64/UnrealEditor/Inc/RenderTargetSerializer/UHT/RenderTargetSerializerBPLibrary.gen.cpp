// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderTargetSerializer/Public/RenderTargetSerializerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTargetSerializerBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
RENDERTARGETSERIALIZER_API UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary();
RENDERTARGETSERIALIZER_API UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RenderTargetSerializer();
// End Cross Module References

// Begin Class URenderTargetSerializerBPLibrary Function DeserializeRenderTarget
struct Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics
{
	struct RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms
	{
		TArray<FVector> PixelVectors;
		int32 Width;
		int32 Height;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Render Target Serialization" },
		{ "DisplayName", "Deserialize Render Target" },
		{ "Keywords", "RenderTargetSerializer" },
		{ "ModuleRelativePath", "Public/RenderTargetSerializerBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelVectors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelVectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PixelVectors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelVectors_Inner = { "PixelVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelVectors = { "PixelVectors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, PixelVectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelVectors_MetaData), NewProp_PixelVectors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelVectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelVectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderTargetSerializerBPLibrary, nullptr, "DeserializeRenderTarget", nullptr, nullptr, Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URenderTargetSerializerBPLibrary::execDeserializeRenderTarget)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PixelVectors);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URenderTargetSerializerBPLibrary::DeserializeRenderTarget(Z_Param_Out_PixelVectors,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class URenderTargetSerializerBPLibrary Function DeserializeRenderTarget

// Begin Class URenderTargetSerializerBPLibrary Function SerializeRenderTarget
struct Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics
{
	struct RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms
	{
		UTextureRenderTarget2D* RenderTarget;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Render Target Serialization" },
		{ "DisplayName", "Serialize Render Target" },
		{ "Keywords", "RenderTargetSerializer" },
		{ "ModuleRelativePath", "Public/RenderTargetSerializerBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderTargetSerializerBPLibrary, nullptr, "SerializeRenderTarget", nullptr, nullptr, Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URenderTargetSerializerBPLibrary::execSerializeRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=URenderTargetSerializerBPLibrary::SerializeRenderTarget(Z_Param_RenderTarget);
	P_NATIVE_END;
}
// End Class URenderTargetSerializerBPLibrary Function SerializeRenderTarget

// Begin Class URenderTargetSerializerBPLibrary
void URenderTargetSerializerBPLibrary::StaticRegisterNativesURenderTargetSerializerBPLibrary()
{
	UClass* Class = URenderTargetSerializerBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeserializeRenderTarget", &URenderTargetSerializerBPLibrary::execDeserializeRenderTarget },
		{ "SerializeRenderTarget", &URenderTargetSerializerBPLibrary::execSerializeRenderTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderTargetSerializerBPLibrary);
UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary_NoRegister()
{
	return URenderTargetSerializerBPLibrary::StaticClass();
}
struct Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RenderTargetSerializerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RenderTargetSerializerBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget, "DeserializeRenderTarget" }, // 1248355411
		{ &Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget, "SerializeRenderTarget" }, // 1033505035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderTargetSerializerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RenderTargetSerializer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::ClassParams = {
	&URenderTargetSerializerBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary()
{
	if (!Z_Registration_Info_UClass_URenderTargetSerializerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderTargetSerializerBPLibrary.OuterSingleton, Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URenderTargetSerializerBPLibrary.OuterSingleton;
}
template<> RENDERTARGETSERIALIZER_API UClass* StaticClass<URenderTargetSerializerBPLibrary>()
{
	return URenderTargetSerializerBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URenderTargetSerializerBPLibrary);
URenderTargetSerializerBPLibrary::~URenderTargetSerializerBPLibrary() {}
// End Class URenderTargetSerializerBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URenderTargetSerializerBPLibrary, URenderTargetSerializerBPLibrary::StaticClass, TEXT("URenderTargetSerializerBPLibrary"), &Z_Registration_Info_UClass_URenderTargetSerializerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderTargetSerializerBPLibrary), 531621609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_17235678(TEXT("/Script/RenderTargetSerializer"),
	Z_CompiledInDeferFile_FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_RTSPlugin_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
