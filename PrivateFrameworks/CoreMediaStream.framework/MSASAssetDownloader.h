/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetDownloader : MSASAssetTransferer {
    NSMutableDictionary * _assetToItemInFlightMap;
    NSString * _currentFocusAlbumGUID;
    NSString * _currentFocusAssetCollectionGUID;
    bool  _didEncounterNetworkConditionError;
    NSString * _downloadBatchPerfGUID;
    NSMutableArray * _finishedAssets;
    bool  _isDownloadingThumbnails;
    bool  _isWaitingForFirstDownloadEvent;
    NSMutableArray * _itemsInFlight;
    NSString * _objectGUID;
    int  _state;
}

@property (nonatomic, retain) NSMutableDictionary *assetToItemInFlightMap;
@property (nonatomic, retain) NSString *currentFocusAlbumGUID;
@property (nonatomic, retain) NSString *currentFocusAssetCollectionGUID;
@property (nonatomic) <MSASAssetDownloaderDelegate> *delegate;
@property (nonatomic) bool didEncounterNetworkConditionError;
@property (nonatomic, retain) NSString *downloadBatchPerfGUID;
@property (nonatomic, retain) NSMutableArray *finishedAssets;
@property (nonatomic) bool isDownloadingThumbnails;
@property (nonatomic) bool isWaitingForFirstDownloadEvent;
@property (nonatomic, retain) NSMutableArray *itemsInFlight;
@property (nonatomic, retain) NSString *objectGUID;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 error:(id)arg3;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (id)_orphanedAssetError;
- (id)_pathForPersonID:(id)arg1;
- (void)_workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)_workQueueGoIdle;
- (void)_workQueueStopTrackingItem:(id)arg1;
- (id)assetToItemInFlightMap;
- (id)currentFocusAlbumGUID;
- (id)currentFocusAssetCollectionGUID;
- (bool)didEncounterNetworkConditionError;
- (void)didEnqueueAsset:(id)arg1 forAlbumGUID:(id)arg2;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (id)downloadBatchPerfGUID;
- (id)finishedAssets;
- (bool)isDownloadingThumbnails;
- (bool)isWaitingForFirstDownloadEvent;
- (id)itemsInFlight;
- (id)objectGUID;
- (void)registerAssets:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setAssetToItemInFlightMap:(id)arg1;
- (void)setCurrentFocusAlbumGUID:(id)arg1;
- (void)setCurrentFocusAssetCollectionGUID:(id)arg1;
- (void)setDidEncounterNetworkConditionError:(bool)arg1;
- (void)setDownloadBatchPerfGUID:(id)arg1;
- (void)setFinishedAssets:(id)arg1;
- (void)setIsDownloadingThumbnails:(bool)arg1;
- (void)setIsWaitingForFirstDownloadEvent:(bool)arg1;
- (void)setItemsInFlight:(id)arg1;
- (void)setObjectGUID:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)unregisterAssets:(id)arg1;
- (void)workQueueCancel;
- (void)workQueueDownloadNextBatch;
- (id)workQueueObjectGUID;
- (void)workQueueRegisterAssets:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id /* block */)arg1;
- (void)workQueueStop;
- (void)workQueueUnregisterAssets:(id)arg1;

@end
