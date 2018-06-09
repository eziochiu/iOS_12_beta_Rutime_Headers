/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSampleBufferVideoFormatOutputCommand : CAMCaptureCommand {
    long long  __videoFormat;
}

@property (nonatomic, readonly) long long _videoFormat;

- (long long)_videoFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleBufferVideoFormat:(long long)arg1;

@end
