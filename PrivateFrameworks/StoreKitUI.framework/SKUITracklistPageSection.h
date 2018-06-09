/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext * _cellLayoutContext;
    SKUITracklistColumnData * _columnData;
    <SKUIEntityProviding> * _entityProvider;
    long long  _lastNeedsMoreCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUITracklistPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_columnData;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)arg1;
- (bool)_isDynamicTracklist;
- (void)_reloadEntityProvider;
- (id)_representativeStringForViewElement:(id)arg1;
- (void)_requestCellLayoutWithColumnData:(id)arg1;
- (id)_viewElementForIndex:(long long)arg1;
- (double)_widthForButtonElements:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x1; double x2; })arg1 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)dealloc;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (id)firstAppearanceIndexPath;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)relevantEntityProviders;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (bool)requestLayoutWithReloadReason:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
