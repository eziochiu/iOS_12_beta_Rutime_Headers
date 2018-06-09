/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    double  _autoScrollInterval;
    NSObject<OS_dispatch_source> * _autoScrollTimer;
    _TVCarouselCollectionView * _collectionView;
    double  _continuousScrollVelocity;
    id /* block */  _continuousScrollingBlock;
    unsigned long long  _currentVirtualIndexForCellDequeue;
    <TVCarouselViewDataSource> * _dataSource;
    <TVCarouselViewDelegate> * _delegate;
    bool  _firstFocusMove;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusDirection;
    NSIndexPath * _focusedIndexPath;
    bool  _hasValidLayout;
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    unsigned long long  _numberOfRealItemsForDataSource;
    double  _originalSelectionDuration;
    double  _originalUnselectionDuration;
    NSArray * _remoteGestures;
    unsigned long long  _scrollMode;
}

@property (nonatomic) double autoScrollInterval;
@property (nonatomic) double continuousScrollVelocity;
@property (copy) id /* block */ continuousScrollingBlock;
@property (nonatomic) <TVCarouselViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVCarouselViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) unsigned long long scrollMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *visibleCells;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (id)_collectionView;
- (double)_contentOffsetXForIndex:(long long)arg1;
- (void)_focusGestureDidBeginNotification:(id)arg1;
- (void)_handleButtonGesture:(id)arg1;
- (void)_handlePlayGesture:(id)arg1;
- (void)_startAutoScrollTimer;
- (void)_startContinuousScroll;
- (void)_stopAutoScrollTimer;
- (void)_stopContinuousScroll;
- (void)_updateAutoScrollTimer;
- (void)_updateCollectionViewLayout;
- (void)_updateCollectionViewLayoutAnimated:(bool)arg1;
- (void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(bool)arg2;
- (void)_updateIdleModeLayoutAttributes;
- (double)autoScrollInterval;
- (id)cellForItemAtIndex:(unsigned long long)arg1;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)continuousScrollVelocity;
- (id /* block */)continuousScrollingBlock;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (unsigned long long)indexForCell:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interitemSpacing;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)preferredFocusedView;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)reloadData;
- (unsigned long long)scrollMode;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAutoScrollInterval:(double)arg1;
- (void)setContinuousScrollVelocity:(double)arg1;
- (void)setContinuousScrollingBlock:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setInteritemSpacing:(double)arg1 animated:(bool)arg2;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScrollMode:(unsigned long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)visibleCells;

@end
