/* made by EzioChiu.
 */

@protocol VCVideoCaptureClient

@required

- (void)avConferencePreviewError:(NSString *)arg1;
- (VCVideoRule *)clientCaptureRule;
- (bool)onCaptureFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)thermalLevelDidChange:(int)arg1;

@optional

- (void)avConferenceScreenCaptureError:(NSString *)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(bool)arg2 powerLevelDidChange:(bool)arg3;

@end
