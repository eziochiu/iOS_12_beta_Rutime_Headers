/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPSSILImplementation : MPSectionedIdentifierList {
    NSMutableArray * _candidateItems;
    MPRandomDistribution * _randomDistribution;
}

@property (nonatomic, retain) NSMutableArray *candidateItems;
@property (nonatomic, readonly) MPRandomDistribution *randomDistribution;

- (void).cxx_destruct;
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2;
- (void)_appendShuffledItems:(id)arg1;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 verifyInclusion:(bool)arg3;
- (void)_dequeueCandidatesWithQuota:(long long)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2;
- (id)candidateItems;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (id)initWithSectionedIdentifierList:(id)arg1 operationQueue:(id)arg2 randomSource:(id)arg3 startingItemEntry:(id)arg4;
- (long long)itemCount;
- (id)randomDistribution;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (void)setCandidateItems:(id)arg1;

@end
