/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TURouteController : NSObject <TURouteControllerClient> {
    <TURouteControllerActions> * _actionsDelegate;
    NSHashTable * _delegates;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _routesByUniqueIdentifier;
}

@property (nonatomic, readonly) <TURouteControllerActions> *actionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) TURoute *pickedRoute;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) TURoute *receiverRoute;
@property (nonatomic, readonly, copy) NSArray *routes;
@property (nonatomic, copy) NSDictionary *routesByUniqueIdentifier;
@property (nonatomic, readonly, copy) TURoute *speakerRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionsDelegate;
- (void)addDelegate:(id)arg1;
- (id)delegates;
- (oneway void)handleRoutesByUniqueIdentifierUpdated:(id)arg1;
- (void)handleServerDisconnect;
- (void)handleServerReconnect;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (void)pickRoute:(id)arg1;
- (void)pickRouteWithUniqueIdentifier:(id)arg1;
- (id)pickedRoute;
- (id)queue;
- (id)receiverRoute;
- (void)removeDelegate:(id)arg1;
- (id)routes;
- (id)routesByUniqueIdentifier;
- (void)setRoutesByUniqueIdentifier:(id)arg1;
- (id)speakerRoute;

@end
