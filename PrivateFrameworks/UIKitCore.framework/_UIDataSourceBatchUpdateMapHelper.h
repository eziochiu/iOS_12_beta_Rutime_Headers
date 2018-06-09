/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {
    NSMutableIndexSet * _deletedSections;
    _UIDataSourceSnapshotter * _finalSnapshot;
    _UIDataSourceSnapshotter * _initialSnapshot;
    NSMutableIndexSet * _insertedSections;
    NSMutableIndexSet * _movedItems;
    NSMutableIndexSet * _movedSections;
    long long * _newGlobalItemMap;
    long long * _newSectionMap;
    long long * _oldGlobalItemMap;
    long long * _oldSectionMap;
    NSArray * _updateItems;
}

- (void).cxx_destruct;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (void)dealloc;
- (id)description;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updates:(id)arg3;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;

@end
