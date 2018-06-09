/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAudioPlayerController : NSObject {
    bool  _audioSessionActive;
    <NCAudioPlayerControllerDelegate> * _delegate;
    double  _duration;
    long long  _playbackState;
    AVPlayer * _player;
    float  _rate;
    long long  _status;
    long long  _timeControlStatus;
}

@property (getter=isAudioSessionActive, nonatomic) bool audioSessionActive;
@property (nonatomic, readonly) float currentTime;
@property (nonatomic) <NCAudioPlayerControllerDelegate> *delegate;
@property (nonatomic) double duration;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic) float rate;
@property (nonatomic) long long status;
@property (nonatomic) long long timeControlStatus;

- (void).cxx_destruct;
- (void)activateAudioSession;
- (float)currentTime;
- (void)deactivateAudioSession;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)handleAudioSessionRouteChangeNotification:(id)arg1;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isAudioSessionActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (long long)playbackState;
- (id)player;
- (float)rate;
- (void)seekToTime:(float)arg1;
- (void)setAudioSessionActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimeControlStatus:(long long)arg1;
- (bool)shouldEnableProximityMonitoring;
- (long long)status;
- (void)stop;
- (long long)timeControlStatus;
- (bool)updateProximityMonitoring;

@end