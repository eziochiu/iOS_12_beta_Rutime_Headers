/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerController : NSObject <MPMediaPlayback, MPRequestResponseControllerDelegate, MPSystemMusicPlayerController, MPVolumeControllerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasPreparedToPlay;
    bool  _legacyClient;
    MPMediaItem * _pendingNowPlayingItem;
    NSObject<OS_dispatch_queue> * _pendingPrepareCalloutQueue;
    id /* block */  _pendingPrepareCompletion;
    MPMusicPlayerQueueDescriptor * _pendingQueueDescriptor;
    NSObject<OS_dispatch_group> * _pendingRequestGroup;
    MPArtworkCatalog * _previousArtworkCatalog;
    MPMusicPlayerQueueDescriptor * _queueDescriptor;
    MPRequestResponseController * _requestController;
    NSMutableDictionary * _responseValidators;
    MPVolumeController * _volumeController;
}

@property (nonatomic) float currentPlaybackRate;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long indexOfNowPlayingItem;
@property (nonatomic, readonly) bool isPreparedToPlay;
@property (getter=isLegacyClient, nonatomic, readonly) bool legacyClient;
@property (nonatomic, copy) MPMediaItem *nowPlayingItem;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, retain) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (nonatomic) long long repeatMode;
@property (nonatomic, retain) MPRequestResponseController *requestController;
@property (nonatomic) long long shuffleMode;
@property (readonly) Class superclass;
@property (nonatomic) float volume;
@property (nonatomic, retain) MPVolumeController *volumeController;

+ (bool)_isPlayerInstalled;
+ (id)applicationMusicPlayer;
+ (id)applicationQueuePlayer;
+ (id)iPodMusicPlayer;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)supportedProperties;
+ (id)systemMusicPlayer;

- (void).cxx_destruct;
- (id)_init;
- (id)_mediaItemFromSong:(id)arg1;
- (void)_preflightRequestIfNeeded;
- (void)appendQueueDescriptor:(id)arg1;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (unsigned long long)currentChapterIndex;
- (float)currentPlaybackRate;
- (double)currentPlaybackTime;
- (void)didFinishLoadingRequestForController:(id)arg1;
- (void)endGeneratingPlaybackNotifications;
- (void)endSeeking;
- (unsigned long long)indexOfNowPlayingItem;
- (bool)isGeniusAvailable;
- (bool)isGeniusAvailableForSeedItems:(id)arg1;
- (bool)isLegacyClient;
- (bool)isNowPlayingItemFromGeniusMix;
- (bool)isPreparedToPlay;
- (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (void)openToPlayQueueDescriptor:(id)arg1;
- (void)pause;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (void)play;
- (long long)playbackSpeed;
- (long long)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)arg1;
- (void)prependQueueDescriptor:(id)arg1;
- (id)queueAsQuery;
- (id)queueAsRadioStation;
- (id)queueDescriptor;
- (long long)repeatMode;
- (id)requestController;
- (void)setCurrentPlaybackRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (void)setPlaybackSpeed:(long long)arg1;
- (void)setQueueDescriptor:(id)arg1;
- (void)setQueueWithDescriptor:(id)arg1;
- (void)setQueueWithGeniusMixPlaylist:(id)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithRadioStation:(id)arg1;
- (bool)setQueueWithSeedItems:(id)arg1;
- (void)setQueueWithStoreIDs:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setRequestController:(id)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setUserQueueModificationsDisabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setVolumePrivate:(float)arg1;
- (void)shuffle;
- (long long)shuffleMode;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)stop;
- (bool)userQueueModificationsDisabled;
- (float)volume;
- (id)volumeController;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)willBeginLoadingRequestForController:(id)arg1;

@end
