/* made by EzioChiu.
 */

@protocol RCCaptureSessionObserver <NSObject>

@required

- (void)captureSession:(RCCaptureSession *)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2;
- (void)captureSession:(RCCaptureSession *)arg1 didFinishWithSuccess:(bool)arg2;
- (void)captureSession:(RCCaptureSession *)arg1 rateDidChangeToRate:(float)arg2;

@end
