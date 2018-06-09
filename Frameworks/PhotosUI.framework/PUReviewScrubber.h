/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUReviewScrubber : UIToolbar <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    UIImageView * __arrowImageView;
    _UIBackdropView * __backdropView;
    UICollectionView * __collectionView;
    PUHorizontalCollectionViewLayout * __collectionViewLayout;
    bool  __ignoreScrollViewDidScrollUpdate;
    UIImpactFeedbackGenerator * __impactFeedbackBehavior;
    NSIndexPath * __indexPathForPreviousFeedbackQuery;
    bool  __performingInteractiveUpdate;
    UIImageView * __shadowView;
    UITapGestureRecognizer * __tapGestureRecognizer;
    NSString * _cellReuseIdentifier;
    <PUReviewScrubberDataSource> * _dataSource;
    Class  _scrubberCellClass;
    <PUReviewScrubberDelegate> * _scrubberDelegate;
    NSIndexPath * _selectedIndexPath;
}

@property (nonatomic, readonly) UIImageView *_arrowImageView;
@property (nonatomic, readonly) _UIBackdropView *_backdropView;
@property (nonatomic, readonly) UICollectionView *_collectionView;
@property (nonatomic, readonly) PUHorizontalCollectionViewLayout *_collectionViewLayout;
@property (nonatomic, readonly) bool _ignoreScrollViewDidScrollUpdate;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *_impactFeedbackBehavior;
@property (setter=_setIndexPathForPreviousFeedbackQuery:, nonatomic, retain) NSIndexPath *_indexPathForPreviousFeedbackQuery;
@property (nonatomic, readonly) bool _performingInteractiveUpdate;
@property (nonatomic, readonly) UIImageView *_shadowView;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, retain) NSString *cellReuseIdentifier;
@property (nonatomic) <PUReviewScrubberDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class scrubberCellClass;
@property (nonatomic) <PUReviewScrubberDelegate> *scrubberDelegate;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_arrowImageView;
- (id)_backdropView;
- (void)_beginFeedbackInteraction;
- (id)_collectionView;
- (id)_collectionViewLayout;
- (void)_commonPUReviewScrubberInitialization;
- (void)_endFeedbackInteraction;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapOnReviewScrubber:(id)arg1;
- (bool)_ignoreScrollViewDidScrollUpdate;
- (id)_impactFeedbackBehavior;
- (id)_indexPathForPreviousFeedbackQuery;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { double x1; double x2; })arg2 excludingIndexPath:(id)arg3;
- (void)_notifyDelegateOfScrub;
- (void)_notifyDelegateOfSelection;
- (bool)_performingInteractiveUpdate;
- (void)_playFeedbackIfNeeded;
- (void)_setIndexPathForPreviousFeedbackQuery:(id)arg1;
- (id)_shadowView;
- (id)_tapGestureRecognizer;
- (void)_updateContentOffsetForSelectedIndexPathAnimated:(bool)arg1;
- (void)_updateToSelectedIndexPath:(id)arg1;
- (void)beginInteractiveUpdate;
- (id)cellReuseIdentifier;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (struct CGPoint { double x1; double x2; })contentOffsetForItemAtIndex:(long long)arg1 ofScrollView:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (void)finishInteractiveUpdate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)indexPathUnderTickMarkInCollectionView:(id)arg1 atContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMinibar;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)reloadIndexPath:(id)arg1 animated:(bool)arg2;
- (void)reloadSelectedIndexPathAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (Class)scrubberCellClass;
- (id)scrubberDelegate;
- (id)selectedIndexPath;
- (void)setCellReuseIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setScrubberCellClass:(Class)arg1;
- (void)setScrubberDelegate:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)toggleIndexPath:(id)arg1 animated:(bool)arg2;
- (void)toggleSelectedIndexPathAnimated:(bool)arg1;
- (void)updateWithAbsoluteProgress:(double)arg1;

@end
