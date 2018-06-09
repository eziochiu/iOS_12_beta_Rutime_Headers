/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout {
    NSIndexPath * _startScrollingIndexPath;
}

@property (nonatomic, retain) NSIndexPath *startScrollingIndexPath;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_collectionViewBoundsCenter;
- (void)_panGestureRecognized:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (void)setStartScrollingIndexPath:(id)arg1;
- (id)startScrollingIndexPath;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
