/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureMetadataOutputInternal * _internal;
}

@property (nonatomic, readonly) NSArray *availableMetadataObjectTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegateOverride;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *metadataObjectTypes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (nonatomic, readonly) <AVCaptureMetadataOutputObjectsDelegate> *metadataObjectsDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectOfInterest;
@property (readonly) Class superclass;

+ (id)_metadataConstantValueToName:(id)arg1;
+ (void)initialize;
+ (id)new;

- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x1; union { struct { struct opaqueCMSampleBuffer {} *x_1_2_1; } x_2_1_1; struct { long long x_2_2_1; struct opaqueCMFormatDescription {} *x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg1;
- (id)_metadataIdentifiers;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateLocalQueue:(struct localQueueOpaque { }*)arg1;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableMetadataObjectTypes;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)delegateOverride;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)init;
- (bool)isFaceTrackingMetadataObjectTypesAvailable;
- (bool)isFaceTrackingSupported;
- (bool)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
- (bool)isOfflineVideoStabilizationMotionMetadataSupported;
- (id)metadataObjectTypes;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(bool)arg1;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(bool)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
