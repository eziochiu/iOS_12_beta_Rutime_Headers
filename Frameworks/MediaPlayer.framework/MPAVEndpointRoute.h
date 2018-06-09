/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVEndpointRoute : MPAVRoute {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    MPAVRouteConnection * _connection;
    MPMRAVEndpointWrapper * _endpointWrapper;
    NSString * _sortName;
}

@property (nonatomic, readonly) bool canModifyGroupMembership;
@property (nonatomic, retain) MPAVRouteConnection *connection;
@property (nonatomic, readonly) void*endpoint;
@property (nonatomic, retain) MPMRAVEndpointWrapper *endpointWrapper;
@property (nonatomic, readonly) NSString *sortName;

+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_endpointDidChange:(id)arg1;
- (void)_endpointOutputDevicesDidChange:(id)arg1;
- (bool)_groupLeaderIsOfDeviceSubtype:(unsigned int)arg1;
- (unsigned long long)_outputDevicesComposition;
- (bool)canAccessRemoteAssets;
- (bool)canFetchMediaDataFromSender;
- (bool)canModifyGroupMembership;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)designatedGroupLeaderName;
- (void)encodeWithCoder:(id)arg1;
- (void*)endpoint;
- (id)endpointWrapper;
- (void)establishGroup;
- (id)groupUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(void*)arg1;
- (bool)isAirPlayingToDevice;
- (bool)isAppleTVRoute;
- (bool)isDeviceRoute;
- (bool)isDeviceSpeakerRoute;
- (bool)isHomePodRoute;
- (bool)isProxyGroupPlayer;
- (bool)isRoutingToWirelessDevice;
- (bool)isStereoPair;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)routeName;
- (id)routeNames;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setConnection:(id)arg1;
- (void)setEndpointWrapper:(id)arg1;
- (id)sortName;
- (bool)supportsGrouping;
- (bool)supportsRemoteControl;

@end
