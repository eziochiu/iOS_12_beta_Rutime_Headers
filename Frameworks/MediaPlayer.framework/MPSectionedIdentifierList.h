/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSectionedIdentifierList : NSObject {
    bool  _automaticallyReversesNonDestructiveDataSourceEdits;
    <MPSectionedIdentifierListDelegate> * _delegate;
    MPSectionedIdentifierListEntry * _endEntry;
    NSString * _identifier;
    long long  _itemCount;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _sectionHeadEntryMap;
    NSMutableArray * _startEntries;
}

@property (nonatomic) bool automaticallyReversesNonDestructiveDataSourceEdits;
@property (nonatomic) <MPSectionedIdentifierListDelegate> *delegate;
@property (nonatomic, readonly) MPSectionedIdentifierListEntry *endEntry;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSMutableDictionary *sectionHeadEntryMap;
@property (nonatomic, readonly) NSMutableArray *startEntries;

- (void).cxx_destruct;
- (void)_addBranchToEntry:(id)arg1 entries:(id)arg2;
- (id)_dataSourceInsertItems:(id)arg1 fromSection:(id)arg2 afterEntry:(id)arg3;
- (id)_dataSourceMoveItem:(id)arg1 inSection:(id)arg2 afterEntry:(id)arg3;
- (id)_debugDescriptionWithEnumerator:(id)arg1;
- (void)_enqueueDataSourceWorkIfNeeded:(id /* block */)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2;
- (void)_insertDataSource:(id)arg1 forSection:(id)arg2 afterEntry:(id)arg3;
- (id)_itemEntry:(id)arg1 sectionIdentifier:(id)arg2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2;
- (bool)automaticallyReversesNonDestructiveDataSourceEdits;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItem:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceMoveItemToHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItemToTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionStartingAtItem:(id)arg1 inSection:(id)arg2;
- (id)delegate;
- (id)endEntry;
- (id)enumeratorWithOptions:(unsigned long long)arg1;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (id)identifier;
- (id)init;
- (id)initWithOperationQueue:(id)arg1;
- (long long)itemCount;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;
- (void)moveItemToEnd:(id)arg1 fromSection:(id)arg2;
- (void)moveItemToStart:(id)arg1 fromSection:(id)arg2;
- (id)operationQueue;
- (void)removeItem:(id)arg1 fromSection:(id)arg2;
- (id)sectionHeadEntryMap;
- (void)setAutomaticallyReversesNonDestructiveDataSourceEdits:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)startEntries;

@end
