/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal * _internal;
}

@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic) bool unifiedAutoExposureDefaultsEnabled;

+ (id)deviceInputWithDevice:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (bool)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)description;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (id)notReadyError;
- (id)ports;
- (void)setUnifiedAutoExposureDefaultsEnabled:(bool)arg1;
- (bool)unifiedAutoExposureDefaultsEnabled;

@end
