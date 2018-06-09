/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATCollectionController : NSObject {
    NSArray * _arrangedObjects;
    bool  _automaticallyRearrangesObjects;
    <CATCollectionControllerDelegate> * _delegate;
    NSPredicate * _filterPredicate;
    NSIndexSet * _selectionIndexes;
    NSArray * _sortDescriptors;
    NSMutableIndexSet * mChangingSelection;
    NSMutableSet * mContent;
    bool  mDelegateKnowsContentIsChanging;
    NSString * mKeyPath;
    NSSet * mKeysAffectingArrangement;
    NSMutableSet * mObjectsToRearrange;
    id  mOriginalObjects;
    NSMutableArray * mPendingArrangedObjects;
    NSMutableArray * mPendingDeletedObjects;
    NSMutableArray * mPendingInsertedObjects;
    NSTimer * mRearrangeTimer;
    id  mTarget;
    NSValueTransformer * mTransformer;
}

@property (retain) NSArray *arrangedObjects;
@property bool automaticallyRearrangesObjects;
@property (nonatomic, readonly) NSSet *content;
@property <CATCollectionControllerDelegate> *delegate;
@property (retain) NSPredicate *filterPredicate;
@property (readonly) NSArray *selectedObjects;
@property (copy) NSIndexSet *selectionIndexes;
@property (copy) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObserversToObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)arrangeObject:(id)arg1;
- (unsigned long long)arrangedIndexOfObject:(id)arg1;
- (id)arrangedObjectAtIndex:(unsigned long long)arg1;
- (id)arrangedObjects;
- (id)arrangedObjectsAtIndexes:(id)arg1;
- (bool)automaticallyRearrangesObjects;
- (void)bindContentToObject:(id)arg1 withKeyPath:(id)arg2;
- (void)bindContentToObject:(id)arg1 withKeyPath:(id)arg2 usingTransformer:(id)arg3;
- (void)changeContent:(id /* block */)arg1;
- (void)changeObject:(id)arg1 atIndex:(unsigned long long)arg2 forChangeType:(unsigned long long)arg3 newIndex:(unsigned long long)arg4;
- (id)content;
- (void)dealloc;
- (id)delegate;
- (id)filterPredicate;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (unsigned long long)newIndexForObject:(id)arg1 inArrangedObjects:(id)arg2;
- (void)notifyArrangedObjectsDidChangeWithPreviousArrangedObjects:(id)arg1;
- (void)notifyArrangedObjectsWillChange;
- (unsigned long long)numberOfArrangedObjects;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)rearrangeObjects;
- (void)rearrangeTimerDidFire:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObserversFromObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)resolveArrangedObjectsAtIndexes:(id)arg1 reply:(id /* block */)arg2;
- (void)scheduleRearrangeTimerIfNeed;
- (id)selectedObjects;
- (id)selectionIndexes;
- (void)setArrangedObjects:(id)arg1;
- (void)setAutomaticallyRearrangesObjects:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setSelectionIndexes:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;
- (void)unbindContent;
- (void)updateKeysAffectingArrangementForceUpdate:(bool)arg1 includeAllContent:(bool)arg2;
- (void)updateObject:(id)arg1;

@end
