/* made by EzioChiu.
 */

@protocol VCMomentsCollectorDelegate <NSObject>

@required

- (void)stream:(VCMediaStream *)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList { }*)arg2 timestamp:(unsigned int)arg3;
- (void)stream:(VCMediaStream *)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;

@end
