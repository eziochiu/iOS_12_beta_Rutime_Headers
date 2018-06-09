/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARConfiguration : NSObject <NSCopying> {
    bool  _allowCameraInMultipleForegroundAppLayout;
    bool  _autoFocusEnabled;
    long long  _cameraPosition;
    AVCaptureSession * _captureSession;
    NSArray * _customSensors;
    unsigned long long  _frameDebugOptions;
    unsigned long long  _lightEstimation;
    bool  _mirroredFrameOutput;
    bool  _providesAudioData;
    ARVideoFormat * _videoFormat;
    long long  _worldAlignment;
}

@property (nonatomic) bool allowCameraInMultipleForegroundAppLayout;
@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic, retain) NSArray *customSensors;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettings;
@property (nonatomic) unsigned long long lightEstimation;
@property (getter=isLightEstimationEnabled, nonatomic) bool lightEstimationEnabled;
@property (nonatomic) bool mirroredFrameOutput;
@property (nonatomic) bool providesAudioData;
@property (nonatomic, readonly) ARReplaySensor *replaySensor;
@property (nonatomic, retain) ARVideoFormat *videoFormat;
@property (nonatomic) long long worldAlignment;

+ (bool)isSupported;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id*)arg2;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id*)arg2 fileURL:(id)arg3;
+ (id)replayConfigurationWithConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
+ (id)supportedVideoFormats;

- (void).cxx_destruct;
- (bool)allowCameraInMultipleForegroundAppLayout;
- (long long)cameraPosition;
- (id)captureSession;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customSensors;
- (id)description;
- (id)descriptionWithoutBrackets;
- (id)deviceModel;
- (unsigned long long)frameDebugOptions;
- (unsigned long long)hash;
- (id)imageSensorSettings;
- (id)init;
- (id)initPrivate;
- (bool)isAutoFocusEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isLightEstimationEnabled;
- (unsigned long long)lightEstimation;
- (bool)mirroredFrameOutput;
- (bool)providesAudioData;
- (id)renderingTechnique;
- (id)replaySensor;
- (void)setAllowCameraInMultipleForegroundAppLayout:(bool)arg1;
- (void)setAutoFocusEnabled:(bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setCustomSensors:(id)arg1;
- (void)setFrameDebugOptions:(unsigned long long)arg1;
- (void)setLightEstimation:(unsigned long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setMirroredFrameOutput:(bool)arg1;
- (void)setProvidesAudioData:(bool)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)setWorldAlignment:(long long)arg1;
- (id)techniques;
- (id)videoFormat;
- (long long)worldAlignment;

@end
