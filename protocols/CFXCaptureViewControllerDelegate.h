/* made by EzioChiu.
 */

@protocol CFXCaptureViewControllerDelegate <NSObject>

@required

- (void)captureViewController:(CFXCaptureViewController *)arg1 didCaptureMediaItem:(CFXMediaItem *)arg2;
- (void)captureViewController:(CFXCaptureViewController *)arg1 didRenderFrame:(CFXFrame *)arg2;
- (void)captureViewControllerDoneButtonWasTapped:(CFXCaptureViewController *)arg1;
- (void)captureViewControllerEffectsButtonWasTapped:(CFXCaptureViewController *)arg1;
- (void)captureViewControllerStartCaptureSession:(CFXCaptureViewController *)arg1;
- (void)captureViewControllerStopCaptureSession:(CFXCaptureViewController *)arg1;

@optional

- (void)captureViewControllerDidStartVideoRecording:(CFXCaptureViewController *)arg1;
- (void)captureViewControllerDidStopVideoRecording:(CFXCaptureViewController *)arg1;

@end
