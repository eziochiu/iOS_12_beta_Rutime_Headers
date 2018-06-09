/* made by EzioChiu.
 */

@protocol GKCollectionViewDataSourceDelegate <NSObject>

@optional

- (void)dataSource:(GKCollectionViewDataSource *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didInsertSections:(NSIndexSet *)arg2;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didRefreshItemsAtIndexPaths:(NSArray *)arg2;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didRefreshSections:(NSIndexSet *)arg2;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didRemoveItemsAtIndexPaths:(NSArray *)arg2;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didRemoveSections:(NSIndexSet *)arg2;
- (void)dataSource:(GKCollectionViewDataSource *)arg1 didUpdatePlaceholderVisibility:(bool)arg2;
- (void)dataSource:(void *)arg1 performBatchUpdate:(void *)arg2 complete:(void *)arg3; // needs 3 arg types, found 11: GKCollectionViewDataSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)dataSourceDidMoveSectionsWithItems:(GKCollectionViewDataSource *)arg1;
- (void)dataSourceDidReloadData:(GKCollectionViewDataSource *)arg1;

@end
