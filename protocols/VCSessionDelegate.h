/* made by EzioChiu.
 */

@protocol VCSessionDelegate <NSObject>

@required

- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioPaused:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didChangeProminence:(unsigned char)arg3 description:(NSString *)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioEnabledDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioPausedDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoEnabledDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoPausedDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoPaused:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;

@end
