/* made by EzioChiu.
 */

@protocol FAFamilyCircleRequestConnectionProvider <NSObject>

@required

- (NSXPCConnection *)serviceConnection;

@end
