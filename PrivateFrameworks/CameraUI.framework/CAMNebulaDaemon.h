/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMNebulaDaemon : NSObject <CAMNebulaDaemonConnectionManagerDelegate, CAMPersistenceResultDelegate, NSXPCListenerDelegate> {
    NSMutableArray * __connections;
    CAMNebulaIrisBackendController * __irisBackendController;
    CAMNebulaKeepAliveController * __keepAliveController;
    NSXPCListener * __listener;
    CAMPersistenceController * __persistenceController;
    NSObject<OS_dispatch_queue> * __queue;
    CAMTimelapseBackendController * __timelapseBackendController;
}

@property (nonatomic, readonly) NSMutableArray *_connections;
@property (nonatomic, readonly) CAMNebulaIrisBackendController *_irisBackendController;
@property (nonatomic, readonly) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, readonly) NSXPCListener *_listener;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) CAMTimelapseBackendController *_timelapseBackendController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connections;
- (id)_irisBackendController;
- (id)_keepAliveController;
- (id)_listener;
- (id)_persistenceController;
- (id)_queue;
- (id)_timelapseBackendController;
- (id)allowedProtocolForClientAccess:(id)arg1;
- (void)daemonConnectionManagerHasBeenDisconnected:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performPendingWorkAfterDelay:(double)arg1;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;

@end
