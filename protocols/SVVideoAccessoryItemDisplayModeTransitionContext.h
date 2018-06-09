/* made by EzioChiu.
 */

@protocol SVVideoAccessoryItemDisplayModeTransitionContext <NSObject>

@required

- (NSSet *)appearingViews;
- (void)completeTransition:(bool)arg1;
- (NSSet *)containerViews;
- (NSSet *)disappearingViews;
- (unsigned long long)initialDisplayModeForView:(UIView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForView:(UIView *)arg1;
- (unsigned long long)targetDisplayModeForView:(UIView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrameForView:(UIView *)arg1;
- (bool)transitionWasCancelled;
- (NSSet *)transitioningViews;
- (NSSet *)views;

@end
