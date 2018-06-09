/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {
    NSMutableArray * _discoveredTelevisions;
    void * _discoveryController;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)_discoveredTelevisions;
- (void)_onQueue_controllerDidDiscoverTelevision:(void*)arg1;
- (void)_onQueue_controllerDidRemoveTelevision:(void*)arg1;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)arg1;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)setDiscoveryMode:(long long)arg1;

@end
