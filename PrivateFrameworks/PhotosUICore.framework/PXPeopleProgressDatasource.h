/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleProgressDatasource : NSObject <PXPeopleProgressDataSource, PXPhotoLibraryUIChangeObserver> {
    unsigned long long  _cachedUnlockValue;
    bool  _countCacheValid;
    bool  _faceProcessingComplete;
    PHFetchResult * _homeResult;
    unsigned long long  _pendingCount;
    unsigned long long  _processedCount;
    NSObject<OS_dispatch_queue> * _scanningProgressQueue;
    unsigned long long  _totalCount;
    NSObject<OS_dispatch_queue> * _userInteractiveQueue;
    PHFetchResult * _verifyResult;
}

@property unsigned long long cachedUnlockValue;
@property (getter=isCountCacheValid) bool countCacheValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceProcessingComplete, nonatomic) bool faceProcessingComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *homeResult;
@property (nonatomic) unsigned long long pendingCount;
@property (nonatomic) unsigned long long processedCount;
@property (readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long totalCount;
@property (readonly) NSObject<OS_dispatch_queue> *userInteractiveQueue;
@property (nonatomic, retain) PHFetchResult *verifyResult;

- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (double)_progressFromWorkerDictionary:(id)arg1;
- (void)asyncPeopleScanningProgress:(id /* block */)arg1;
- (unsigned long long)cachedUnlockValue;
- (void)dealloc;
- (unsigned long long)homeMembersCount;
- (id)homeResult;
- (id)init;
- (bool)isCountCacheValid;
- (bool)isFaceProcessingComplete;
- (bool)isPersonPromoterDone;
- (void)loadQueryData;
- (unsigned long long)pendingAssetCount;
- (unsigned long long)pendingCount;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (unsigned long long)processedAssetCount;
- (unsigned long long)processedCount;
- (id)scanningProgressQueue;
- (void)setCachedUnlockValue:(unsigned long long)arg1;
- (void)setCountCacheValid:(bool)arg1;
- (void)setFaceProcessingComplete:(bool)arg1;
- (void)setHomeResult:(id)arg1;
- (void)setPendingCount:(unsigned long long)arg1;
- (void)setProcessedCount:(unsigned long long)arg1;
- (void)setTotalCount:(unsigned long long)arg1;
- (void)setVerifyResult:(id)arg1;
- (void)syncPeopleScanningProgress:(id /* block */)arg1;
- (unsigned long long)totalAssetCount;
- (unsigned long long)totalCount;
- (void)updateProgressIfNeededWithWorkBlock:(id /* block */)arg1;
- (id)userInteractiveQueue;
- (id)verifyResult;

@end