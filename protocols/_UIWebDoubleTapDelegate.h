/* made by EzioChiu.
 */

@protocol _UIWebDoubleTapDelegate

@required

- (bool)considerHeightForDoubleTap;
- (UIView *)contentView;
- (double)currentDocumentScale;
- (struct { double x1; double x2; double x3; })doubleTapScalesForSize:(struct CGSize { double x1; double x2; })arg1;
- (UIScrollView *)enclosingScrollView;
- (double)minimumScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (double)zoomedDocumentScale;

@optional

- (bool)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 forScale:(double)arg2;
- (void)willZoomToLocation:(struct CGPoint { double x1; double x2; })arg1 atScale:(double)arg2 forDuration:(double)arg3;
- (void)willZoomToMinimumScale;

@end
