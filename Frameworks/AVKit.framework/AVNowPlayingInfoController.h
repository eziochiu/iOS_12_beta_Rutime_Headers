/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVNowPlayingInfoController : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    void * _commandHandlerIdentifier;
    bool  _enabled;
    AVObservationController * _keyValueObservationController;
    bool  _nowPlayingInfoNeedsUpdate;
    AVPlayerController * _playerController;
    id  _playerControllerCurrentTimeJumpedObserver;
    bool  _requiresLinearPlayback;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool requiresLinearPlayback;

+ (void)sharedNowPlayingInfoControllerWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1;
- (id)_makeNowPlayingInfo;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEnabled;
- (id)playerController;
- (bool)requiresLinearPlayback;
- (void)setEnabled:(bool)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)startNowPlayingUpdatesForPlayerController:(id)arg1;
- (void)stopNowPlayingUpdatesForPlayerController:(id)arg1;

@end
