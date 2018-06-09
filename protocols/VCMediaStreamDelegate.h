/* made by EzioChiu.
 */

@protocol VCMediaStreamDelegate <NSObject>

@required

- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didPauseStream:(bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didResumeStream:(bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didStartStream:(bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStreamDidStop:(id <VCMediaStreamProtocol>)arg1;

@optional

- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveVideoFrameWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didUpdateVideoConfiguration:(bool)arg2 error:(NSError *)arg3 dictionary:(NSDictionary *)arg4;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 priorityDidChange:(unsigned char)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 remoteMediaStalled:(bool)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 updateFrequencyLevel:(NSData *)arg2 isInputMeter:(bool)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 uplinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id <VCMediaStreamProtocol>)arg1;

@end
