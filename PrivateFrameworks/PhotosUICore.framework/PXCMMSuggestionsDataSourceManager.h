/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableOrderedSet * __remainingAssetCollectionsObjectIDsToFetch;
    PXCMMSuggestionsDataSourceState * __state;
    PXCMMSuggestionsDataSourceContext * _context;
    bool  _hasCreatedInitialDataSource;
    bool  _isLoading;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch;
@property (nonatomic, retain) PXCMMSuggestionsDataSourceState *_state;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceContext *context;
@property (nonatomic, readonly) PXCMMSuggestionsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_fetchResultForEmptyDataSourceManager;
+ (id)_fetchResultForMockRecentLargeMomentsDataSourceManager;
+ (id)_fetchResultForTypeGraphWithContext:(id)arg1;
+ (id)dataSourceManager;
+ (id)dataSourceManagerWithParticipants:(id)arg1;
+ (id)dataSourceManagerWithParticipants:(id)arg1 fetchLimit:(long long)arg2 message:(id)arg3 date:(id)arg4 matchingStrategy:(unsigned long long)arg5;
+ (id)emptyDataSourceManager;
+ (id)mockDataSourceManagerFromRecentLargeMoments:(unsigned long long)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (id)_remainingAssetCollectionsObjectIDsToFetch;
- (void)_startLoadingIfNeeded;
- (id)_state;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg1;
- (id)assetCollections;
- (id)context;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;
- (id)initWithContext:(id)arg1 assetCollectionsFetchResult:(id)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)set_remainingAssetCollectionsObjectIDsToFetch:(id)arg1;
- (void)set_state:(id)arg1;

@end
