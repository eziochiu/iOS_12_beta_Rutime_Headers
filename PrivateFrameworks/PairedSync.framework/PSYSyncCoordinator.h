/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate> {
    PSYServiceSyncSession * _activeSyncSession;
    NSXPCConnection * _connection;
    <PSYSyncCoordinatorDelegate> * _delegate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _delegateLock;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _hasStartedListening;
    NSXPCListener * _listener;
    NSMutableDictionary * _nrDevices;
    id /* block */  _pendingCompletion;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    unsigned long long  _syncIDOfStartedSync;
    unsigned long long  _syncRestriction;
    int  _syncSwitchIDToken;
}

@property (nonatomic, readonly) PSYServiceSyncSession *activeSyncSession;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYSyncCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)filteredErrorWithError:(id)arg1;
+ (void)initialize;
+ (id)syncCoordinatorWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)_cleanup;
- (bool)_pairedSyncFinishedMigrationSyncWithPairingID:(id)arg1;
- (bool)_pairedSyncFinishedReunionSync;
- (void)_registerMonitorAllNRDevicesForMigrationChanges:(id /* block */)arg1;
- (void)_registerMonitorNRDevice:(id)arg1 forMigrationChanges:(id /* block */)arg2;
- (unsigned long long)_syncRestriction;
- (void)_syncRestrictionDidUpdate:(id)arg1 forServiceName:(id)arg2;
- (void)_unregisterNRDeviceMonitors;
- (oneway void)abortSyncWithCompletion:(id /* block */)arg1;
- (id)activeSyncSession;
- (void)beginDryRunSyncWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)beginSyncWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)deviceChanged:(id)arg1;
- (void)exitForTestInput:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2;
- (void)invalidateActiveSyncSession;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performDelegateBlock:(id /* block */)arg1;
- (id)progressHandler;
- (unsigned long long)readNotifyToken:(int)arg1;
- (void)registerForDeviceChangeNotifications;
- (int)registerNotifyTokenWithName:(id)arg1 withBlock:(id /* block */)arg2;
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (void)reportProgress:(double)arg1;
- (id)serviceName;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (void)syncDidFailWithError:(id)arg1;
- (unsigned long long)syncRestriction;
- (void)syncSession:(id)arg1 didFailWithError:(id)arg2;
- (void)syncSession:(id)arg1 reportProgress:(double)arg2;
- (void)syncSessionDidComplete:(id)arg1;
- (void)syncSessionDidCompleteSending:(id)arg1;
- (id)syncSessionForOptions:(id)arg1 supportsMigrationSync:(bool)arg2;
- (void)unregisterForDeviceChangeNotifications;

@end
