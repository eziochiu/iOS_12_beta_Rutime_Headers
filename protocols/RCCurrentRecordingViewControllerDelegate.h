/* made by EzioChiu.
 */

@protocol RCCurrentRecordingViewControllerDelegate <NSObject>

@required

- (void)currentRecordingViewController:(RCCurrentRecordingViewController *)arg1 didChangeAVState:(RCAVState *)arg2;
- (void)currentRecordingViewController:(RCCurrentRecordingViewController *)arg1 didDeterminteAvailability:(bool)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(RCCurrentRecordingViewController *)arg1;

@end
