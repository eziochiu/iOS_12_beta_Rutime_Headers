/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    unsigned long long  __firstUngroupedMemoryIndex;
    bool  __generatingAdditionalEntries;
    PHFetchResult * _memoriesFetchResult;
    PHPhotoLibrary * _photoLibrary;
}

@property (setter=_setFirstUngroupedMemoryIndex:, nonatomic) unsigned long long _firstUngroupedMemoryIndex;
@property (getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:, nonatomic) bool _generatingAdditionalEntries;
@property (nonatomic, readonly) PXMemoriesFeedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *memoriesFetchResult;
@property (readonly) Class superclass;

+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)arg1 changeDetails:(id)arg2 changeInstance:(id)arg3;
+ (id)generateEntriesFromMemories:(id)arg1 startingFromIndex:(unsigned long long)arg2 maximumNumberOfEntries:(unsigned long long)arg3 finalMemoryIndex:(out unsigned long long*)arg4;
+ (bool)shouldGroupTogetherMemoriesWithCreationDate:(id)arg1 andCreationDate:(id)arg2;

- (void).cxx_destruct;
- (void)_clearPendingNotificationForMemory:(id)arg1;
- (unsigned long long)_firstUngroupedMemoryIndex;
- (bool)_isGeneratingAdditionalEntries;
- (void)_setFirstUngroupedMemoryIndex:(unsigned long long)arg1;
- (void)_setGeneratingAdditionalEntries:(bool)arg1;
- (id)createInitialDataSource;
- (id)fetchOptions;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (bool)hasAnyMemories;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)memoriesFetchResult;
- (void)pauseLibraryUpdates;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)reloadMemories:(bool)arg1;
- (void)resetMemoriesFetchResult;
- (void)resumeLibraryUpdates;
- (void)setMemoriesFetchResult:(id)arg1;
- (void)startGeneratingMemories;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;

@end
