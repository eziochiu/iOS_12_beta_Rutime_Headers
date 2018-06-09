/* made by EzioChiu.
 */

@protocol PLCameraControllerDelegate <NSObject>

@optional

- (void)cameraController:(CMKCaptureController *)arg1 capturedPanorama:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)cameraController:(CMKCaptureController *)arg1 capturedPhoto:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)cameraController:(CMKCaptureController *)arg1 cleanApertureDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)cameraController:(CMKCaptureController *)arg1 didChangeCaptureAbility:(bool)arg2;
- (void)cameraController:(CMKCaptureController *)arg1 didFinishTransitionToShowEffectsGrid:(bool)arg2;
- (void)cameraController:(CMKCaptureController *)arg1 didReceivePanoramaIssue:(int)arg2;
- (void)cameraController:(CMKCaptureController *)arg1 didStartTransitionToShowEffectsGrid:(bool)arg2 animated:(bool)arg3;
- (void)cameraController:(CMKCaptureController *)arg1 didUpdatePanoramaPreview:(NSDictionary *)arg2;
- (void)cameraController:(CMKCaptureController *)arg1 faceMetadataDidChange:(NSArray *)arg2;
- (void)cameraController:(CMKCaptureController *)arg1 remoteFocusTapped:(struct CGPoint { double x1; double x2; })arg2;
- (void)cameraController:(CMKCaptureController *)arg1 videoZoomFactorDidChange:(double)arg2;
- (void)cameraController:(CMKCaptureController *)arg1 willChangeToMode:(long long)arg2 device:(long long)arg3;
- (void)cameraController:(CMKCaptureController *)arg1 willResetFocus:(bool)arg2 exposure:(bool)arg3;
- (void)cameraController:(CMKCaptureController *)arg1 willTransitionToShowEffectsGrid:(bool)arg2;
- (void)cameraControllerDidChangeEffectFilterIndex:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangeExposureMode:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangeExposureTargetBias:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangeFocusMode:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangeHDRSuggestion:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangePanoramaConfiguration:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangeUserLockedExposure:(CMKCaptureController *)arg1;
- (void)cameraControllerDidChangeUserLockedFocus:(CMKCaptureController *)arg1;
- (void)cameraControllerDidSetupSession:(CMKCaptureController *)arg1;
- (void)cameraControllerDidStartPanoramaCapture:(CMKCaptureController *)arg1;
- (void)cameraControllerDidStartSession:(CMKCaptureController *)arg1;
- (void)cameraControllerDidStopSession:(CMKCaptureController *)arg1;
- (void)cameraControllerDidStopVideoCapture:(CMKCaptureController *)arg1;
- (void)cameraControllerDidTakePhoto:(CMKCaptureController *)arg1;
- (void)cameraControllerExposureDidEnd:(CMKCaptureController *)arg1;
- (void)cameraControllerExposureDidStart:(CMKCaptureController *)arg1;
- (void)cameraControllerFlashWillFireChanged:(CMKCaptureController *)arg1;
- (void)cameraControllerFocusDidEnd:(CMKCaptureController *)arg1;
- (void)cameraControllerFocusDidStart:(CMKCaptureController *)arg1;
- (void)cameraControllerModeDidChange:(CMKCaptureController *)arg1;
- (void)cameraControllerPanoramaDidStopProcessing:(CMKCaptureController *)arg1;
- (void)cameraControllerPanoramaWillStartProcessing:(CMKCaptureController *)arg1;
- (void)cameraControllerPreviewDidStart:(CMKCaptureController *)arg1;
- (void)cameraControllerRemoteShutter:(CMKCaptureController *)arg1 setFlashMode:(long long)arg2;
- (void)cameraControllerRemoteShutterCanceled:(CMKCaptureController *)arg1;
- (void)cameraControllerRemoteShutterNeedsReadiness:(CMKCaptureController *)arg1;
- (void)cameraControllerRemoteShutterPressed:(CMKCaptureController *)arg1 countdown:(unsigned long long)arg2;
- (bool)cameraControllerRemoteShutterStartVideoCapture:(CMKCaptureController *)arg1;
- (bool)cameraControllerRemoteShutterStopVideoCapture:(CMKCaptureController *)arg1;
- (void)cameraControllerRemoteShutterToggleCameraDevice:(CMKCaptureController *)arg1;
- (void)cameraControllerServerDied:(CMKCaptureController *)arg1;
- (void)cameraControllerServerError:(CMKCaptureController *)arg1;
- (void)cameraControllerSessionDidStart:(CMKCaptureController *)arg1;
- (void)cameraControllerSessionDidStop:(CMKCaptureController *)arg1;
- (void)cameraControllerSessionInterruptionEnded:(CMKCaptureController *)arg1;
- (void)cameraControllerSessionWasInterrupted:(CMKCaptureController *)arg1;
- (void)cameraControllerTorchActiveChanged:(CMKCaptureController *)arg1;
- (void)cameraControllerTorchAvailabilityChanged:(CMKCaptureController *)arg1;
- (void)cameraControllerVideoCaptureDidStart:(CMKCaptureController *)arg1;
- (void)cameraControllerVideoCaptureDidStop:(CMKCaptureController *)arg1 withReason:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)cameraControllerWillStartPreview:(CMKCaptureController *)arg1;
- (void)cameraControllerWillStopPanoramaCapture:(CMKCaptureController *)arg1;
- (void)cameraControllerWillStopSession:(CMKCaptureController *)arg1;
- (void)cameraControllerWillTakePhoto:(CMKCaptureController *)arg1;
- (void)captureController:(CMKCaptureController *)arg1 didFinishPanoramaRequest:(CMKPanoramaCaptureRequest *)arg2 withResponse:(CMKStillImageCaptureResponse *)arg3;
- (void)captureController:(CMKCaptureController *)arg1 didFinishRecordingForVideoRequest:(CMKVideoCaptureRequest *)arg2 withResponse:(CMKVideoCaptureResponse *)arg3;
- (void)captureController:(CMKCaptureController *)arg1 didOutputPanoramaCaptureParameters:(CMKPanoramaCaptureParameters *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didStartCapturingForPanoramaRequest:(CMKPanoramaCaptureRequest *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didStartProcessingForPanoramaRequest:(CMKPanoramaCaptureRequest *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didStartRecordingForVideoRequest:(CMKVideoCaptureRequest *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didStopCapturingForPanoramaRequest:(CMKPanoramaCaptureRequest *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didStopProcessingForPanoramaRequest:(CMKPanoramaCaptureRequest *)arg2;
- (void)captureController:(CMKCaptureController *)arg1 didStopRecordingForVideoRequest:(CMKVideoCaptureRequest *)arg2;
- (void)captureControllerPanoramaConfigurationChanged:(CMKCaptureController *)arg1;

@end
