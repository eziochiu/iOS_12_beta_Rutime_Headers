/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridZoomTransitionAnimationController : _UICollectionViewControllerLayoutToLayoutTransition {
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, readonly) PUZoomableGridTransition *gridTransitionInfo;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)gridTransitionInfo;
- (double)transitionDuration:(id)arg1;

@end
