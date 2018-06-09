/* made by EzioChiu.
 */

@protocol AVCSessionParticipantDelegate <NSObject>

@optional

- (void)participant:(AVCSessionParticipant *)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 mediaPrioritiesDidChange:(NSDictionary *)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 prominenceDidChange:(NSDictionary *)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteAudioPausedDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteVideoPausedDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;

@end
