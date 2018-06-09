/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPShuffleableSectionedIdentifierList : MPSectionedIdentifierList {
    NSString * _shuffleStartingItemIdentifier;
    NSString * _shuffleStartingSectionIdentifier;
    long long  _shuffleType;
    _MPSSILImplementation * _shuffledList;
}

@property (nonatomic, copy) NSString *shuffleStartingItemIdentifier;
@property (nonatomic, copy) NSString *shuffleStartingSectionIdentifier;
@property (nonatomic) long long shuffleType;
@property (nonatomic, retain) _MPSSILImplementation *shuffledList;

- (void).cxx_destruct;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (long long)itemCount;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;
- (void)moveItemToEnd:(id)arg1 fromSection:(id)arg2;
- (void)moveItemToStart:(id)arg1 fromSection:(id)arg2;
- (void)removeItem:(id)arg1 fromSection:(id)arg2;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (void)setShuffleStartingItemIdentifier:(id)arg1;
- (void)setShuffleStartingSectionIdentifier:(id)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3;
- (void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3 randomSource:(id)arg4;
- (void)setShuffledList:(id)arg1;
- (id)shuffleStartingItemIdentifier;
- (id)shuffleStartingSectionIdentifier;
- (long long)shuffleType;
- (id)shuffledList;

@end
