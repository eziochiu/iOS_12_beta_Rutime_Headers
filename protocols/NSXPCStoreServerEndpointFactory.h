/* made by EzioChiu.
 */

@protocol NSXPCStoreServerEndpointFactory <NSObject>

@required

- (NSXPCListenerEndpoint *)newEndpoint;

@end
