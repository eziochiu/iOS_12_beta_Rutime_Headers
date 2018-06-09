/* made by EzioChiu.
 */

@protocol SBUIAppIconForceTouchControllerDelegate <NSObject>

@optional

- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 didDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 didPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3 forGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg4;
- (bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldHandleGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (bool)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 shouldUseSecureWindowForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 willDismissForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;
- (void)appIconForceTouchController:(SBUIAppIconForceTouchController *)arg1 willPresentForGestureRecognizer:(SBUIForceTouchGestureRecognizer *)arg2;

@end
