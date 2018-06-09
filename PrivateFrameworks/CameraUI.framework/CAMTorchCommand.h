/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTorchCommand : CAMCaptureCommand {
    float  __level;
    long long  __torchMode;
}

@property (nonatomic, readonly) float _level;
@property (nonatomic, readonly) long long _torchMode;

- (float)_level;
- (long long)_torchMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTorchLevel:(float)arg1;
- (id)initWithTorchMode:(long long)arg1;

@end
