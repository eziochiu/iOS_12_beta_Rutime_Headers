/* made by EzioChiu.
 */

@protocol NCViewControllerAnimatedTransitioning <UIViewControllerAnimatedTransitioning>

@required

- (void)setTransitionAnimatorDelegate:(id <NCViewControllerAnimatedTransitioningDelegate>)arg1;
- (<NCViewControllerAnimatedTransitioningDelegate> *)transitionAnimatorDelegate;

@end
