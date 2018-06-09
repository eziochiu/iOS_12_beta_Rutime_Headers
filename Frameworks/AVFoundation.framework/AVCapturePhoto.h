/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhoto : NSObject {
    AVCapturePhotoInternal * _internal;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVDepthData *depthData;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) NSDictionary *metadata;
@property (readonly) long long photoCount;
@property (readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) struct __CVBuffer { }*previewPixelBuffer;
@property (getter=isRawPhoto, readonly) bool rawPhoto;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (struct CGImage { }*)CGImageRepresentation;
- (struct __CVBuffer { }*)_embeddedThumbnailSourcePixelBuffer;
- (id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { }*)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 exceptionReason:(id*)arg6;
- (unsigned int)_orientation;
- (unsigned int)actualPhotoProcessingFlags;
- (id)bracketSettings;
- (id)cameraCalibrationData;
- (void)dealloc;
- (id)debugDescription;
- (id)depthData;
- (id)description;
- (id)embeddedThumbnailPhotoFormat;
- (unsigned int)expectedPhotoProcessingFlags;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithCustomizer:(id)arg1;
- (id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { }*)arg3 replacementDepthData:(id)arg4;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 photoSurface:(struct __IOSurface { }*)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5 depthDataSurface:(struct __IOSurface { }*)arg6 depthMetadataDictionary:(id)arg7 portraitEffectsMatteSurface:(struct __IOSurface { }*)arg8 portraitEffectsMatteMetadataDictionary:(id)arg9 captureRequest:(id)arg10 bracketSettings:(id)arg11 sequenceCount:(unsigned long long)arg12 photoCount:(unsigned long long)arg13 expectedPhotoProcessingFlags:(unsigned int)arg14 sourceDeviceType:(id)arg15;
- (bool)isRawPhoto;
- (long long)lensStabilizationStatus;
- (id)livePhotoMovieFileURL;
- (id)metadata;
- (long long)photoCount;
- (unsigned int)photoProcessingFlags;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)portraitEffectsMatte;
- (id)portraitMetadata;
- (struct CGImage { }*)previewCGImageRepresentation;
- (struct __CVBuffer { }*)previewPixelBuffer;
- (id)resolvedSettings;
- (long long)sequenceCount;
- (id)sourceDeviceType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
