/* made by EzioChiu.
 */

@protocol ADAdServingDaemonConnectionDelegate <NSObject>

@required

- (NSString *)adServingDaemonMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg1;

@optional

- (void)adServingDaemonConnectionEstablished;
- (void)adServingDaemonConnectionLost;
- (bool)shouldConnectToAdServingDaemon;

@end
