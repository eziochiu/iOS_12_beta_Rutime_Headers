/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUICollectionDOMFeatureTargetting, SKUIGridViewElementPageSectionConfigurationDataSource> {
    IKColor * _backgroundColor;
    SKUIViewElementLayoutContext * _cellLayoutContext;
    double  _cellPaddingInteriorHorizontal;
    double  _cellPaddingLeftEdgeHorizontal;
    double  _cellPaddingRightEdgeHorizontal;
    SKUIGridViewElementPageSectionConfiguration * _configuration;
    bool  _editing;
    NSArray * _indexPathsForBackgroundItems;
    long long  _lastNeedsMoreCount;
    NSArray * _viewElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_containsOnlyShelfElements;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)arg1;
- (void)_reloadViewElementProperties;
- (void)_requestLayoutForCells;
- (void)_resetLayoutProperties;
- (void)_setContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)backgroundColorForSection;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x1; double x2; })arg1 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)dealloc;
- (void)deselectItemsAnimated:(bool)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (id)indexPathsForBackgroundItems;
- (id)initWithPageComponent:(id)arg1;
- (bool)isEditing;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (bool)requestLayoutWithReloadReason:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
