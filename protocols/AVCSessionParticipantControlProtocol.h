/* made by EzioChiu.
 */

@protocol AVCSessionParticipantControlProtocol <NSObject>

@required

- (NSData *)frequencyLevels;
- (bool)isAudioEnabled;
- (bool)isAudioMuted;
- (bool)isAudioPaused;
- (bool)isVideoEnabled;
- (bool)isVideoPaused;
- (NSData *)negotiationData;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioMuted:(bool)arg1;
- (void)setAudioPaused:(bool)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVolume:(float)arg1;
- (NSString *)uuid;
- (float)volume;

@end
