/* made by EzioChiu.
 */

@protocol CAMFacesDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputFaceResults:(NSArray *)arg2;

@end
