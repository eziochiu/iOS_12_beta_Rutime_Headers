/* made by EzioChiu.
 */

@protocol _UIHostedWindowDelegate

@required

- (void)hostedWindow:(_UIHostedWindow *)arg1 didSetFirstResponder:(UIResponder *)arg2;
- (void)hostedWindow:(_UIHostedWindow *)arg1 didSetResponderTargetForCalloutBar:(UICalloutBar *)arg2;

@end
