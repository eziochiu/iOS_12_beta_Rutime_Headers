/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureVideoDataOutputInternal * _internal;
}

@property (nonatomic) bool alwaysDiscardsLateVideoFrames;
@property (nonatomic, readonly) NSArray *availableVideoCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property (nonatomic, readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> *sampleBufferDelegate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *videoSettings;

+ (void)initialize;
+ (id)new;

- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x1; union { struct { struct opaqueCMSampleBuffer {} *x_1_2_1; } x_2_1_1; struct { long long x_2_2_1; struct opaqueCMFormatDescription {} *x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque { }*)arg1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { }*)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (bool)alwaysDiscardsLateVideoFrames;
- (bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg1;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)delegateOverride;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)init;
- (bool)isVideoSettingsDimensionsOverrideEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)outputFormat;
- (id)outputScalingModeForSourceFormat:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)recommendedVideoSettingsForVideoCodecType:(id)arg1 assetWriterOutputFileType:(id)arg2;
- (void)removeConnection:(id)arg1;
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAlwaysDiscardsLateVideoFrames:(bool)arg1;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setVideoSettings:(id)arg1;
- (void)setVideoSettingsDimensionsOverrideEnabled:(bool)arg1;
- (id)supportedAssetWriterOutputFileTypes;
- (id)supportedVideoSettingsKeys;
- (bool)usesPreviewSizedBuffers;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)videoSettings;

@end
