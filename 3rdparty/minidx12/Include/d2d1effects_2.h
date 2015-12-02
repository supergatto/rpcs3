//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This file is automatically generated.  Please do not edit it directly.
//
// File name: D2D1Effects_2.h
//---------------------------------------------------------------------------
#ifdef _MSC_VER
#pragma once
#endif // #ifdef _MSC_VER

#ifndef _D2D1_EFFECTS_2_
#define _D2D1_EFFECTS_2_

#ifndef _D2D1_EFFECTS_1_
#include <d2d1effects_1.h>
#endif // #ifndef _D2D1_EFFECTS_1_

           
#include <winapifamily.h>

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)           
           
// Built in effect CLSIDs
DEFINE_GUID(CLSID_D2D1Contrast,                 0xb648a78a, 0x0ed5, 0x4f80, 0xa9, 0x4a, 0x8e, 0x82, 0x5a, 0xca, 0x6b, 0x77);
DEFINE_GUID(CLSID_D2D1RgbToHue,                 0x23f3e5ec, 0x91e8, 0x4d3d, 0xad, 0x0a, 0xaf, 0xad, 0xc1, 0x00, 0x4a, 0xa1);
DEFINE_GUID(CLSID_D2D1HueToRgb,                 0x7b78a6bd, 0x0141, 0x4def, 0x8a, 0x52, 0x63, 0x56, 0xee, 0x0c, 0xbd, 0xd5);
DEFINE_GUID(CLSID_D2D1ChromaKey,                0x74C01F5B, 0x2A0D, 0x408C, 0x88, 0xE2, 0xC7, 0xA3, 0xC7, 0x19, 0x77, 0x42);
DEFINE_GUID(CLSID_D2D1Emboss,                   0xb1c5eb2b, 0x0348, 0x43f0, 0x81, 0x07, 0x49, 0x57, 0xca, 0xcb, 0xa2, 0xae);
DEFINE_GUID(CLSID_D2D1Exposure,                 0xb56c8cfa, 0xf634, 0x41ee, 0xbe, 0xe0, 0xff, 0xa6, 0x17, 0x10, 0x60, 0x04);
DEFINE_GUID(CLSID_D2D1Grayscale,                0x36DDE0EB, 0x3725, 0x42E0, 0x83, 0x6D, 0x52, 0xFB, 0x20, 0xAE, 0xE6, 0x44);
DEFINE_GUID(CLSID_D2D1Invert,                   0xe0c3784d, 0xcb39, 0x4e84, 0xb6, 0xfd, 0x6b, 0x72, 0xf0, 0x81, 0x02, 0x63);
DEFINE_GUID(CLSID_D2D1Posterize,                0x2188945e, 0x33a3, 0x4366, 0xb7, 0xbc, 0x08, 0x6b, 0xd0, 0x2d, 0x08, 0x84);
DEFINE_GUID(CLSID_D2D1Sepia,                    0x3a1af410, 0x5f1d, 0x4dbe, 0x84, 0xdf, 0x91, 0x5d, 0xa7, 0x9b, 0x71, 0x53);
DEFINE_GUID(CLSID_D2D1Sharpen,                  0xC9B887CB, 0xC5FF, 0x4DC5, 0x97, 0x79, 0x27, 0x3D, 0xCF, 0x41, 0x7C, 0x7D);
DEFINE_GUID(CLSID_D2D1Straighten,               0x4da47b12, 0x79a3, 0x4fb0, 0x82, 0x37, 0xbb, 0xc3, 0xb2, 0xa4, 0xde, 0x08);
DEFINE_GUID(CLSID_D2D1TemperatureTint,          0x89176087, 0x8AF9, 0x4A08, 0xAE, 0xB1, 0x89, 0x5F, 0x38, 0xDB, 0x17, 0x66);
DEFINE_GUID(CLSID_D2D1Vignette,                 0xc00c40be, 0x5e67, 0x4ca3, 0x95, 0xb4, 0xf4, 0xb0, 0x2c, 0x11, 0x51, 0x35);
DEFINE_GUID(CLSID_D2D1EdgeDetection,            0xEFF583CA, 0xCB07, 0x4AA9, 0xAC, 0x5D, 0x2C, 0xC4, 0x4C, 0x76, 0x46, 0x0F);
DEFINE_GUID(CLSID_D2D1HighlightsShadows,        0xCADC8384, 0x323F, 0x4C7E, 0xA3, 0x61, 0x2E, 0x2B, 0x24, 0xDF, 0x6E, 0xE4);
DEFINE_GUID(CLSID_D2D1LookupTable3D,            0x349E0EDA, 0x0088, 0x4A79, 0x9C, 0xA3, 0xC7, 0xE3, 0x00, 0x20, 0x20, 0x20);

