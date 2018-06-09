/* made by EzioChiu.
 */

@protocol TSDGesture <NSObject>

@required

- (struct CGPoint { double x1; double x2; })boundsLocationForICC:(TSDInteractiveCanvasController *)arg1;
- (<TSDGestureTarget> *)cachedGestureTarget;
- (<TSDGestureDelegate> *)gestureDelegate;
- (NSString *)gestureKind;
- (int)gestureState;
- (bool)isDone;
- (struct CGPoint { double x1; double x2; })naturalLocationForRep:(TSDRep *)arg1;
- (void)setCachedGestureTarget:(id <TSDGestureTarget>)arg1;
- (void)setGestureDelegate:(id <TSDGestureDelegate>)arg1;
- (void)setGestureKind:(NSString *)arg1;
- (void)setTargetRep:(TSDRep *)arg1;
- (TSDRep *)targetRep;
- (struct CGPoint { double x1; double x2; })unscaledLocationForICC:(TSDInteractiveCanvasController *)arg1;

@end
