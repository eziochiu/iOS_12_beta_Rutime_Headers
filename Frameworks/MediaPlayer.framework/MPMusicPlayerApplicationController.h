/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {
    long long  _notificationsCount;
    MPCRemotePlaybackEngine * _playbackEngine;
    MPCPlayerPath * _playerPath;
}

@property (nonatomic, retain) MPCRemotePlaybackEngine *playbackEngine;
@property (nonatomic, retain) MPCPlayerPath *playerPath;

+ (bool)_isPlayerInstalled;

- (void).cxx_destruct;
- (id)_init;
- (void)_playbackEngineDidDisconnect:(id)arg1;
- (void)_playerPathDidChange:(id)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)performQueueTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)playbackEngine;
- (id)playerPath;
- (void)prepareToPlay;
- (void)setPlaybackEngine:(id)arg1;
- (void)setPlayerPath:(id)arg1;

@end