#if NTDDI_VERSION >= NTDDI_WIN10_RS1

DEFINE_GUID(CLSID_D2D1Opacity,                  0x811d79a4, 0xde28, 0x4454, 0x80, 0x94, 0xc6, 0x46, 0x85, 0xf8, 0xbd, 0x4c);
DEFINE_GUID(CLSID_D2D1AlphaMask,                0xc80ecff0, 0x3fd5, 0x4f05, 0x83, 0x28, 0xc5, 0xd1, 0x72, 0x4b, 0x4f, 0x0a);
DEFINE_GUID(CLSID_D2D1CrossFade,                0x12f575e8, 0x4db1, 0x485f, 0x9a, 0x84, 0x03, 0xa0, 0x7d, 0xd3, 0x82, 0x9f);
DEFINE_GUID(CLSID_D2D1Tint,                     0x36312b17, 0xf7dd, 0x4014, 0x91, 0x5d, 0xff, 0xca, 0x76, 0x8c, 0xf2, 0x11);

#endif // #if NTDDI_VERSION >= NTDDI_WIN10_RS1

/// <summary>
/// The enumeration of the Contrast effect's top level properties.
/// </summary>
typedef enum D2D1_CONTRAST_PROP
{
    
    /// <summary>
    /// Property Name: "Contrast"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_CONTRAST_PROP_CONTRAST = 0,
    
    /// <summary>
    /// Property Name: "ClampInput"
    /// Property Type: BOOL
    /// </summary>
    D2D1_CONTRAST_PROP_CLAMP_INPUT = 1,
    D2D1_CONTRAST_PROP_FORCE_DWORD = 0xffffffff

} D2D1_CONTRAST_PROP;


/// <summary>
/// The enumeration of the RgbToHue effect's top level properties.
/// </summary>
typedef enum D2D1_RGBTOHUE_PROP
{
    
    /// <summary>
    /// Property Name: "OutputColorSpace"
    /// Property Type: D2D1_RGBTOHUE_OUTPUT_COLOR_SPACE
    /// </summary>
    D2D1_RGBTOHUE_PROP_OUTPUT_COLOR_SPACE = 0,
    D2D1_RGBTOHUE_PROP_FORCE_DWORD = 0xffffffff

} D2D1_RGBTOHUE_PROP;

typedef enum D2D1_RGBTOHUE_OUTPUT_COLOR_SPACE
{
    D2D1_RGBTOHUE_OUTPUT_COLOR_SPACE_HUE_SATURATION_VALUE = 0,
    D2D1_RGBTOHUE_OUTPUT_COLOR_SPACE_HUE_SATURATION_LIGHTNESS = 1,
    D2D1_RGBTOHUE_OUTPUT_COLOR_SPACE_FORCE_DWORD = 0xffffffff

} D2D1_RGBTOHUE_OUTPUT_COLOR_SPACE;


/// <summary>
/// The enumeration of the HueToRgb effect's top level properties.
/// </summary>
typedef enum D2D1_HUETORGB_PROP
{
    
    /// <summary>
    /// Property Name: "InputColorSpace"
    /// Property Type: D2D1_HUETORGB_INPUT_COLOR_SPACE
    /// </summary>
    D2D1_HUETORGB_PROP_INPUT_COLOR_SPACE = 0,
    D2D1_HUETORGB_PROP_FORCE_DWORD = 0xffffffff

} D2D1_HUETORGB_PROP;

