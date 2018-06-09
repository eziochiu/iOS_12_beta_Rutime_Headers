/* made by EzioChiu.
 */

@protocol CAMExposureDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputExposureResult:(CAMExposureResult *)arg2;

@optional

- (bool)captureControllerUserHasAdjustedExposureTargetBias:(CUCaptureController *)arg1;

@end
