/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout> {
    SKUIShelfLayoutData * _layoutData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIShelfLayoutData *layoutData;
@property (readonly) Class superclass;

+ (bool)collectionViewCanClipToBounds;
+ (Class)layoutAttributesClass;
+ (double)snapToBoundariesDecelerationRate;

- (void).cxx_destruct;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutData;
- (void)setLayoutData:(id)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
