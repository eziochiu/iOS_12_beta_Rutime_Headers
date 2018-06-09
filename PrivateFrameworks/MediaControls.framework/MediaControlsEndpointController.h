/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsEndpointController : NSObject <MPAVRoutingControllerDelegate, MPRequestResponseControllerDelegate> {
    bool  _allowsAutomaticResponseLoading;
    bool  _attemptingConnection;
    bool  _automaticResponseLoading;
    MPMediaControlsConfiguration * _configuration;
    <MediaControlsEndpointControllerDelegate> * _delegate;
    bool  _hasEverReceivedResponse;
    MPRequestResponseController * _requestController;
    NSArray * _routeNames;
    MPAVRoutingController * _routingController;
    long long  _state;
}

@property (getter=isAirPlaying, nonatomic, readonly) bool airplaying;
@property (nonatomic) bool allowsAutomaticResponseLoading;
@property (getter=isAttemptingConnection, nonatomic) bool attemptingConnection;
@property (getter=isAutomaticResponseLoading, nonatomic) bool automaticResponseLoading;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, retain) MPMediaControlsConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsEndpointControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAvailableRoutes;
@property (nonatomic) bool hasEverReceivedResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeviceSystemRoute;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (nonatomic, readonly, copy) NSString *representedBundleID;
@property (nonatomic, readonly) MPRequestResponseController *requestController;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, retain) MPAVEndpointRoute *route;
@property (nonatomic, readonly, copy) NSArray *routeNames;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (getter=isRoutingToWireless, nonatomic, readonly) bool routingToWireless;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectIfNeeded;
- (void)_connectionDidConnect:(id)arg1;
- (void)_connectionDidInvalidate:(id)arg1;
- (void)_connectionHasBecomeInvalid;
- (void)_createRequestController;
- (void)_getConnected:(bool*)arg1 invalid:(bool*)arg2;
- (void)_initRoutingController;
- (void)_reloadPlayerPathWithRoute:(id)arg1;
- (void)_updateState;
- (bool)allowsAutomaticResponseLoading;
- (id)bundleID;
- (id)configuration;
- (void)connectAllowingAuthenticationWithCompletion:(id /* block */)arg1;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)hasAvailableRoutes;
- (bool)hasEverReceivedResponse;
- (id)initWithEndpoint:(id)arg1;
- (bool)isAirPlaying;
- (bool)isAttemptingConnection;
- (bool)isAutomaticResponseLoading;
- (bool)isDeviceSystemRoute;
- (bool)isRoutingToWireless;
- (id)label;
- (void)launchNowPlayingApp;
- (id)playerPath;
- (id)representedBundleID;
- (id)requestController;
- (id)response;
- (id)route;
- (id)routeNames;
- (id)routingController;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAllowsAutomaticResponseLoading:(bool)arg1;
- (void)setAttemptingConnection:(bool)arg1;
- (void)setAutomaticResponseLoading:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasEverReceivedResponse:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRoutingController:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)updateRoutePropertiesIfNeeded;

@end
