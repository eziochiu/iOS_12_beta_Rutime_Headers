/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyAVController : MPAVController {
    MPPlaybackContext * _fallbackPlaybackContext;
    MPCMediaPlayerLegacyPlayer * _mpcPlayer;
    NSUUID * _playlistManagerUUID;
}

@property (nonatomic, retain) MPPlaybackContext *fallbackPlaybackContext;
@property (nonatomic) MPCMediaPlayerLegacyPlayer *mpcPlayer;
@property (nonatomic, retain) NSUUID *playlistManagerUUID;

+ (Class)playlistManagerClass;

- (void).cxx_destruct;
- (void)_connectAVPlayer;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_queueModificationsDidChangeNotification;
- (void)_registerForPlaylistManager:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)dealloc;
- (id)fallbackPlaybackContext;
- (id)init;
- (bool)jumpToItemWithContentID:(id)arg1;
- (id)mpcPlayer;
- (void)playWithOptions:(unsigned long long)arg1;
- (id)playlistManagerUUID;
- (void)setFallbackPlaybackContext:(id)arg1;
- (void)setMpcPlayer:(id)arg1;
- (void)setPlaylistManagerUUID:(id)arg1;

@end
