/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaSyncInfoUpdater : NSObject <ATAssetLinkControllerObserver> {
    ATAssetLinkController * _assetLinkController;
    NSObject<OS_dispatch_source> * _currentSyncInfoSynchronizeTimer;
    bool  _observing;
    NSOperationQueue * _queue;
    NSMutableDictionary * _syncInfo;
    NSMutableOrderedSet * _targetsNeedingSyncInfoSynchronize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMediaSyncInfoUpdater;

- (void).cxx_destruct;
- (void)_applyUpdatesFromAsset:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg1;
- (void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg1;
- (void)_handleMusicRecommendationsDidUpdateNotification:(id)arg1;
- (void)_setNeedsMediaSyncInfoUpdate;
- (void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
- (void)beginUpdatingSyncInfo;
- (void)endUpdatingSyncInfo;
- (id)init;

@end
