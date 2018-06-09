/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIrisVideoRecordingCommand : CAMCaptureCommand {
    bool  __enabled;
}

@property (getter=_isEnabled, nonatomic, readonly) bool _enabled;

- (bool)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoRecordingEnabled:(bool)arg1;

@end
