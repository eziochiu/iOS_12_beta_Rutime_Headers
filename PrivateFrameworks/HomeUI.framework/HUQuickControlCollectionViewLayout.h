/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout {
    NSMutableDictionary * _cachedLayoutAttributesByIndexPath;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    unsigned long long  _gridSectionIndex;
    HUQuickControlCollectionViewLayoutInfo * _layoutInfo;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredLayoutAreaInset;
    NSDictionary * _sizeSpecificSettings;
    unsigned long long  _supplementarySectionIndex;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedLayoutAttributesByIndexPath;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) unsigned long long gridSectionIndex;
@property (nonatomic, retain) HUQuickControlCollectionViewLayoutInfo *layoutInfo;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredLayoutAreaInset;
@property (nonatomic, readonly) NSDictionary *sizeSpecificSettings;
@property (nonatomic) unsigned long long supplementarySectionIndex;

+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; unsigned long long x5; })_gridConfigurationForNumberOfItems:(unsigned long long)arg1 maximumNumberOfRows:(unsigned long long)arg2;
+ (unsigned long long)_itemSizeForNumberOfItems:(unsigned long long)arg1;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)_computeGridLayoutAttributesForLayoutInfo:(id)arg1;
- (void)_computeLayoutInfo;
- (id)_computeSizingLayoutInfoForMaximumNumnberOfRows:(unsigned long long)arg1 minimumItemScaleFactor:(double)arg2;
- (void)_computeSupplementaryLayoutAttributesForLayoutInfo:(id)arg1;
- (id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (bool)_showSupplementarySection;
- (id)cachedLayoutAttributesByIndexPath;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (unsigned long long)gridSectionIndex;
- (id)gridSectionSettingsForItemSize:(unsigned long long)arg1;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutInfo;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredLayoutAreaInset;
- (void)prepareLayout;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGridSectionIndex:(unsigned long long)arg1;
- (void)setGridSectionSettings:(id)arg1 forItemSize:(unsigned long long)arg2;
- (void)setLayoutInfo:(id)arg1;
- (void)setPreferredLayoutAreaInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSupplementarySectionIndex:(unsigned long long)arg1;
- (void)setSupplementarySectionSettings:(id)arg1 forItemSize:(unsigned long long)arg2;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sizeSpecificSettings;
- (unsigned long long)supplementarySectionIndex;
- (id)supplementarySectionSettingsForItemSize:(unsigned long long)arg1;

@end
