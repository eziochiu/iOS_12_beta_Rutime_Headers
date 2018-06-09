/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    bool  _hasCreatedInitialDataSource;
    bool  _isLoading;
    PHPhotoLibrary * _photoLibrary;
    NSMutableOrderedSet * _remainingMomentShareObjectIDsToFetch;
    PXCMMMomentShareInvitationsDataSourceState * _state;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, readonly) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dataSourceManagerWithPredicate:(id)arg1;
+ (id)dataSourceManager;
+ (id)emptyDataSourceManager;
+ (id)mockIncomingDataSourceManager;
+ (id)mockOutgoingDataSourceManager;

- (void).cxx_destruct;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (id)_initWithFetchResult:(id)arg1;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg1;
- (id)createInitialDataSource;
- (void)dealloc;
- (id)init;
- (id)momentShares;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;

@end
