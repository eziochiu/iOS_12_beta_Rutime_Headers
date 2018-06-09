/* made by EzioChiu.
 */

@protocol SVFullscreenTransitionContext <NSObject>

@required

- (UIView *)contentOverlayView;
- (UIView *)fromView;
- (bool)isInteractive;
- (UIView *)toView;
- (double)transitionDuration;

@end
