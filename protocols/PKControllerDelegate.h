/* made by EzioChiu.
 */

@protocol PKControllerDelegate <NSObject>

@required

- (void)drawingChanged:(PKDrawing *)arg1;
- (void)setAllowLiveInteraction:(bool)arg1;
- (void)setNeedsDrawingDisplay;

@end
