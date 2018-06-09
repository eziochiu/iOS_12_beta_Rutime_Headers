/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICollectionView : UICollectionView {
    bool  _delegateWantsWillLayoutSubviews;
    bool  _externalShowsHorizontalScrollIndicator;
    bool  _externalShowsVerticalScrollIndicator;
    SKUIIndexBarControl * _indexBarControl;
    double  _overrideBoundsWidth;
    UICollectionViewLayout * _pendingCollectionViewLayout;
    UIRefreshControl * _refreshControl;
}

@property (nonatomic, retain) SKUIIndexBarControl *indexBarControl;
@property (nonatomic) double overrideBoundsWidth;
@property (nonatomic, retain) UIRefreshControl *refreshControl;

- (void).cxx_destruct;
- (void)_updateIndexBarControlFrame;
- (void)_updateShowsScrollIndicators;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)collectionViewLayout;
- (id)indexBarControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (double)overrideBoundsWidth;
- (id)refreshControl;
- (void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIndexBarControl:(id)arg1;
- (void)setOverrideBoundsWidth:(double)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;

@end