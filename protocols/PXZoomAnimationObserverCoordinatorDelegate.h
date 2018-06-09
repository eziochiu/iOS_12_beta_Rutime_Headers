/* made by EzioChiu.
 */

@protocol PXZoomAnimationObserverCoordinatorDelegate <NSObject>

@optional

- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationDidEndWithContext:(id <PXZoomAnimationContext>)arg2;
- (void)zoomAnimationObserverCoordinator:(PXZoomAnimationObserverCoordinator *)arg1 animationWillBeginWithContext:(id <PXZoomAnimationContext>)arg2;

@end
