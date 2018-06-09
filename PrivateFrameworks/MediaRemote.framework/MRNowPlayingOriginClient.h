/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {
    _MRNowPlayingClientProtobuf * _activeNowPlayingClient;
    NSMutableArray * _applicationPickedRoutes;
    id /* block */  _beginLyricsEventCallback;
    bool  _canBeNowPlayingApp;
    double  _canBeNowPlayingAppTimestamp;
    id /* block */  _capabilitiesCallback;
    id /* block */  _commandCallback;
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    id /* block */  _endLyricsEventCallback;
    unsigned int  _hardwareRemoteBehavior;
    unsigned int  _inputMode;
    bool  _isOverrideApp;
    NSMutableArray * _nowPlayingClients;
    _MROriginProtobuf * _origin;
    id /* block */  _playbackQueueCallback;
    id /* block */  _playbackQueueTransactionCallback;
    unsigned int  _routeDiscoveryMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _volumeCapabilities;
}

@property (nonatomic, retain) _MRNowPlayingClientProtobuf *activeNowPlayingClient;
@property (nonatomic, copy) NSArray *applicationPickedRoutes;
@property (nonatomic, copy) id /* block */ beginLyricsEventCallback;
@property (nonatomic) bool canBeNowPlayingApp;
@property (nonatomic, copy) id /* block */ commandCallback;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, copy) id /* block */ endLyricsEventCallback;
@property (nonatomic) unsigned int hardwareRemoteBehavior;
@property (nonatomic) unsigned int inputMode;
@property (nonatomic) bool isOverrideApp;
@property (nonatomic, readonly) NSArray *nowPlayingClients;
@property (nonatomic, readonly) _MROriginProtobuf *origin;
@property (nonatomic, copy) id /* block */ playbackQueueCallback;
@property (nonatomic, copy) id /* block */ playbackQueueTransactionCallback;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (nonatomic) unsigned int volumeCapabilities;

- (void).cxx_destruct;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)_registerMediaServerNotifications;
- (void)_unregisterMediaServerNotifications;
- (id)activeNowPlayingClient;
- (id)applicationPickedRoutes;
- (id /* block */)beginLyricsEventCallback;
- (bool)canBeNowPlayingApp;
- (id /* block */)commandCallback;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)deviceInfo;
- (id /* block */)endLyricsEventCallback;
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;
- (unsigned int)hardwareRemoteBehavior;
- (id)initWithOrigin:(id)arg1;
- (unsigned int)inputMode;
- (bool)isOverrideApp;
- (id)nowPlayingClientForPlayerPath:(id)arg1;
- (id)nowPlayingClients;
- (id)origin;
- (id /* block */)playbackQueueCallback;
- (id /* block */)playbackQueueTransactionCallback;
- (void)removeClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (unsigned int)routeDiscoveryMode;
- (void)setActiveNowPlayingClient:(id)arg1;
- (void)setApplicationPickedRoutes:(id)arg1;
- (void)setBeginLyricsEventCallback:(id /* block */)arg1;
- (void)setCanBeNowPlayingApp:(bool)arg1;
- (void)setCommandCallback:(id /* block */)arg1;
- (void)setEndLyricsEventCallback:(id /* block */)arg1;
- (void)setHardwareRemoteBehavior:(unsigned int)arg1;
- (void)setInputMode:(unsigned int)arg1;
- (void)setIsOverrideApp:(bool)arg1;
- (void)setPlaybackQueueCallback:(id /* block */)arg1;
- (void)setPlaybackQueueTransactionCallback:(id /* block */)arg1;
- (void)setRouteDiscoveryMode:(unsigned int)arg1;
- (void)setVolumeCapabilities:(unsigned int)arg1;
- (void)updateDeviceInfo:(id)arg1;
- (unsigned int)volumeCapabilities;

@end
