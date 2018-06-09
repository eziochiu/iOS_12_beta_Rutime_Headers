/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureResolvedPhotoSettings : NSObject {
    AVCaptureResolvedPhotoSettingsInternal * _internal;
}

@property (getter=isDualCameraFusionEnabled, readonly) bool dualCameraFusionEnabled;
@property (readonly) struct { int x1; int x2; } embeddedThumbnailDimensions;
@property (readonly) unsigned long long expectedPhotoCount;
@property (getter=isFlashEnabled, readonly) bool flashEnabled;
@property (getter=cam_isRecordingMovieForLivePhoto, nonatomic, readonly) bool isRecordingMovieForLivePhoto;
@property (readonly) struct { int x1; int x2; } livePhotoMovieDimensions;
@property (readonly) struct { int x1; int x2; } photoDimensions;
@property (readonly) struct { int x1; int x2; } portraitEffectsMatteDimensions;
@property (readonly) struct { int x1; int x2; } previewDimensions;
@property (readonly) struct { int x1; int x2; } rawPhotoDimensions;
@property (getter=isStillImageStabilizationEnabled, readonly) bool stillImageStabilizationEnabled;
@property (readonly) long long uniqueID;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(struct { int x1; int x2; })arg2 rawPhotoDimensions:(struct { int x1; int x2; })arg3 previewDimensions:(struct { int x1; int x2; })arg4 embeddedThumbnailDimensions:(struct { int x1; int x2; })arg5 livePhotoMovieEnabled:(bool)arg6 livePhotoMovieDimensions:(struct { int x1; int x2; })arg7 portraitEffectsMatteDimensions:(struct { int x1; int x2; })arg8 turboModeEnabled:(bool)arg9 flashEnabled:(bool)arg10 HDREnabled:(bool)arg11 adjustedPhotoFiltersEnabled:(bool)arg12 EV0PhotoDeliveryEnabled:(bool)arg13 stillImageStabilizationEnabled:(bool)arg14 dualCameraFusionEnabled:(bool)arg15 squareCropEnabled:(bool)arg16 photoManifest:(id)arg17;

- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(struct { int x1; int x2; })arg2 rawPhotoDimensions:(struct { int x1; int x2; })arg3 previewDimensions:(struct { int x1; int x2; })arg4 embeddedThumbnailDimensions:(struct { int x1; int x2; })arg5 livePhotoMovieEnabled:(bool)arg6 livePhotoMovieDimensions:(struct { int x1; int x2; })arg7 portraitEffectsMatteDimensions:(struct { int x1; int x2; })arg8 turboModeEnabled:(bool)arg9 flashEnabled:(bool)arg10 HDREnabled:(bool)arg11 adjustedPhotoFiltersEnabled:(bool)arg12 EV0PhotoDeliveryEnabled:(bool)arg13 stillImageStabilizationEnabled:(bool)arg14 dualCameraFusionEnabled:(bool)arg15 squareCropEnabled:(bool)arg16 photoManifest:(id)arg17;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct { int x1; int x2; })embeddedThumbnailDimensions;
- (unsigned long long)expectedPhotoCount;
- (bool)isAdjustedPhotoFilterRenderingEnabled;
- (bool)isDualCameraFusionEnabled;
- (bool)isEV0PhotoDeliveryEnabled;
- (bool)isFlashEnabled;
- (bool)isHDREnabled;
- (bool)isSquareCropEnabled;
- (bool)isStillImageStabilizationEnabled;
- (bool)isTurboModeEnabled;
- (struct { int x1; int x2; })livePhotoMovieDimensions;
- (bool)livePhotoMovieEnabled;
- (struct { int x1; int x2; })photoDimensions;
- (id)photoManifest;
- (struct { int x1; int x2; })portraitEffectsMatteDimensions;
- (struct { int x1; int x2; })previewDimensions;
- (struct { int x1; int x2; })rawPhotoDimensions;
- (long long)uniqueID;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_isRecordingMovieForLivePhoto;

@end
