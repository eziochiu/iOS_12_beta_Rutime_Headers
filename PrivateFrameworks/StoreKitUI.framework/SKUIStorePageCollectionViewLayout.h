/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageCollectionViewLayout : UICollectionViewFlowLayout <SKUIStorePageCollectionViewLayout> {
    bool  _allowsPinningTransitions;
    NSString * _backdropGroupName;
    UIColor * _collectionViewBackgroundColor;
    struct { 
        unsigned int respondsToIndexPathsForPinningItems : 1; 
        unsigned int respondsToPinningContentInsetForItemAtIndexPath : 1; 
        unsigned int respondsToPinningStyleForItemAtIndexPath : 1; 
        unsigned int respondsToPinningGroupForItemAtIndexPath : 1; 
        unsigned int respondsToPinningTransitionStyleForItemAtIndexPath : 1; 
        unsigned int respondsToWillApplyLayoutAttributes : 1; 
    }  _collectionViewDelegateFlags;
    NSIndexSet * _expandChildPageSectionsIndexSet;
    bool  _hasValidGradientIndexPaths;
    bool  _hasValidIndexPathsForPinningItems;
    bool  _hasValidPinnedBackdropViewStyle;
    bool  _hasValidPinningLayoutInformation;
    long long  _inLayoutAttributesForElementsCount;
    NSMapTable * _indexPathToItemPinningConfiguration;
    NSMapTable * _indexPathToPinningLayoutInformation;
    NSArray * _indexPathsForGradientItems;
    NSArray * _indexPathsForPinningItems;
    double  _overrideContentWidth;
    long long  _pinnedBackdropViewStyle;
    bool  _rendersWithParallax;
    bool  _rendersWithPerspective;
    NSArray * _updateItems;
}

@property (nonatomic) bool allowsPinningTransitions;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSIndexSet *expandChildPageSectionsIndexSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *indexPathsForGradientItems;
@property (nonatomic, readonly) NSArray *indexPathsForPinningItems;
@property (nonatomic) double overrideContentWidth;
@property (nonatomic) bool rendersWithParallax;
@property (nonatomic) bool rendersWithPerspective;
@property (readonly) Class superclass;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)_alginCellsToTop:(id)arg1;
- (bool)_allowsBackdropDecorationForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (void)_appendAdditionalLayoutAttributesForPinningItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toArray:(id)arg2;
- (void)_calculatePinningLayoutInformation;
- (void)_configureCellLayoutAttributes:(id)arg1 forItemWithPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 allowPinning:(bool)arg5 returningIsPinning:(out bool*)arg6;
- (id)_getCollectionViewUpdateItemForItemFromIndex:(long long)arg1 initalLayout:(bool)arg2;
- (id)_indexPathsForBackgroundGradients;
- (id)_indexPathsForPinningItems;
- (void)_invalidatePinningLayoutInformation;
- (id)_itemPinningConfigurationForItemAtIndexPath:(id)arg1;
- (id)_itemPinningLayoutInformationForItemAtIndexPath:(id)arg1;
- (id)_layoutAttributesForGradientDecorationViewAtIndexPath:(id)arg1 currentAttributes:(id)arg2;
- (id)_layoutAttributesForPinnedBackdropDecorationViewAtIndexPath:(id)arg1 pinningConfiguration:(id)arg2 layoutInformation:(id)arg3;
- (long long)_pinnedBackdropViewStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pinningContentInsetForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pinningFrameForStartingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 itemPinningConfiguration:(id)arg2 atIndexPath:(id)arg3;
- (long long)_pinningGroupForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (long long)_pinningStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (long long)_pinningTransitionStyleForItemPinningConfiguration:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetFrameForStartingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 itemPinningConfiguration:(id)arg2 layoutInformation:(id)arg3 atIndexPath:(id)arg4 returningIsPinning:(out bool*)arg5;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)allowsPinningTransitions;
- (id)backdropGroupName;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)expandChildPageSectionsIndexSet;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)indexPathsForGradientItems;
- (id)indexPathsForPinningItems;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (double)overrideContentWidth;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (void)setAllowsPinningTransitions:(bool)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setExpandChildPageSectionsIndexSet:(id)arg1;
- (void)setIndexPathsForGradientItems:(id)arg1;
- (void)setOverrideContentWidth:(double)arg1;
- (void)setRendersWithParallax:(bool)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
