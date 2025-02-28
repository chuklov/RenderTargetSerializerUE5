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

	/**
 * Converts a UTexture2D into half-float (FP16) RGBA buffer.
 *
 * @param UTextureRenderTarget2D Render Target
 * @return Array of floats.
 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Serialize Render Target sRGBA", Keywords = "RenderTargetSerializer"), Category = "Render Target Serialization")
	static TArray<uint8> SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget);


	/**
 * Converts a serialized half-float (FP16) RGBA buffer back into a UTexture2D.
 *
 * @param Channels The array containing half-float pixel data.
 * @param Width The width of the texture.
 * @param Height The height of the texture.
 * @return A UTexture2D created from the serialized data.
 */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Deserialize Render Target sRGBA", Keywords = "RenderTargetSerializer"), Category = "Render Target Serialization")
	static UTexture2D* DeserializeRenderTarget(const TArray<uint8>& PixelVectors, int32 Width, int32 Height);

};
