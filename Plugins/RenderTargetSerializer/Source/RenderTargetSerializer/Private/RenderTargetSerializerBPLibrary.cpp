/*
	This code was written by Alexander Chadfield

	Plugin created by Alexander Chadfield
*/

#include "RenderTargetSerializerBPLibrary.h"
#include "RenderTargetSerializer.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"
#include "Rendering/Texture2DResource.h"
#include "RHICommandList.h"
#include "RenderUtils.h"
#include "RenderGraphUtils.h"

URenderTargetSerializerBPLibrary::URenderTargetSerializerBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


TArray<uint8> URenderTargetSerializerBPLibrary::SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget)
{
    // Convert pixel data to array of 8-bit r,b,g
    TArray<uint8> Channels;

    if (!RenderTarget)
    {
        return Channels;
    }

    int32 Width = RenderTarget->SizeX;
    int32 Height = RenderTarget->SizeY;

    TArray<FColor> PixelData;
    PixelData.Init(FColor::Black, Width * Height);

    Channels.Empty(Width * Height * 4);

    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    FReadSurfaceDataFlags ReadPixelFlags;
    // Ensure no colour space conversion (do we want this? for uint8 we *do* want gamma space.)
    ReadPixelFlags.SetLinearToGamma(true);
    RenderTargetResource->ReadPixels(PixelData, ReadPixelFlags);

    for (int32 y = 0; y < Height; ++y)
    {
        for (int32 x = 0; x < Width; ++x)
        {
            // Convert rgba32f pixel colour to rgb8ui format
            FColor PixelColor = PixelData[y * Width + x];
            uint8 Rgba[4] = {
                PixelColor.R,
                PixelColor.G,
                PixelColor.B,
                PixelColor.A
            };

            // Add three channels into the vector
            Channels.Append(Rgba, sizeof(Rgba) / sizeof(Rgba[0]));
        }
    }

    return Channels;
}

UTexture2D* URenderTargetSerializerBPLibrary::DeserializeRenderTarget(const TArray<uint8>& Channels, int32 Width, int32 Height)
{
    if (Width <= 0 || Height <= 0 || Channels.Num() != Width * Height * 4)
    {
        return nullptr;
    }

    UTexture2D* Texture2D = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
    if (!Texture2D)
    {
        return nullptr;
    }

    Texture2D->UpdateResource();

    // Create a texture 2D to store the pixel data (there is no RGB format! weird)
    FTexture2DResource* Texture2DResource = static_cast<FTexture2DResource*>(Texture2D->GetResource());
    if (!Texture2DResource)
    {
        return nullptr;
    }

    // Lock the texture for writing
    FTexture2DMipMap& Mip = Texture2D->GetPlatformData()->Mips[0];
    // This doesn't need READ capabilities but nothing is documented -w-;;
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Copy pixel data into the texture after converting to FColor
    FColor* ColorData = static_cast<FColor*>(Data);

    for (int32 PixelNum = 0; PixelNum < (Width * Height); ++PixelNum)
    {
        // Interestingly we don't need to swap R and B despite the BGRA format.
        uint8 Rgba[4] = {
            Channels[PixelNum * 4 + 0],
            Channels[PixelNum * 4 + 1],
            Channels[PixelNum * 4 + 2],
            Channels[PixelNum * 4 + 3]
        };
        // Store pixel data with alpha channel
        FColor PixelColor(Rgba[0], Rgba[1], Rgba[2], Rgba[3]);
        ColorData[PixelNum] = PixelColor;
    }

    // Unlock the texture
    Mip.BulkData.Unlock();

    Texture2D->UpdateResource();

    return Texture2D;
}

