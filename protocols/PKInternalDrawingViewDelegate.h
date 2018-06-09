/* made by EzioChiu.
 */

@protocol PKInternalDrawingViewDelegate <NSObject>

@required

- (bool)canBeginDrawingWithTouch:(UITouch *)arg1;
- (void)didFinishRenderingStroke:(PKStroke *)arg1 inDrawing:(PKDrawing *)arg2;
- (void)drawingCancelled;
- (void)drawingDidChange:(PKDrawing *)arg1;
- (void)renderingDidFinish;
- (void)setIsDrawing:(bool)arg1;
- (void)willBeginDrawingWithTouch:(UITouch *)arg1;

@end
