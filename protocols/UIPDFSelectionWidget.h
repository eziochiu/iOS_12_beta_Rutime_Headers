/* made by EzioChiu.
 */

@protocol UIPDFSelectionWidget

@required

- (struct CGPoint { double x1; double x2; })currentSelectionPointOnPage;
- (void)endTracking;
- (void)hide;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1 fixedPoint:(struct CGPoint { double x1; double x2; }*)arg2 preceeds:(bool*)arg3;
- (struct CGPoint { double x1; double x2; })initialSelectionPointOnPage;
- (void)layout;
- (UIPDFPageView *)pageView;
- (void)remove;
- (struct CGPoint { double x1; double x2; })selectedPointFor:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectangle;
- (void)setPageView:(UIPDFPageView *)arg1;
- (void)setSelectedGrabber:(unsigned long long)arg1;
- (void)setSelection:(UIPDFSelection *)arg1;
- (void)track:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })viewOffset;

@end