/* made by EzioChiu.
 */

@protocol _UINavigationBarTransitionContextParticipant <NSObject>

@required

- (void)adoptFinalStateFromTransition:(_UINavigationBarTransitionContext *)arg1 transitionCompleted:(bool)arg2;
- (void)ensureBackButtonTruncationOccursWithContext:(_UINavigationBarTransitionContext *)arg1;
- (void)recordFromStateForTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)recordToStateForTransition:(_UINavigationBarTransitionContext *)arg1;

@end
