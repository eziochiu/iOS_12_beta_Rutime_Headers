/* made by EzioChiu.
 */

@protocol DNDSRemoteServiceProviderBehaviorResolutionDelegate <NSObject>

@required

- (DNDClientEventBehavior *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 resolveBehaviorForEventDetails:(DNDClientEventDetails *)arg2 error:(id*)arg3;

@end
