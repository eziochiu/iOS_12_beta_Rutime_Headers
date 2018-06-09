/* made by EzioChiu.
 */

@protocol AKInkOverlayViewDelegate <NSObject>

@required

- (void)inputView:(AKInkOverlayView *)arg1 didCollectDrawingForAnalysis:(PKDrawing *)arg2;
- (bool)inputViewCanBeginDrawing:(AKInkOverlayView *)arg1 withTouch:(UITouch *)arg2;
- (void)inputViewDidBeginStroke:(AKInkOverlayView *)arg1;

@end
