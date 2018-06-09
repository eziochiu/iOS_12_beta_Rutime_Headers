/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListViewController : _TVMLCollectionViewController <TVAppTemplateImpressionable, UICollectionViewDelegateFlowLayout, _TVListViewCellDelegate> {
    bool  _alwaysSoftFocusEnabled;
    double  _cachedCellWidth;
    NSMutableArray * _cachedListChildViewControllers;
    NSDictionary * _cachedListItemLockupHeightsBySection;
    bool  _configureForStackTemplate;
    <_TVListViewControllerDelegate> * _delegate;
    bool  _indexDisplayEnabled;
    NSIndexPath * _lastPreviewedIndexPath;
    NSIndexPath * _pendingPreviewIndexPath;
    UIViewController * _previewController;
    IKViewElement * _previewElement;
    bool  _previewUpdated;
    IKViewElement * _relatedContentElement;
    bool  _relatedContentElementValid;
    NSIndexPath * _secondCellIndexPath;
    bool  _secondIndexPathFocused;
}

@property (getter=isAlwaysSoftFocusEnabled, nonatomic) bool alwaysSoftFocusEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIndexDisplayEnabled, nonatomic) bool indexDisplayEnabled;
@property (readonly) Class superclass;

+ (id)_shadowCollectionElementForCollectionElement:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedViewControllerForElement:(id)arg1;
- (void)_delayedUpdatePreview;
- (struct CGSize { double x1; double x2; })_expectedCellSizeForElement:(id)arg1 inSectionIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })_expectedHeaderCellSizeForElement:(id)arg1 section:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_marginForHeaderCellForElement:(id)arg1 section:(long long)arg2;
- (id)_previewControllerWithElement:(id)arg1 previewElement:(id*)arg2;
- (id)_relatedContentElementForIndexPath:(id)arg1;
- (bool)_relatedElementIsGridAtIndexPath:(id)arg1;
- (void)_updateCellMetrics;
- (void)_updatedPreviewWithItemAtIndexPath:(id)arg1;
- (id)_viewControllerForElement:(id)arg1;
- (Class)cellClassForElement:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (bool)contentFlowsVertically;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didUpdateCollectionViewByNeedingReload:(bool)arg1 focusUpdate:(bool)arg2;
- (struct CGSize { double x1; double x2; })expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (bool)isAlwaysSoftFocusEnabled;
- (bool)isIndexDisplayEnabled;
- (bool)listCell:(id)arg1 shouldAppearSelectedForPreviouslyFocusedView:(id)arg2;
- (id)makeCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAlwaysSoftFocusEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndexDisplayEnabled:(bool)arg1;
- (void)templateControllerDidUpdateFocusFromView:(id)arg1;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(bool*)arg5 requiresRelayout:(bool*)arg6;
- (void)updateViewLayoutAnimated:(bool)arg1 relayout:(bool)arg2;
- (void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
