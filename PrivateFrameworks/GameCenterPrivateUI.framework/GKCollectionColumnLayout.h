/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionColumnLayout : GKCollectionFocusingLayout {
    NSDictionary * _decorationAttributes;
    NSDictionary * _headerAttributes;
    NSDictionary * _itemAttributes;
}

@property (nonatomic, retain) NSDictionary *decorationAttributes;
@property (nonatomic, retain) NSDictionary *headerAttributes;
@property (nonatomic, retain) NSDictionary *itemAttributes;

- (void)applyDefaults;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)dealloc;
- (id)decorationAttributes;
- (id)headerAttributes;
- (id)itemAttributes;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)setDecorationAttributes:(id)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setItemAttributes:(id)arg1;

@end
