/* made by EzioChiu.
 */

@protocol SVVideoAccessoryItemTransitioning <NSObject>

@required

- (void)animateWithContext:(id <SVVideoAccessoryItemTransitionContext>)arg1;
- (void)cancelTransition;

@end
