/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppStripLayout : UICollectionViewLayout {
    bool  _inLayoutModeTransition;
    unsigned long long  _layoutMode;
    NSArray * _magnifiedAttributes;
    NSArray * _minifiedAttributes;
    bool  _shouldDimPluginCells;
    bool  _shouldShowCellBorders;
    NSArray * _supplementryMagnifiedAttributes;
    NSArray * _supplementryMinifiedAttributes;
}

@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) bool shouldDimPluginCells;
@property (nonatomic) bool shouldShowCellBorders;

+ (double)maxHeight;
+ (double)minHeight;

- (void).cxx_destruct;
- (id)_attributesForLayoutMode:(unsigned long long)arg1;
- (id)_currentAttributes;
- (id)_currentSupplementryAttributes;
- (long long)_favoritesCount;
- (id)_generateAttributesForSpec:(struct _Spec { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; long long x5; })arg1;
- (id)_generateSupplementryAttributesForSpec:(struct _Spec { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; long long x5; })arg1 minified:(bool)arg2;
- (long long)_itemCount;
- (long long)_recentsCount;
- (struct _Spec { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; long long x5; })_specForLayoutMode:(unsigned long long)arg1;
- (id)_supplementryAttributesForLayoutMode:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })collectionViewContentSizeForLayoutMode:(unsigned long long)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finishLayoutModeTransition;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateCachedLayout;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)layoutMode;
- (void)prepareForLayoutModeTransition;
- (void)prepareLayout;
- (void)setLayoutMode:(unsigned long long)arg1;
- (void)setShouldDimPluginCells:(bool)arg1;
- (void)setShouldShowCellBorders:(bool)arg1;
- (bool)shouldDimPluginCells;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldShowCellBorders;

@end
