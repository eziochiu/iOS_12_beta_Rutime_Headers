/* made by EzioChiu.
 */

@protocol CFXCameraViewControllerDelegate <NSObject>

@optional

- (void)cameraViewController:(CFXCameraViewController *)arg1 didCaptureMediaItem:(CFXMediaItem *)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didCaptureMediaItem:(CFXMediaItem *)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didRenderFrame:(CFXFrame *)arg2;
- (void)cameraViewControllerDidStartCaptureSession:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDidStopCaptureSession:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDoneButtonWasTapped:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerEffectsButtonWasTapped:(CFXCameraViewController *)arg1;

@end
