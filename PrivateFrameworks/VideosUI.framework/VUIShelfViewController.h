/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIShelfViewController : UIViewController <TVShelfViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    VUIShelfView * _containerView;
    NSIndexPath * _focusedIndexPath;
    long long  _gridStyle;
    UIView * _headerView;
    bool  _shouldUpdateBeforeLayout;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) VUIShelfView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSIndexPath *focusedIndexPath;
@property (nonatomic, readonly) long long gridStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureScrollViewSnaps;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)_snapTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateCollectionViewLayout:(bool)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)containerView;
- (id)focusedIndexPath;
- (long long)gridStyle;
- (id)headerView;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithGridStyle:(long long)arg1;
- (void)loadView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFocusedIndexPath:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
