/* made by EzioChiu.
 */

@protocol XCTDaemonConnectionProvider <NSObject>

@required

- (NSXPCConnection *)makeNewDaemonConnection;

@end
