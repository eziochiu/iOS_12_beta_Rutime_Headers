/* made by EzioChiu.
 */

@protocol NCViewControllerAnimatedTransitioningDelegate <NSObject>

@optional

- (void)transitionAnimator:(id <NCViewControllerAnimatedTransitioning>)arg1 didCommitToTransitionWithCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;

@end
