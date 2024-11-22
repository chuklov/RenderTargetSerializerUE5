/*
	This code was written by Alexander Chadfield

	Plugin created by Alexander Chadfield
*/

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "RenderTargetSerializerBPLibrary.generated.h"


UCLASS()
class URenderTargetSerializerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Serialize Render Target", Keywords = "RenderTargetSerializer"), Category = "Render Target Serialization")
	static TArray<uint8> SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Deserialize Render Target", Keywords = "RenderTargetSerializer"), Category = "Render Target Serialization")
	static UTexture2D* DeserializeRenderTarget(const TArray<uint8>& PixelVectors, int32 Width, int32 Height);

};
