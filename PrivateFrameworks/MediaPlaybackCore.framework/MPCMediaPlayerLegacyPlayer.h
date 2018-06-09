/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyPlayer : MPCPlayer <MPNowPlayingPlaybackQueueDataSource, MPRemoteCommandDelegate_Private> {
    bool  _allowsNewPlaybackErrorItem;
    NSMapTable * _avItemToPlayerItemWeakMap;
    MPCMediaPlayerLegacyItemContainer * _currentContainer;
    MPCMediaPlayerLegacyItem * _currentItem;
    MPCPlaybackIntent * _fallbackPlaybackIntent;
    MPAVItem * _firstPlaybackErrorItem;
    bool  _hasReceivedAddPlaybackIntent;
    bool  _hasScheduledPlaybackStatePreservation;
    bool  _iAmTheiPod;
    bool  _isRestoringPlaybackState;
    MPLibraryAddStatusObserver * _libraryAddStatusObserver;
    bool  _mediaRemoteSync;
    MPCMediaPlayerLegacyAVController * _player;
    MPCMediaPlayerLegacyNowPlayingObserver * _playerObserver;
    MPCMediaPlayerLegacyReportingController * _reportingController;
    NSObject<OS_dispatch_queue> * _stateRestorationSerialQueue;
}

@property (nonatomic, readonly) MPAVController *avController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, readonly) unsigned long long hardQueueItemCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iAmTheiPod;
@property (getter=isMediaRemoteSyncing, nonatomic, readonly) bool mediaRemoteSync;
@property (nonatomic) bool pictureInPictureSupported;
@property (nonatomic, retain) MPCMediaPlayerLegacyAVController *player;
@property (nonatomic, retain) MPCMediaPlayerLegacyNowPlayingObserver *playerObserver;
@property (nonatomic, retain) MPCMediaPlayerLegacyReportingController *reportingController;
@property (readonly) Class superclass;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (id)_adjustedPlaybackContextForContext:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_currentItemChangedNotification:(id)arg1;
- (void)_currentItemInvalidedCommandsNotification:(id)arg1;
- (void)_getPlaybackContextForPlaybackQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleCreateRadioStationCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleInsertIntoQueueCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleSetQueueCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_notifySupportedCommandsChanged;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1;
- (void)_playerDidPausePlaybackForLeaseEndNotification:(id)arg1;
- (id)_playerItemForAVItem:(id)arg1;
- (void)_playerPlaybackErrorNotification:(id)arg1;
- (void)_refreshIAmTheiPod;
- (void)_reloadPlayerWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_repeatShuffleTypeChangedNotification:(id)arg1;
- (bool)_shouldVendContentItemForOffset:(long long)arg1;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (void)_updateSupportedCommandsForCommandCenter:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)avController;
- (void)clearPlaybackQueueWithCompletion:(id /* block */)arg1;
- (id)contentItemForOffset:(long long)arg1;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)currentContainer;
- (id)currentItem;
- (void)dealloc;
- (id)fallbackPlaybackIntent;
- (unsigned long long)hardQueueItemCount;
- (bool)iAmTheiPod;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isMediaRemoteSyncing;
- (bool)isRestoringPlaybackState;
- (bool)isSyncingNowPlayingInfo;
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (void)performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)pictureInPictureSupported;
- (id)player;
- (id)playerObserver;
- (void)preservePlaybackStateImmediately;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerWithPlaybackLeaseController:(id)arg1;
- (bool)remoteCommand:(id)arg1 isEnabledForContentItemIdentifier:(id)arg2;
- (bool)remoteCommand:(id)arg1 isSupportedForContentItemIdentifier:(id)arg2;
- (id)reportingController;
- (void)restorePlaybackStateCompletionHandler:(id /* block */)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)setFallbackPlaybackIntent:(id)arg1;
- (void)setIAmTheiPod:(bool)arg1;
- (void)setPictureInPictureSupported:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerObserver:(id)arg1;
- (void)setReportingController:(id)arg1;
- (void)startMediaRemoteSync;
- (void)startPictureInPicture;
- (void)startSyncingNowPlayingInfo;
- (long long)state;
- (void)stopMediaRemoteSync;
- (void)stopSyncingNowPlayingInfo;
- (void)updateSupportedCommandsForCommandCenter:(id)arg1 muxer:(id)arg2 action:(SEL)arg3;
- (id)videoLayer;

@end