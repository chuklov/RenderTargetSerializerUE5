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

TArray<FFloat16> URenderTargetSerializerBPLibrary::SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget)
{
    // Convert pixel data to an array of half-precision floating-point r, g, b, a
    TArray<FFloat16> Channels;

    if (!RenderTarget)
    {
        return Channels;
    }

    int32 Width = RenderTarget->SizeX;
    int32 Height = RenderTarget->SizeY;

    TArray<FLinearColor> PixelData;
    PixelData.Init(FLinearColor::Black, Width * Height);

    Channels.Empty(Width * Height * 4);  // 4 channels: R, G, B, A (half-float format)

    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    FReadSurfaceDataFlags ReadPixelFlags;
    ReadPixelFlags.SetLinearToGamma(true); // Ensure proper gamma correction

    // Read pixel data in floating-point format
    RenderTargetResource->ReadLinearColorPixels(PixelData);

    for (int32 y = 0; y < Height; ++y)
    {
        for (int32 x = 0; x < Width; ++x)
        {
            FLinearColor PixelColor = PixelData[y * Width + x];

            // Ensure values are in the range [0.000001 - 1.000]
            Channels.Add(FFloat16(FMath::Clamp(PixelColor.R, 0.000001f, 1.0f)));
            Channels.Add(FFloat16(FMath::Clamp(PixelColor.G, 0.000001f, 1.0f)));
            Channels.Add(FFloat16(FMath::Clamp(PixelColor.B, 0.000001f, 1.0f)));
            Channels.Add(FFloat16(FMath::Clamp(PixelColor.A, 0.000001f, 1.0f)));
        }
    }

    return Channels;
}

UTexture2D* URenderTargetSerializerBPLibrary::DeserializeRenderTarget(const TArray<FFloat16>& Channels, int32 Width, int32 Height)
{
    if (Width <= 0 || Height <= 0 || Channels.Num() != Width * Height * 4) // Now checking for 4-channel half-float data
    {
        return nullptr;
    }

    UTexture2D* Texture2D = UTexture2D::CreateTransient(Width, Height, PF_FloatR16G16B16A16);
    if (!Texture2D)
    {
        return nullptr;
    }

    Texture2D->SRGB = false; // Disable sRGB because we are working with linear float values

    Texture2D->UpdateResource();

    FTexture2DResource* Texture2DResource = static_cast<FTexture2DResource*>(Texture2D->GetResource());
    if (!Texture2DResource)
    {
        return nullptr;
    }

    // Lock the texture for writing
    FTexture2DMipMap& Mip = Texture2D->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Copy pixel data into the texture
    FFloat16Color* ColorData = static_cast<FFloat16Color*>(Data);

    for (int32 PixelNum = 0; PixelNum < (Width * Height); ++PixelNum)
    {
        // Read RGBA values from the half-float array
        FFloat16 R = Channels[PixelNum * 4 + 0];
        FFloat16 G = Channels[PixelNum * 4 + 1];
        FFloat16 B = Channels[PixelNum * 4 + 2];
        FFloat16 A = Channels[PixelNum * 4 + 3];

        ColorData[PixelNum] = FFloat16Color(R, G, B, A);
    }

    // Unlock the texture
    Mip.BulkData.Unlock();

    Texture2D->UpdateResource();

    return Texture2D;
}
