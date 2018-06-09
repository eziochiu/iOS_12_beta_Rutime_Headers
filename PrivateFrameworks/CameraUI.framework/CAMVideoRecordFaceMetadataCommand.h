/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand {
    bool  __enabled;
}

@property (getter=_isEnabled, nonatomic, readonly) bool _enabled;

- (void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4;
- (id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2;
- (bool)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1;

@end
