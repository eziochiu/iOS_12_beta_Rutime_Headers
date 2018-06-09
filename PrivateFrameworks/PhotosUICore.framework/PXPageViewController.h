/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPageViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _knownPageSize;
    NSArray * _pageControllers;
    PXPageViewControllerBackgroundView * _pagingBackgroundView;
    bool  _pagingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *pageControllers;
@property (nonatomic) bool pagingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_ensurePageSize:(struct CGSize { double x1; double x2; }*)arg1;
- (id)_pageControllerAtIndexPath:(id)arg1;
- (void)_updateBackgroundViewForTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updatePages:(id)arg1 withRemovedIndexes:(id)arg2 insertedIndexes:(id)arg3 updatedIndexes:(id)arg4;
- (void)addPageController:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPageControllers:(id)arg1;
- (void)insertPageController:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)pageControllers;
- (bool)pagingEnabled;
- (void)removePageControllerAtIndex:(unsigned long long)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setPagingEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
