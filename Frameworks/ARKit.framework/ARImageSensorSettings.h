/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageSensorSettings : NSObject <NSCopying> {
    bool  _allowCameraInMultipleForegroundAppLayout;
    bool  _audioCaptureEnabled;
    bool  _autoFocusEnabled;
    AVCaptureSession * _captureSession;
    bool  _mirrorVideoOutput;
    ARVideoFormat * _videoFormat;
}

@property (nonatomic) bool allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) bool audioCaptureEnabled;
@property (nonatomic) bool autoFocusEnabled;
@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic) bool mirrorVideoOutput;
@property (nonatomic, readonly) ARVideoFormat *videoFormat;

- (void).cxx_destruct;
- (bool)allowCameraInMultipleForegroundAppLayout;
- (bool)audioCaptureEnabled;
- (bool)autoFocusEnabled;
- (id)captureSession;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithVideoFormat:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mirrorVideoOutput;
- (void)setAllowCameraInMultipleForegroundAppLayout:(bool)arg1;
- (void)setAudioCaptureEnabled:(bool)arg1;
- (void)setAutoFocusEnabled:(bool)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setMirrorVideoOutput:(bool)arg1;
- (id)videoFormat;

@end
