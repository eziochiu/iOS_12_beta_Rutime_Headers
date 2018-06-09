/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {
    int  _autoImageControlMode;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    int  _cameraModeForGyroCalibration;
    bool  _clockSynchronizationEnabled;
    bool  _coreMediaFaceTrackingEnabled;
    bool  _depthConversionEnabled;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    int  _depthType;
    bool  _detectedFacesOutputEnabled;
    bool  _forceCNRDisabled;
    bool  _ispFaceTrackingEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationClientOverride;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxExposureDurationFrameworkOverride;
    int  _motionAttachmentsSource;
    bool  _offlineVISEnabled;
    int  _preferredCompressionTypeOnPreviewOutput;
    int  _preferredCompressionTypeOnVideoCaptureOutputs;
    FigVideoCaptureConnectionConfiguration * _previewConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    NSArray * _videoCaptureConnectionConfigurations;
    NSArray * _videoPreviewConnectionConfigurations;
    int  _videoStabilizationType;
    bool  _zeroShutterLagEnabled;
}

@property (nonatomic) int autoImageControlMode;
@property (nonatomic, retain) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic) int cameraModeForGyroCalibration;
@property (nonatomic) bool clockSynchronizationEnabled;
@property (nonatomic) bool coreMediaFaceTrackingEnabled;
@property (nonatomic) bool depthConversionEnabled;
@property (nonatomic, retain) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic) int depthType;
@property (nonatomic) bool detectedFacesOutputEnabled;
@property (nonatomic) bool forceCNRDisabled;
@property (nonatomic) bool ispFaceTrackingEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDurationClientOverride;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDurationFrameworkOverride;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) bool offlineVISEnabled;
@property (nonatomic) int preferredCompressionTypeOnPreviewOutput;
@property (nonatomic) int preferredCompressionTypeOnVideoCaptureOutputs;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *previewConnectionConfiguration;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, retain) NSArray *videoCaptureConnectionConfigurations;
@property (nonatomic, retain) NSArray *videoPreviewConnectionConfigurations;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) bool zeroShutterLagEnabled;

- (int)autoImageControlMode;
- (id)cameraConfiguration;
- (int)cameraModeForGyroCalibration;
- (bool)clockSynchronizationEnabled;
- (bool)coreMediaFaceTrackingEnabled;
- (void)dealloc;
- (bool)depthConversionEnabled;
- (id)depthDataConnectionConfiguration;
- (int)depthType;
- (bool)detectedFacesOutputEnabled;
- (bool)forceCNRDisabled;
- (bool)ispFaceTrackingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationClientOverride;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDurationFrameworkOverride;
- (int)motionAttachmentsSource;
- (bool)offlineVISEnabled;
- (int)preferredCompressionTypeOnPreviewOutput;
- (int)preferredCompressionTypeOnVideoCaptureOutputs;
- (id)previewConnectionConfiguration;
- (void)setAutoImageControlMode:(int)arg1;
- (void)setCameraConfiguration:(id)arg1;
- (void)setCameraModeForGyroCalibration:(int)arg1;
- (void)setClockSynchronizationEnabled:(bool)arg1;
- (void)setCoreMediaFaceTrackingEnabled:(bool)arg1;
- (void)setDepthConversionEnabled:(bool)arg1;
- (void)setDepthDataConnectionConfiguration:(id)arg1;
- (void)setDepthType:(int)arg1;
- (void)setDetectedFacesOutputEnabled:(bool)arg1;
- (void)setForceCNRDisabled:(bool)arg1;
- (void)setIspFaceTrackingEnabled:(bool)arg1;
- (void)setMaxExposureDurationClientOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxExposureDurationFrameworkOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOfflineVISEnabled:(bool)arg1;
- (void)setPreferredCompressionTypeOnPreviewOutput:(int)arg1;
- (void)setPreferredCompressionTypeOnVideoCaptureOutputs:(int)arg1;
- (void)setPreviewConnectionConfiguration:(id)arg1;
- (void)setStillImageConnectionConfiguration:(id)arg1;
- (void)setVideoCaptureConnectionConfigurations:(id)arg1;
- (void)setVideoPreviewConnectionConfigurations:(id)arg1;
- (void)setVideoStabilizationType:(int)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (id)stillImageConnectionConfiguration;
- (id)videoCaptureConnectionConfigurations;
- (id)videoPreviewConnectionConfigurations;
- (int)videoStabilizationType;
- (bool)zeroShutterLagEnabled;

@end
