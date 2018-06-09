/* made by EzioChiu.
 */

@protocol STTextTangierInteractiveCanvasControllerDelegate <TSWPInteractiveCanvasControllerDelegate>

@optional

- (void)interactiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1 interactedWithHyperlink:(TSWPHyperlinkField *)arg2 info:(STTextTangierFlowInfo *)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 touchPoint:(struct CGPoint { double x1; double x2; })arg5 touchAndHold:(bool)arg6;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewDidEndDragging:(UIScrollView *)arg2 willDecelerate:(bool)arg3;
- (void)interactiveCanvasControllerWillStartInteraction:(STTextTangierInteractiveCanvasController *)arg1;

@end
