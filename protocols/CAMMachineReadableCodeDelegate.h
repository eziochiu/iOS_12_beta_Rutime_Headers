/* made by EzioChiu.
 */

@protocol CAMMachineReadableCodeDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputMachineReadableCodeResults:(NSArray *)arg2;

@end
