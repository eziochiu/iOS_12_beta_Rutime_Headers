/* made by EzioChiu.
 */

@protocol _SFAppleConnectExtensionContentScriptMessageReceiver <NSObject>

@required

- (void)dispatchMessageFromContentScript:(NSString *)arg1 userInfo:(NSDictionary *)arg2;

@end
