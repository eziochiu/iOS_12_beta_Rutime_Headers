/* made by EzioChiu.
 */

@protocol MRAVDistantRoutingDiscoveryClientProtocol <NSObject>

@required

- (void)availableEndpointsDidChange:(NSArray *)arg1;
- (void)availableOutputDevicesDidChange:(NSArray *)arg1;

@end
