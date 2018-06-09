/* made by EzioChiu.
 */

@protocol _UIFocusEnginePanGestureTouchObserver <NSObject>

@required

- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchBeganAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchEndedAtDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchMovedToDigitizerLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
