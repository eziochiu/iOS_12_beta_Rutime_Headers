/* made by EzioChiu.
 */

@protocol FBExclusiveTouchGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@required

- (void)exclusiveTouchGestureRecognizer:(FBExclusiveTouchGestureRecognizer *)arg1 achievedMaximumAbsoluteAccumulatedMovement:(bool)arg2 timestamp:(double)arg3;

@end