typedef enum D2D1_HUETORGB_INPUT_COLOR_SPACE
{
    D2D1_HUETORGB_INPUT_COLOR_SPACE_HUE_SATURATION_VALUE = 0,
    D2D1_HUETORGB_INPUT_COLOR_SPACE_HUE_SATURATION_LIGHTNESS = 1,
    D2D1_HUETORGB_INPUT_COLOR_SPACE_FORCE_DWORD = 0xffffffff

} D2D1_HUETORGB_INPUT_COLOR_SPACE;


/// <summary>
/// The enumeration of the Chroma Key effect's top level properties.
/// </summary>
typedef enum D2D1_CHROMAKEY_PROP
{
    
    /// <summary>
    /// Property Name: "Color"
    /// Property Type: D2D1_VECTOR_3F
    /// </summary>
    D2D1_CHROMAKEY_PROP_COLOR = 0,
    
    /// <summary>
    /// Property Name: "Tolerance"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_CHROMAKEY_PROP_TOLERANCE = 1,
    
    /// <summary>
    /// Property Name: "InvertAlpha"
    /// Property Type: BOOL
    /// </summary>
    D2D1_CHROMAKEY_PROP_INVERT_ALPHA = 2,
    
    /// <summary>
    /// Property Name: "Feather"
    /// Property Type: BOOL
    /// </summary>
    D2D1_CHROMAKEY_PROP_FEATHER = 3,
    D2D1_CHROMAKEY_PROP_FORCE_DWORD = 0xffffffff

} D2D1_CHROMAKEY_PROP;


/// <summary>
/// The enumeration of the Emboss effect's top level properties.
/// </summary>
typedef enum D2D1_EMBOSS_PROP
{
    
    /// <summary>
    /// Property Name: "Height"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_EMBOSS_PROP_HEIGHT = 0,
    
    /// <summary>
    /// Property Name: "Direction"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_EMBOSS_PROP_DIRECTION = 1,
    D2D1_EMBOSS_PROP_FORCE_DWORD = 0xffffffff

} D2D1_EMBOSS_PROP;


/// <summary>
/// The enumeration of the Exposure effect's top level properties.
/// </summary>
typedef enum D2D1_EXPOSURE_PROP
{
    
    /// <summary>
    /// Property Name: "ExposureValue"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_EXPOSURE_PROP_EXPOSURE_VALUE = 0,
    D2D1_EXPOSURE_PROP_FORCE_DWORD = 0xffffffff

} D2D1_EXPOSURE_PROP;


/// <summary>
/// The enumeration of the Posterize effect's top level properties.
/// </summary>
typedef enum D2D1_POSTERIZE_PROP
{
    
    /// <summary>
    /// Property Name: "RedValueCount"
    /// Property Type: UINT32
    /// </summary>
    D2D1_POSTERIZE_PROP_RED_VALUE_COUNT = 0,
    
    /// <summary>
    /// Property Name: "GreenValueCount"
    /// Property Type: UINT32
    /// </summary>
    D2D1_POSTERIZE_PROP_GREEN_VALUE_COUNT = 1,
    
    /// <summary>
    /// Property Name: "BlueValueCount"
    /// Property Type: UINT32
    /// </summary>
    D2D1_POSTERIZE_PROP_BLUE_VALUE_COUNT = 2,
    D2D1_POSTERIZE_PROP_FORCE_DWORD = 0xffffffff

} D2D1_POSTERIZE_PROP;


/// <summary>
/// The enumeration of the Sepia effect's top level properties.
/// </summary>
typedef enum D2D1_SEPIA_PROP
{
    
    /// <summary>
    /// Property Name: "Intensity"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_SEPIA_PROP_INTENSITY = 0,
    
    /// <summary>
    /// Property Name: "AlphaMode"
    /// Property Type: D2D1_ALPHA_MODE
    /// </summary>
    D2D1_SEPIA_PROP_ALPHA_MODE = 1,
    D2D1_SEPIA_PROP_FORCE_DWORD = 0xffffffff

} D2D1_SEPIA_PROP;


/// <summary>
/// The enumeration of the Sharpen effect's top level properties.
/// </summary>
typedef enum D2D1_SHARPEN_PROP
{
    
    /// <summary>
    /// Property Name: "Sharpness"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_SHARPEN_PROP_SHARPNESS = 0,
    
    /// <summary>
    /// Property Name: "Threshold"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_SHARPEN_PROP_THRESHOLD = 1,
    D2D1_SHARPEN_PROP_FORCE_DWORD = 0xffffffff

} D2D1_SHARPEN_PROP;


