/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayer : CALayer {
    AVCaptureVideoPreviewLayerInternal * _internal;
}

@property (nonatomic) bool automaticallyAdjustsMirroring;
@property (nonatomic, readonly) AVCaptureConnection *connection;
@property (getter=isMirrored, nonatomic) bool mirrored;
@property (getter=isMirroringSupported, nonatomic, readonly) bool mirroringSupported;
@property (nonatomic) long long orientation;
@property (getter=isOrientationSupported, nonatomic, readonly) bool orientationSupported;
@property (nonatomic, retain) AVCaptureSession *session;
@property (copy) NSString *videoGravity;

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;
+ (id)layerWithSessionWithNoConnection:(id)arg1;

- (bool)_automaticallyAdjustsMirroring;
- (bool)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)_initWithSession:(id)arg1 makeConnection:(bool)arg2;
- (id)_input;
- (bool)_isMirrored;
- (long long)_orientation;
- (void)_setSensorAndEstimatedPreviewSizes;
- (bool)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(bool)arg2 exceptionReason:(id*)arg3;
- (void)_updateCaptureDeviceTransform;
- (void)_updateDepthDataDeliverySupported;
- (void)_updatePreviewTransforms;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)automaticallyAdjustsMirroring;
- (void)bumpChangeSeed;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)centerSublayer:(long long)arg1;
- (int)changeSeed;
- (id)connection;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (unsigned int)imageQueueSlot;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (bool)isChromaNoiseReductionEnabled;
- (bool)isChromaNoiseReductionSupported;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isDepthDataDeliverySupported;
- (bool)isFilterRenderingEnabled;
- (bool)isMirrored;
- (bool)isMirroringSupported;
- (bool)isOrientationSupported;
- (bool)isPaused;
- (bool)isUnoptimizedFilterRenderingEnabled;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)orientation;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (double)previewRotationDegrees;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeConnection:(id)arg1;
- (id)session;
- (void)setAutomaticallyAdjustsMirroring:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setMirrored:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionWithNoConnection:(id)arg1;
- (void)setSinkID:(id)arg1;
- (void)setUnoptimizedFilterRenderingEnabled:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoPreviewFilters:(id)arg1;
- (id)sinkID;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)videoGravity;
- (id)videoPreviewFilters;

@end
