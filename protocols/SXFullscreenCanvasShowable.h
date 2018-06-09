/* made by EzioChiu.
 */

@protocol SXFullscreenCanvasShowable <NSObject>

@required

- (UIView *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 canvasViewForShowable:(id <SXFullscreenCanvasShowable>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 fullScreenFrameForShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 numberOfViewsForShowable:(id <SXFullscreenCanvasShowable>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 originalFrameForShowable:(id <SXFullscreenCanvasShowable>)arg2 onCanvasView:(UIView *)arg3 viewIndex:(unsigned long long)arg4;
- (SXImageView *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 originalViewForShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 shouldAddGestureView:(UIView *)arg2 forShowable:(id <SXFullscreenCanvasShowable>)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id <SXFullscreenCanvasShowable>)arg3;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(SXFullscreenCanvasController *)arg1;

@optional

- (SXFullscreenCaption *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 captionForShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 didHideShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 didShowShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 willHideShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 willShowShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;

@end
