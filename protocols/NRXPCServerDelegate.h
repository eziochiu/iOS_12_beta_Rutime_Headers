/* made by EzioChiu.
 */

@protocol NRXPCServerDelegate <NSObject>

@optional

- (void)xpcServer:(NRXPCServer *)arg1 proxyDidDisconnect:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidResume:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyDidSuspend:(NRXPCProxy *)arg2;
- (void)xpcServer:(NRXPCServer *)arg1 proxyWillConnect:(NRXPCProxy *)arg2;

@end
