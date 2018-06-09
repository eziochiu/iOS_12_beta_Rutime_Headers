/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUZoomTransitionLayout : UICollectionViewTransitionLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _centerOffset;
}

- (void)_adjustLayoutAttributes:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setTransitionProgress:(double)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
