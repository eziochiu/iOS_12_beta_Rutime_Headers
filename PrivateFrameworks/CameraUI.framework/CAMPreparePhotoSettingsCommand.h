/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand {
    CAMCaptureGraphConfiguration * __desiredGraphConfiguration;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;

- (void).cxx_destruct;
- (id)_desiredGraphConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1;

@end
