/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPMediaPlaybackManager : NSObject {
    NSHashTable * _mediaPlayers;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)arg1;
- (bool)_sharedSessionHasPlayingAudio;
- (void)_updateAudioSessionCategory;
- (void)addMediaPlayer:(id)arg1;
- (id)audioSession;
- (id)init;
- (void)mediaPlayer:(id)arg1 didChangeMutedState:(bool)arg2;
- (void)mediaPlayer:(id)arg1 didChangePlayingState:(bool)arg2;
- (bool)releaseDecodingResourcesForInactivePlayers;
- (void)removeMediaPlayer:(id)arg1;
- (void)volumeChanged:(id)arg1;

@end
