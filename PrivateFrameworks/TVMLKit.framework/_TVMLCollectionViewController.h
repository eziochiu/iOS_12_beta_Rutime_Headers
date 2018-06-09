/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMLCollectionViewController : UIViewController <TVAppTemplateImpressionable, UICollectionViewDataSource, _TVCollectionViewDelegate, _TVConfirmationPreviewInteractionControllerDelegate, _TVSubviewPreloading> {
    struct TVCellMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSize; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellPadding; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellInset; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellInsetAlt; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellMargin; 
    }  _cellMetrics;
    IKCollectionElement * _collectionElement;
    UICollectionView * _collectionView;
    bool  _didAppear;
    bool  _didUpdateFocus;
    IKViewElement * _headerElement;
    UIViewController * _headerViewController;
    bool  _ignoreNextSelect;
    double  _impressionThreshold;
    NSDictionary * _indexPathsByIndexTitle;
    NSIndexPath * _lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator * _needsMoreContentEvaluator;
    _TVConfirmationPreviewInteractionController * _previewInteractionController;
    _TVShadowViewElement * _shadowViewElement;
    NSArray * _sortedIndexTitles;
}

@property (nonatomic, readonly) struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; } cellMetrics;
@property (nonatomic, readonly, retain) IKCollectionElement *collectionElement;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, readonly, retain) _TVCollectionWrappingView *collectionWrappingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) IKViewElement *headerElement;
@property (nonatomic, retain) UIViewController *headerViewController;
@property (nonatomic, copy) NSDictionary *indexPathsByIndexTitle;
@property (nonatomic, copy) NSIndexPath *lastFocusedIndexPath;
@property (nonatomic, retain) _TVShadowViewElement *shadowViewElement;
@property (nonatomic, copy) NSArray *sortedIndexTitles;
@property (readonly) Class superclass;

+ (id)_shadowViewElementForCollectionElement:(id)arg1;
+ (id)headerElementFromCollectionElement:(id)arg1;

- (void).cxx_destruct;
- (void)_ascertainLastFocusedIndexPathInView;
- (void)_cancelImpressionsUpdate;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_confirmationPreviewInteractionControllerShouldBegin;
- (void)_doUpdateViewLayoutAnimated:(bool)arg1 relayout:(bool)arg2;
- (void)_recordImpressionsForVisibleView;
- (void)_registerCellClassesInCollectionView:(id)arg1;
- (void)_updateHeaderView;
- (void)_updateImpressions;
- (Class)cellClassForElement:(id)arg1;
- (struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })cellMetrics;
- (id)collectionElement;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionWrappingView;
- (void)dealloc;
- (void)didUpdateCollectionViewByNeedingReload:(bool)arg1 focusUpdate:(bool)arg2;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (id)headerElement;
- (id)headerViewController;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)indexPathsByIndexTitle;
- (id)indexTitlesForCollectionView:(id)arg1;
- (id)lastFocusedIndexPath;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)preloadSubviewsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setIndexPathsByIndexTitle:(id)arg1;
- (void)setLastFocusedIndexPath:(id)arg1;
- (void)setShadowViewElement:(id)arg1;
- (void)setSortedIndexTitles:(id)arg1;
- (id)shadowViewElement;
- (bool)shouldHeaderFloatByDefault;
- (id)sortedIndexTitles;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tv_updateViewLayout;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(bool*)arg5 requiresRelayout:(bool*)arg6;
- (void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
