/* made by EzioChiu.
 */

@protocol TURouteControllerClient <TURouteControllerXPCClient>

@required

- (void)handleServerDisconnect;
- (void)handleServerReconnect;

@end
