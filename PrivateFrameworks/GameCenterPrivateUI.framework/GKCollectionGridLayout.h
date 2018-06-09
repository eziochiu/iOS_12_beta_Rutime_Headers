/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionGridLayout : GKCollectionFocusingLayout {
    long long  _autoWidthColumns;
    bool  _centersItemsInExcessSpace;
    double  _extraSectionHeaderToCellSpace;
    NSDictionary * _headerAttributes;
    NSDictionary * _itemAttributes;
}

@property (nonatomic) long long autoWidthColumns;
@property (nonatomic) bool centersItemsInExcessSpace;
@property (nonatomic) double extraSectionHeaderToCellSpace;
@property (nonatomic, retain) NSDictionary *headerAttributes;
@property (nonatomic, retain) NSDictionary *itemAttributes;

- (void)applyDefaults;
- (long long)autoWidthColumns;
- (bool)centersItemsInExcessSpace;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)dealloc;
- (double)extraSectionHeaderToCellSpace;
- (id)headerAttributes;
- (id)itemAttributes;
- (long long)lastValidSection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)setCentersItemsInExcessSpace:(bool)arg1;
- (void)setExtraSectionHeaderToCellSpace:(double)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setItemAttributes:(id)arg1;

@end
