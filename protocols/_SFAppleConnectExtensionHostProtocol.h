/* made by EzioChiu.
 */

@protocol _SFAppleConnectExtensionHostProtocol

@required

- (void)dismissExtensionUI;
- (void)dispatchMessageToContentScriptWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)presentExtensionUI;

@end
