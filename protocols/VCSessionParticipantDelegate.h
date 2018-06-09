/* made by EzioChiu.
 */

@protocol VCSessionParticipantDelegate <NSObject>

@required

- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeProminence:(unsigned char)arg2 description:(NSString *)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didRequestVideoRedundancy:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(VCSessionParticipant *)arg1;

@end
