/* made by EzioChiu.
 */

@protocol PGPictureInPictureControlsViewControllerDelegate <NSObject>

@optional

- (void)pictureInPictureControlsViewControllerActionButtonTapped:(PGPictureInPictureControlsViewController *)arg1;
- (void)pictureInPictureControlsViewControllerCancelButtonTapped:(PGPictureInPictureControlsViewController *)arg1;
- (bool)pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:(PGPictureInPictureControlsViewController *)arg1;
- (bool)pictureInPictureControlsViewControllerShouldHandleTapGesture:(PGPictureInPictureControlsViewController *)arg1;
- (void)pictureInPictureControlsViewControllerStopButtonTapped:(PGPictureInPictureControlsViewController *)arg1;

@end
