/* made by EzioChiu.
 */

@protocol SVFullscreenTransitionCoordinator <NSObject>

@required

- (void)animateWithContext:(id <SVFullscreenTransitionContext>)arg1;
- (void)completeTransition:(bool)arg1;

@end
