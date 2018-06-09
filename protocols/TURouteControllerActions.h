/* made by EzioChiu.
 */

@protocol TURouteControllerActions <TURouteControllerXPCServer>

@required

- (<TURouteControllerClient> *)routeControllerClient;
- (NSDictionary *)routesByUniqueIdentifier;
- (void)setRouteControllerClient:(id <TURouteControllerClient>)arg1;

@end
