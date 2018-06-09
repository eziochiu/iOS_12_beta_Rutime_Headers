/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMImageControlModeCommand : CAMCaptureCommand {
    long long  __captureMode;
}

@property (nonatomic, readonly) long long _captureMode;

- (long long)_captureMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCaptureMode:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end
