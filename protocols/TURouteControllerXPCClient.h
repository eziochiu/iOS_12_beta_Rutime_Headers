/* made by EzioChiu.
 */

@protocol TURouteControllerXPCClient <NSObject>

@required

- (oneway void)handleRoutesByUniqueIdentifierUpdated:(NSDictionary *)arg1;

@end
