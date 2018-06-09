/* made by EzioChiu.
 */

@protocol UIViewControllerContextTransitioning <NSObject>

@required

- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (UIView *)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForViewController:(UIViewController *)arg1;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForViewController:(UIViewController *)arg1;
- (bool)isAnimated;
- (bool)isInteractive;
- (void)pauseInteractiveTransition;
- (long long)presentationStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (bool)transitionWasCancelled;
- (void)updateInteractiveTransition:(double)arg1;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (UIView *)viewForKey:(NSString *)arg1;

@end
