/* made by EzioChiu.
 */

@protocol PLViewControllerAnimatorObserving <NSObject>

@optional

- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 willBeginDismissalAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
- (void)viewControllerAnimator:(PLViewControllerAnimator *)arg1 willBeginPresentationAnimationWithTransitionContext:(id <UIViewControllerContextTransitioning>)arg2;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(PLViewControllerAnimator *)arg1;

@end
