/* made by EzioChiu.
 */

@protocol PKDrawingGestureTarget <NSObject>

@required

- (void)drawingBegan:(UITouch *)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(UITouch *)arg1;
- (void)drawingEstimatedPropertiesUpdated:(NSSet *)arg1;
- (void)drawingMoved:(UITouch *)arg1 withEvent:(UIEvent *)arg2;

@end
