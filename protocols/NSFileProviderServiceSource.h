/* made by EzioChiu.
 */

@protocol NSFileProviderServiceSource

@required

- (NSXPCListenerEndpoint *)makeListenerEndpointAndReturnError:(id*)arg1;
- (NSString *)serviceName;

@end
