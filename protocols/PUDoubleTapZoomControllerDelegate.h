/* made by EzioChiu.
 */

@protocol PUDoubleTapZoomControllerDelegate <NSObject>

@optional

- (bool)doubleTapZoomController:(PUDoubleTapZoomController *)arg1 canDoubleTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (<UIGestureRecognizerDelegate> *)doubleTapZoomController:(PUDoubleTapZoomController *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (PUTilingView *)doubleTapZoomControllerTilingView:(PUDoubleTapZoomController *)arg1;
- (UIView *)doubleTapZoomControllerViewHostingGestureRecognizers:(PUDoubleTapZoomController *)arg1;
- (PUOneUpDragController *)oneUpDragControllerForDoubleTapZoomController:(PUDoubleTapZoomController *)arg1;

@end
