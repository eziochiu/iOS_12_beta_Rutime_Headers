/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    Class  _cellClass;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cellContentInset;
    SKUIViewElementLayoutContext * _cellLayoutContext;
    double  _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> * _lastCell;
    bool  _rendersWithPerspective;
    NSString * _reuseIdentifier;
    double  _sectionBottomInset;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultVerticalInset;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadViewElementProperties;
- (void)_requestCellLayout;
- (bool)_showsImageReflection;
- (bool)_stretchesToFitCollectionViewBounds;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (long long)applyUpdateType:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (long long)defaultItemPinningStyle;
- (double)defaultVerticalInset;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
