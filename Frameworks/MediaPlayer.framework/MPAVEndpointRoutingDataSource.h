/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    void * _callbackToken;
    void * _discoverySession;
    NSMutableDictionary * _endpoints;
    NSString * _routingContextUID;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSMutableDictionary *endpoints;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (void)_endpointsDidChange:(id)arg1;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (id)endpoints;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)routingContextUID;
- (id)serialQueue;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (void)setRoutingContextUID:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
