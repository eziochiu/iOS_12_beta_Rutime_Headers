/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncServer : HDSubserver <HDNanoSyncServerInterface> {
    HDNanoSyncManager * _nanoSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithParentServer:(id)arg1;
- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)remote_resetNanoSyncWithCompletion:(id /* block */)arg1;
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end
