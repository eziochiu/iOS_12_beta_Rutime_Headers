/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableOrderedSet * __remainingMemoriesToFetch;
    PXMemoriesDataSourceState * __state;
    bool  _hasCreatedInitialDataSource;
    bool  _isWorking;
    bool  _loadFromEnd;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (setter=_setRemainingMemoriesToFetch:, retain) NSMutableOrderedSet *_remainingMemoriesToFetch;
@property (setter=_setState:, nonatomic, retain) PXMemoriesDataSourceState *_state;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadFromEnd;
@property (nonatomic, readonly) PHFetchResult *memories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createMemoriesDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (id)_remainingMemoriesToFetch;
- (void)_setRemainingMemoriesToFetch:(id)arg1;
- (void)_setState:(id)arg1;
- (id)_state;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(bool)arg1;
- (id)createInitialDataSource;
- (id)initWithMemoriesFetchResult:(id)arg1;
- (bool)loadFromEnd;
- (id)memories;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setLoadFromEnd:(bool)arg1;
- (void)startLoadingIfNeeded;

@end
