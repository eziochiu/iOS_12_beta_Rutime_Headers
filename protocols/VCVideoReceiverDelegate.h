/* made by EzioChiu.
 */

@protocol VCVideoReceiverDelegate <NSObject>

@required

- (bool)vcVideoReceiver:(VCVideoReceiverBase *)arg1 didReceiveRemoteFrame:(struct __CVBuffer { }*)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 newVideoAttributes:(VideoAttributes *)arg4 isFirstFrame:(bool)arg5;
- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;

@optional

- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (unsigned int)vcVideoReceiver:(VCVideoReceiverBase *)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoReceiverRequestKeyFrame:(VCVideoReceiverBase *)arg1 rtcpPSFBType:(unsigned int)arg2;

@end
