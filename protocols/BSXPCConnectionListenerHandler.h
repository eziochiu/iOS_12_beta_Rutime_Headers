/* made by EzioChiu.
 */

@protocol BSXPCConnectionListenerHandler <NSObject>

@required

- (void)handleIncomingConnection:(NSObject<OS_xpc_object> *)arg1 forService:(NSString *)arg2;

@end
