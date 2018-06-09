/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUtilityServer : HDSubserver <HDUtilityServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)remote_createFakeAppleSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_dropEntitlement:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAllDevicesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchDiagnosticsWithKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchURLForAnalyticsFileWithName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)remote_observeDataCollectionForType:(id)arg1 interval:(double)arg2 inBackground:(bool)arg3 hasRunningWorkout:(bool)arg4;
- (void)remote_resetAWDTask:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_restoreEntitlement:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_runAWDTask:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_saveDataObjects:(id)arg1 sourceBundleIdentifier:(id)arg2 sourceVersion:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_select:(id)arg1 from:(id)arg2 where:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)remote_startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_stopFakingDataWithCompletion:(id /* block */)arg1;
- (void)remote_stopObservingDataCollectionForType:(id)arg1;

@end
