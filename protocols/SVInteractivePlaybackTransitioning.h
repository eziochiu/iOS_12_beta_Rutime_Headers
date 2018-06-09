/* made by EzioChiu.
 */

@protocol SVInteractivePlaybackTransitioning <NSObject>

@required

- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)startInteractiveTransitionWithContext:(id <SVPlaybackTransitionContext>)arg1;
- (void)updateInteractiveTransition:(double)arg1;

@end
