/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal * _internal;
}

@property (nonatomic, readonly) long long autoFocusSystem;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) struct { int x1; int x2; } highResolutionStillImageDimensions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) NSArray *supportedColorSpaces;
@property (nonatomic, readonly) NSArray *supportedDepthDataFormats;
@property (nonatomic, readonly) NSArray *unsupportedCaptureOutputClasses;
@property (getter=isVideoBinned, nonatomic, readonly) bool videoBinned;
@property (nonatomic, readonly) float videoFieldOfView;
@property (getter=isVideoHDRSupported, nonatomic, readonly) bool videoHDRSupported;
@property (nonatomic, readonly) double videoMaxZoomFactor;
@property (nonatomic, readonly) double videoMaxZoomFactorForDepthDataDelivery;
@property (nonatomic, readonly) double videoMinZoomFactorForDepthDataDelivery;
@property (getter=isVideoStabilizationSupported, nonatomic, readonly) bool videoStabilizationSupported;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic, readonly) double videoZoomFactorUpscaleThreshold;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 frameRateRanges:(id)arg3;
- (long long)autoFocusSystem;
- (void)dealloc;
- (id)debugDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (id)description;
- (id)figCaptureSourceDepthDataFormat;
- (id)figCaptureSourceVideoFormat;
- (const struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { int x1; int x2; })highResolutionStillImageDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (bool)isHighResPhotoFormat;
- (bool)isIrisSupported;
- (bool)isIrisVideoStabilizationSupported;
- (bool)isPhotoFormat;
- (bool)isPortraitEffectsMatteStillImageDeliverySupported;
- (bool)isSISSupported;
- (bool)isStereoFusionSupported;
- (bool)isStillImageDepthSupported;
- (bool)isStillImageDisparitySupported;
- (bool)isStreamingDepthSupported;
- (bool)isStreamingDisparitySupported;
- (bool)isVideoBinned;
- (bool)isVideoHDRSupported;
- (bool)isVideoStabilizationModeSupported:(long long)arg1;
- (bool)isVideoStabilizationSupported;
- (bool)isWideColorSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (id)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (bool)needsPhotoPreviewDPCC;
- (id)optimizedPhotoFilterNames;
- (id)optimizedVideoPreviewFilterNames;
- (bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })previewDimensions;
- (int)rawBitDepth;
- (struct { int x1; int x2; })sensorDimensions;
- (id)supportedColorSpaces;
- (id)supportedDepthDataFormats;
- (int)supportedFormatsArrayIndex;
- (unsigned int)supportedRawPixelFormat;
- (int)supportedStabilizationMethod;
- (bool)supportsDynamicCrop;
- (bool)supportsHighProfileH264;
- (bool)supportsHighResolutionStillImageOutput;
- (bool)supportsQuadraHighResolutionStillImageOutput;
- (id)unsupportedCaptureOutputClasses;
- (float)videoFieldOfView;
- (double)videoMaxZoomFactor;
- (double)videoMaxZoomFactorForDepthDataDelivery;
- (double)videoMinZoomFactorForDepthDataDelivery;
- (id)videoSupportedFrameRateRanges;
- (double)videoZoomFactorUpscaleThreshold;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (id)vtScalingMode;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (struct { int x1; int x2; })_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (long long)cam_compareUsingBinning:(id)arg1;
- (long long)cam_compareUsingDimensions:(id)arg1;
- (long long)cam_compareUsingMaximumFramerate:(id)arg1;
- (long long)cam_compareUsingQuality:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cam_frameDurationForVideoConfiguration:(long long)arg1;
- (double)cam_frameRateForVideoConfiguration:(long long)arg1;
- (double)cam_maximumFrameRate;
- (bool)cam_supportsFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)cam_supportsFrameRate:(double)arg1;
- (bool)cam_supportsFrameRate:(double)arg1 width:(long long)arg2 height:(long long)arg3 colorSpace:(long long)arg4;
- (bool)cam_supportsPanoramaConfiguration:(id)arg1;
- (bool)cam_supportsVideoConfiguration:(long long)arg1 colorSpace:(long long)arg2;

@end
