/* made by EzioChiu.
 */

@protocol AVContentTransitioningDelegate <NSObject>

@required

- (AVPlayerLayerAndContentOverlayContainerView *)contentTransitioningPlayerContentViewForTransition:(UIView<AVContentTransitioning> *)arg1;
- (bool)contentTransitioningView:(UIView<AVContentTransitioning> *)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (void)contentTransitioningViewDidChangeTransitionStatus:(UIView<AVContentTransitioning> *)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (bool)contentTransitioningViewShouldBeginDragging:(UIView<AVContentTransitioning> *)arg1 locationInView:(struct CGPoint { double x1; double x2; })arg2;

@end
