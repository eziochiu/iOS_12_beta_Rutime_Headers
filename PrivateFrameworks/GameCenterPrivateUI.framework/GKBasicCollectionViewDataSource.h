/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying> {
    NSPredicate * _filterPredicate;
    NSArray * _items;
    unsigned long long  _pageSize;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _preloadedRange;
    SEL  _showAllAction;
}

@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) unsigned long long pageSize;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } preloadedRange;
@property (nonatomic) SEL showAllAction;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfItems;
- (void)dealloc;
- (id)filterPredicate;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (id)itemsAtIndexes:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)pageSize;
- (void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 loadBlock:(id /* block */)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preloadedRange;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2;
- (id)sectionTitle;
- (void)setFilterPredicate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2 complete:(id /* block */)arg3;
- (void)setItemsNoNotify:(id)arg1;
- (void)setPageSize:(unsigned long long)arg1;
- (void)setPreloadedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShowAllAction:(SEL)arg1;
- (SEL)showAllAction;

@end
