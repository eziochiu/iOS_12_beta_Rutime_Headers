/* made by EzioChiu.
 */

@protocol _UIWebRotationDelegate

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeRectForRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)considerHeightOfRectOfInterestForRotation;
- (UIView *)contentView;
- (double)currentDocumentScale;
- (UIScrollView *)enclosingScrollView;
- (double)heightToKeepVisible;
- (double)minimumScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)minimumVerticalContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForRotation;
- (struct { double x1; double x2; double x3; })scalesForContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateBoundariesOfScrollView:(UIScrollView *)arg1 withScales:(struct { double x1; double x2; double x3; })arg2;
- (double)zoomedDocumentScale;

@optional

- (struct CGSize { double x1; double x2; })contentSizeForScrollView:(UIScrollView *)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;

@end