/// <summary>
/// The enumeration of the Straighten effect's top level properties.
/// </summary>
typedef enum D2D1_STRAIGHTEN_PROP
{
    
    /// <summary>
    /// Property Name: "Angle"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_STRAIGHTEN_PROP_ANGLE = 0,
    
    /// <summary>
    /// Property Name: "MaintainSize"
    /// Property Type: BOOL
    /// </summary>
    D2D1_STRAIGHTEN_PROP_MAINTAIN_SIZE = 1,
    
    /// <summary>
    /// Property Name: "ScaleMode"
    /// Property Type: D2D1_STRAIGHTEN_SCALE_MODE
    /// </summary>
    D2D1_STRAIGHTEN_PROP_SCALE_MODE = 2,
    D2D1_STRAIGHTEN_PROP_FORCE_DWORD = 0xffffffff

} D2D1_STRAIGHTEN_PROP;

typedef enum D2D1_STRAIGHTEN_SCALE_MODE
{
    D2D1_STRAIGHTEN_SCALE_MODE_NEAREST_NEIGHBOR = 0,
    D2D1_STRAIGHTEN_SCALE_MODE_LINEAR = 1,
    D2D1_STRAIGHTEN_SCALE_MODE_CUBIC = 2,
    D2D1_STRAIGHTEN_SCALE_MODE_MULTI_SAMPLE_LINEAR = 3,
    D2D1_STRAIGHTEN_SCALE_MODE_ANISOTROPIC = 4,
    D2D1_STRAIGHTEN_SCALE_MODE_FORCE_DWORD = 0xffffffff

} D2D1_STRAIGHTEN_SCALE_MODE;


/// <summary>
/// The enumeration of the Temperature And Tint effect's top level properties.
/// </summary>
typedef enum D2D1_TEMPERATUREANDTINT_PROP
{
    
    /// <summary>
    /// Property Name: "Temperature"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_TEMPERATUREANDTINT_PROP_TEMPERATURE = 0,
    
    /// <summary>
    /// Property Name: "Tint"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_TEMPERATUREANDTINT_PROP_TINT = 1,
    D2D1_TEMPERATUREANDTINT_PROP_FORCE_DWORD = 0xffffffff

} D2D1_TEMPERATUREANDTINT_PROP;


/// <summary>
/// The enumeration of the Vignette effect's top level properties.
/// </summary>
typedef enum D2D1_VIGNETTE_PROP
{
    
    /// <summary>
    /// Property Name: "Color"
    /// Property Type: D2D1_VECTOR_4F
    /// </summary>
    D2D1_VIGNETTE_PROP_COLOR = 0,
    
    /// <summary>
    /// Property Name: "TransitionSize"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_VIGNETTE_PROP_TRANSITION_SIZE = 1,
    
    /// <summary>
    /// Property Name: "Strength"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_VIGNETTE_PROP_STRENGTH = 2,
    D2D1_VIGNETTE_PROP_FORCE_DWORD = 0xffffffff

} D2D1_VIGNETTE_PROP;


/// <summary>
/// The enumeration of the Edge Detection effect's top level properties.
/// </summary>
typedef enum D2D1_EDGEDETECTION_PROP
{
    
    /// <summary>
    /// Property Name: "Strength"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_EDGEDETECTION_PROP_STRENGTH = 0,
    
    /// <summary>
    /// Property Name: "BlurRadius"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_EDGEDETECTION_PROP_BLUR_RADIUS = 1,
    
    /// <summary>
    /// Property Name: "Mode"
    /// Property Type: D2D1_EDGEDETECTION_MODE
    /// </summary>
    D2D1_EDGEDETECTION_PROP_MODE = 2,
    
    /// <summary>
    /// Property Name: "OverlayEdges"
    /// Property Type: BOOL
    /// </summary>
    D2D1_EDGEDETECTION_PROP_OVERLAY_EDGES = 3,
    
    /// <summary>
    /// Property Name: "AlphaMode"
    /// Property Type: D2D1_ALPHA_MODE
    /// </summary>
    D2D1_EDGEDETECTION_PROP_ALPHA_MODE = 4,
    D2D1_EDGEDETECTION_PROP_FORCE_DWORD = 0xffffffff

} D2D1_EDGEDETECTION_PROP;

