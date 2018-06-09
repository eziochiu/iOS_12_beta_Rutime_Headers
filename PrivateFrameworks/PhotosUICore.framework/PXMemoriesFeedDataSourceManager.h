/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver> {
    unsigned long long  __firstUngroupedMemoryIndex;
    bool  __generatingAdditionalEntries;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    unsigned long long  _workTag;
}

@property (setter=_setFirstUngroupedMemoryIndex:, nonatomic) unsigned long long _firstUngroupedMemoryIndex;
@property (getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:, nonatomic) bool _generatingAdditionalEntries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_firstUngroupedMemoryIndex;
- (void)_generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(bool)arg3;
- (void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg1 changeDetails:(id)arg2 firstUngroupedMemoryIndex:(unsigned long long)arg3;
- (unsigned long long)_indexOfEntry:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)_indexOfEntryForMemory:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (bool)_isGeneratingAdditionalEntries;
- (void)_setFirstUngroupedMemoryIndex:(unsigned long long)arg1;
- (void)_setGeneratingAdditionalEntries:(bool)arg1;
- (void)generateAdditionalEntriesIfPossible;
- (void)generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(bool)arg3;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)objectReferenceForMemory:(id)arg1;
- (void)reloadMemories:(bool)arg1;
- (void)startGeneratingMemories;

@end
