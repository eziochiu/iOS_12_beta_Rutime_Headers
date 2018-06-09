/* made by EzioChiu.
 */

@protocol PKTiledCanvasViewDelegate <NSObject>

@optional

- (void)_canvasView:(PKTiledCanvasView *)arg1 didFinishRenderingStrokeOnRenderQueue:(PKStroke *)arg2 inDrawing:(PKDrawing *)arg3;
- (void)canvasView:(PKTiledCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
- (void)canvasViewDidBeginNewStroke:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidCancelStroke:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(PKTiledCanvasView *)arg1;
- (void)canvasViewWillBeginNewStroke:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2;

@end
