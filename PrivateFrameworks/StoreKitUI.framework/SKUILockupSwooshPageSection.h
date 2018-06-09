/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate> {
    SKUILockupSwooshArtworkLoader * _artworkLoader;
    SKUIMissingItemLoader * _missingItemLoader;
    SKUIProductPageOverlayController * _overlayController;
    long long  _overlaySourceIndex;
    SKUILockupSwooshViewController * _swooshViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUISwooshPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2;
- (id)_artworkLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_missingItemLoader;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (void)_showProductPageForItem:(id)arg1 index:(long long)arg2 animated:(bool)arg3;
- (id)_swooshViewController;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfCells;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 videoThumbnailForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)willAppearInContext:(id)arg1;

@end
