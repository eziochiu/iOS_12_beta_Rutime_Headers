/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPArtworkCatalog * _currentArtworkCatalog;
    NSData * _currentArtworkData;
    UIImage * _currentArtworkImage;
    bool  _enabled;
    bool  _hasSeenAnyItem;
    NSMutableDictionary * _mediaItemCoalescedUpdateDateAccessedTimers;
    MPAVController * _player;
    bool  _scheduledNowPlayingInfoUpdate;
    NSObject<OS_dispatch_queue> * _statusBarQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) MPAVController *player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_additionalKeysForNowPlayingItem:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_avItemDurationDidChangeNotification:(id)arg1;
- (void)_avItemIsExplicitDidChangeNotification:(id)arg1;
- (void)_avItemLikedStateDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (bool)_hasProperConditionsToLoadArtwork;
- (void)_itemDidChangeNotification:(id)arg1;
- (bool)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_postNowPlayingInfo;
- (void)_postNowPlayingInfoForItem:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (bool)_reloadArtworkIfPossible;
- (void)_repeatTypeDidChangeNotification:(id)arg1;
- (void)_setNeedsNowPlayingInfoUpdate;
- (void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)configureArtworkCatalog:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (bool)isEnabled;
- (id)player;
- (void)setEnabled:(bool)arg1;
- (void)setPlayer:(id)arg1;

@end
