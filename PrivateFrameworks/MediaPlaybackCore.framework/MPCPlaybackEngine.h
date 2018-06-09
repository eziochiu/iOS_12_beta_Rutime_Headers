/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackEngine : NSObject {
    NSString * _audioSessionCategory;
    <MPCPlaybackEngineDelegate> * _delegate;
    MPProtocolProxy<MPCPlaybackEngineEventObserving> * _eventObserver;
    MPCPlaybackIntent * _fallbackPlaybackIntent;
    _MPCAVController * _implementation;
    _MPCLeaseManager * _leaseManager;
    _MPCMediaRemotePublisher * _mediaRemotePublisher;
    bool  _pictureInPictureSupported;
    NSString * _playerID;
    _MPCReportingController * _reportingController;
    bool  _scheduledPlaybackStatePreservation;
    bool  _stateRestorationSupported;
    bool  _systemMusicApplication;
    bool  _videoSupported;
}

@property (nonatomic, copy) NSString *audioSessionCategory;
@property (nonatomic) <MPCPlaybackEngineDelegate> *delegate;
@property (nonatomic, readonly) MPProtocolProxy<MPCPlaybackEngineEventObserving> *eventObserver;
@property (nonatomic, retain) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, readonly) _MPCAVController *implementation;
@property (nonatomic, readonly) _MPCLeaseManager *leaseManager;
@property (nonatomic, readonly) _MPCMediaRemotePublisher *mediaRemotePublisher;
@property (getter=isPictureInPictureSupported, nonatomic) bool pictureInPictureSupported;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) _MPCReportingController *reportingController;
@property (getter=hasScheduledPlaybackStatePreservation, nonatomic) bool scheduledPlaybackStatePreservation;
@property (getter=isStateRestorationSupported, nonatomic) bool stateRestorationSupported;
@property (getter=isSystemMusicApplication, nonatomic) bool systemMusicApplication;
@property (getter=isVideoSupported, nonatomic) bool videoSupported;
@property (nonatomic, readonly) UIView *videoView;

+ (void)preheatPlayback;

- (void).cxx_destruct;
- (void)_initializePlaybackStack;
- (void)_preservePlaybackStateImmediately;
- (void)_restorePlaybackStateWithCompletion:(id /* block */)arg1;
- (void)addEngineObserver:(id)arg1;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (id)audioSessionCategory;
- (void)becomeActive;
- (id)delegate;
- (id)eventObserver;
- (id)fallbackPlaybackIntent;
- (bool)hasScheduledPlaybackStatePreservation;
- (id)implementation;
- (id)initWithPlayerID:(id)arg1;
- (bool)isPictureInPictureSupported;
- (bool)isStateRestorationSupported;
- (bool)isSystemMusicApplication;
- (bool)isVideoSupported;
- (id)leaseManager;
- (id)mediaRemotePublisher;
- (id)playerID;
- (id)playerPath;
- (void)removeEngineObserver:(id)arg1;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2;
- (id)reportingController;
- (void)restoreStateWithCompletion:(id /* block */)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)setAudioSessionCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFallbackPlaybackIntent:(id)arg1;
- (void)setPictureInPictureSupported:(bool)arg1;
- (void)setScheduledPlaybackStatePreservation:(bool)arg1;
- (void)setStateRestorationSupported:(bool)arg1;
- (void)setSystemMusicApplication:(bool)arg1;
- (void)setVideoSupported:(bool)arg1;
- (void)start;
- (id)videoView;

@end
