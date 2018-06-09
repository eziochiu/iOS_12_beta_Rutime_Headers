/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteServiceClient : NSObject {
    _MRNowPlayingPlayerPathProtobuf * _activePlayerPath;
    MRNotificationClient * _notificationClient;
    MRNotificationServiceClient * _notificationService;
    int  _notifyRestoreClientStateForLaunch;
    NSObject<OS_dispatch_queue> * _playbackQueueDispatchQueue;
    NSMutableDictionary * _playerPathInvalidationHandlers;
    NSString * _preparedBundleID;
    NSMutableArray * _registeredOrigins;
    MRAVRoutingClientController * _routingClientController;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MRMediaRemoteService * _service;
}

@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
@property (nonatomic, readonly) MRNotificationClient *notificationClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, readonly) MRMediaRemoteService *service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workerQueue;

+ (id)sharedServiceClient;

- (void).cxx_destruct;
- (void)_callInvalidationHandler:(id)arg1;
- (void)_onQueue_processPlayerPathInvalidationHandlersWithBlock:(id /* block */)arg1;
- (void)_onQueue_setActivePlayerPath:(id)arg1;
- (void)_processPlayerPathInvalidationHandlersWithBlock:(id /* block */)arg1;
- (id)activePlayerPath;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)dealloc;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)notificationClient;
- (id)playbackQueueDispatchQueue;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)registerCallbacks;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)registeredOrigins;
- (void)removeInvalidationHandler:(id)arg1;
- (id)service;
- (void)setActivePlayerPath:(id)arg1;
- (void)setPlaybackQueueDispatchQueue:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(id /* block */)arg1;
- (void)unregisterOrigin:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)workerQueue;

@end
