/* made by EzioChiu.
 */

@protocol UIViewControllerTransitionCoordinatorContext <NSObject>

@required

- (long long)completionCurve;
- (double)completionVelocity;
- (UIView *)containerView;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCancelled;
- (bool)isInteractive;
- (bool)isInterruptible;
- (double)percentComplete;
- (long long)presentationStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (double)transitionDuration;
- (UIViewController *)viewControllerForKey:(NSString *)arg1;
- (UIView *)viewForKey:(NSString *)arg1;

@end
