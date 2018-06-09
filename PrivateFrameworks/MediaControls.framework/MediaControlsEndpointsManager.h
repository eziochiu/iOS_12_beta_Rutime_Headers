/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsEndpointsManager : NSObject <MPAVOutputDevicePlaybackDataSource, MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate> {
    NSString * _activeSystemRouteUID;
    MPMediaControlsConfiguration * _configuration;
    <MediaControlsEndpointsManagerDelegate> * _delegate;
    bool  _didLoadHomeUIDsOnce;
    long long  _discoveryMode;
    NSMutableDictionary * _endpointControllersMap;
    MediaControlsHomeObserver * _homeObserver;
    bool  _isRequestingActiveRoute;
    NSArray * _routes;
    MPAVRoutingController * _routingController;
}

@property (nonatomic, retain) MPAVEndpointRoute *activeSystemRoute;
@property (nonatomic, readonly, copy) NSString *activeSystemRouteUID;
@property (nonatomic, readonly, copy) MPMediaControlsConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsEndpointsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long discoveryMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MediaControlsHomeObserver *homeObserver;
@property (nonatomic, readonly, copy) NSArray *routes;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activeSystemRouteDidChange:(id)arg1;
- (id)_endpointControllerContainingOutputDevice:(id)arg1 endpointWrapper:(id*)arg2;
- (bool)_homeHasRoute:(id)arg1;
- (long long)_indexOfRouteWithUID:(id)arg1;
- (void)_setRoutes:(id)arg1 withChangeDetails:(id)arg2;
- (void)_updateActiveRoute;
- (void)_updateWithRoutes:(id)arg1;
- (id)activeSystemRoute;
- (id)activeSystemRouteUID;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (long long)discoveryMode;
- (id)endpointControllerForRoute:(id)arg1;
- (void)getOutputDeviceIsPlaying:(id)arg1 completion:(id /* block */)arg2;
- (id)homeObserver;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)routes;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setActiveSystemRoute:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;

@end
