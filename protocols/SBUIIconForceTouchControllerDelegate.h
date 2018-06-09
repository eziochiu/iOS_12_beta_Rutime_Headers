/* made by EzioChiu.
 */

@protocol SBUIIconForceTouchControllerDelegate <NSObject>

@optional

- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 didDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 didPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (bool)iconForceTouchController:(SBUIIconForceTouchController *)arg1 shouldHandleGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (bool)iconForceTouchController:(SBUIIconForceTouchController *)arg1 shouldUseSecureWindowForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 willDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)iconForceTouchController:(SBUIIconForceTouchController *)arg1 willPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;

@end
