/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout <SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout, SKUIShelfCollectionViewLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedCollectionViewContentSize;
    NSMutableDictionary * _cachedLayoutAttributes;
    double  _focusedItemHorizontalCenterOffset;
    double  _interItemSpacing;
    bool  _invalidateGeometryOnlyOfExistingLayoutAttributes;
    double  _itemWidth;
    SKUIShelfLayoutData * _layoutData;
    double  _scaledItemWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double focusedItemHorizontalCenterOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemWidth;
@property (nonatomic, retain) SKUIShelfLayoutData *layoutData;
@property (nonatomic) double scaledItemWidth;
@property (readonly) Class superclass;

+ (bool)collectionViewCanClipToBounds;
+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (double)snapToBoundariesDecelerationRate;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)focusedItemHorizontalCenterOffset;
- (double)interItemSpacing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)itemWidth;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutData;
- (id)menuBarFocusedItemIndexPathWithTransitionProgress:(double*)arg1;
- (void)prepareLayout;
- (double)scaledItemWidth;
- (void)setFocusedItemHorizontalCenterOffset:(double)arg1;
- (void)setInterItemSpacing:(double)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setLayoutData:(id)arg1;
- (void)setMenuBarFocusedItemIndexPath:(id)arg1 withTransitionProgress:(double)arg2;
- (void)setScaledItemWidth:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
