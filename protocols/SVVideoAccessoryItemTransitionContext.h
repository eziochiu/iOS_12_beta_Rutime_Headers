/* made by EzioChiu.
 */

@protocol SVVideoAccessoryItemTransitionContext <NSObject>

@required

- (void)completeTransition:(bool)arg1;
- (UIView *)containerView;
- (UIView *)fromView;
- (UIView *)toView;
- (bool)transitionWasCancelled;

@end