typedef enum D2D1_EDGEDETECTION_MODE
{
    D2D1_EDGEDETECTION_MODE_SOBEL = 0,
    D2D1_EDGEDETECTION_MODE_PREWITT = 1,
    D2D1_EDGEDETECTION_MODE_FORCE_DWORD = 0xffffffff

} D2D1_EDGEDETECTION_MODE;


/// <summary>
/// The enumeration of the Highlights and Shadows effect's top level properties.
/// </summary>
typedef enum D2D1_HIGHLIGHTSANDSHADOWS_PROP
{
    
    /// <summary>
    /// Property Name: "Highlights"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_HIGHLIGHTS = 0,
    
    /// <summary>
    /// Property Name: "Shadows"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_SHADOWS = 1,
    
    /// <summary>
    /// Property Name: "Clarity"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_CLARITY = 2,
    
    /// <summary>
    /// Property Name: "InputGamma"
    /// Property Type: D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA
    /// </summary>
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_INPUT_GAMMA = 3,
    
    /// <summary>
    /// Property Name: "MaskBlurRadius"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_MASK_BLUR_RADIUS = 4,
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_FORCE_DWORD = 0xffffffff

} D2D1_HIGHLIGHTSANDSHADOWS_PROP;

typedef enum D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA
{
    D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA_LINEAR = 0,
    D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA_SRGB = 1,
    D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA_FORCE_DWORD = 0xffffffff

} D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA;


/// <summary>
/// The enumeration of the Lookup Table 3D effect's top level properties.
/// </summary>
typedef enum D2D1_LOOKUPTABLE3D_PROP
{
    
    /// <summary>
    /// Property Name: "Lut"
    /// Property Type: IUnknown *
    /// </summary>
    D2D1_LOOKUPTABLE3D_PROP_LUT = 0,
    
    /// <summary>
    /// Property Name: "AlphaMode"
    /// Property Type: D2D1_ALPHA_MODE
    /// </summary>
    D2D1_LOOKUPTABLE3D_PROP_ALPHA_MODE = 1,
    D2D1_LOOKUPTABLE3D_PROP_FORCE_DWORD = 0xffffffff

} D2D1_LOOKUPTABLE3D_PROP;


#if NTDDI_VERSION >= NTDDI_WIN10_RS1

/// <summary>
/// The enumeration of the Opacity effect's top level properties.
/// </summary>
typedef enum D2D1_OPACITY_PROP
{
    
    /// <summary>
    /// Property Name: "Opacity"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_OPACITY_PROP_OPACITY = 0,
    D2D1_OPACITY_PROP_FORCE_DWORD = 0xffffffff

} D2D1_OPACITY_PROP;


/// <summary>
/// The enumeration of the Cross Fade effect's top level properties.
/// </summary>
typedef enum D2D1_CROSSFADE_PROP
{
    
    /// <summary>
    /// Property Name: "Weight"
    /// Property Type: FLOAT
    /// </summary>
    D2D1_CROSSFADE_PROP_WEIGHT = 0,
    D2D1_CROSSFADE_PROP_FORCE_DWORD = 0xffffffff

} D2D1_CROSSFADE_PROP;


/// <summary>
/// The enumeration of the Tint effect's top level properties.
/// </summary>
typedef enum D2D1_TINT_PROP
{
    
    /// <summary>
    /// Property Name: "Color"
    /// Property Type: D2D1_VECTOR_4F
    /// </summary>
    D2D1_TINT_PROP_COLOR = 0,
    
    /// <summary>
    /// Property Name: "ClampOutput"
    /// Property Type: BOOL
    /// </summary>
    D2D1_TINT_PROP_CLAMP_OUTPUT = 1,
    D2D1_TINT_PROP_FORCE_DWORD = 0xffffffff

} D2D1_TINT_PROP;


#endif // #if NTDDI_VERSION >= NTDDI_WIN10_RS1

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // #ifndef _D2D1_EFFECTS_2_
