/* made by EzioChiu.
 */

@protocol AVContentTransitioning <NSObject>

@required

- (AVPlayerLayerAndContentOverlayContainerView *)activeContentView;
- (<AVContentTransitioningDelegate> *)contentTransitioningDelegate;
- (bool)isTransitionInteractive;
- (void)performTransition:(long long)arg1;
- (void)setContentTransitioningDelegate:(id <AVContentTransitioningDelegate>)arg1;
- (long long)transitionDirection;
- (double)transitionProgress;
- (long long)transitionState;
- (AVPlayerLayerAndContentOverlayContainerView *)transitioningContentView;

@end
