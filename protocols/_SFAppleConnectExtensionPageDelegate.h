/* made by EzioChiu.
 */

@protocol _SFAppleConnectExtensionPageDelegate

@required

- (void)dismissExtensionViewController:(UIViewController *)arg1;
- (void)dispatchMessageToContentScriptWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)presentExtensionViewController:(UIViewController *)arg1;

@end
