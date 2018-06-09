/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoStreamsHelper : NSObject {
    bool  _appHasPolledOnceThisForegroundSession;
}

+ (bool)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;
+ (id)iCloudServiceAccount;
+ (bool)photoStreamsEnabled;
+ (id)publishBreadcrumbsPath;
+ (id)sharedPhotoStreamsHelper;
+ (bool)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;

- (void)_accountStoreDidChange:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_clearPhotoStreamAccountSettings;
- (long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;
- (void)clearCachedAccountState;
- (void)dealloc;
- (bool)dequeueAssetsForPSPublishing:(id)arg1;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2;
- (bool)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(id /* block */)arg2;
- (void)fetchMPSStateWithCompletion:(id /* block */)arg1;
- (long long)friendsLimit;
- (void)handleMPSStateIfNecessary;
- (long long)imageLimitForFriendStream;
- (long long)imageLimitForOwnStream;
- (id)imageLimitsByAssetType;
- (id)init;
- (void)initiateDeletionOfOriginalAssets:(id)arg1;
- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;
- (bool)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;
- (id)lastPhotoStreamUpdateDate;
- (long long)maxPixelSizeForDerivative;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(bool)arg3;
- (id)pause_mstreamd;
- (id)photoStreamsPublishStreamID;
- (void)pollForNewSubscriptionContent;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (id)psHashAsString:(id)arg1;
- (id)psHashForData:(id)arg1;
- (bool)removeBreadcrumbsForHashString:(id)arg1;
- (void)resetMstreamdStateForPersonID:(id)arg1;
- (void)resetServerState;
- (void)resume_mstreamd:(id)arg1;
- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;
- (bool)shouldPublishScreenShots;
- (bool)shouldUploadVideos;
- (id)temporaryPathForConvertedAssetWithUUID:(id)arg1;
- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;

@end
