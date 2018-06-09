/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCKDatabase : NSObject <SCKDatabaseStoreCoordinatorObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SCKAsyncSerialQueue * _ckReadQueue;
    SCKAsyncSerialQueue * _ckWriteQueue;
    <SCKContainerProxying> * _container;
    NSMutableDictionary * _observersByZoneName;
    SCKDatabaseSchema * _schema;
    SCKStartupQueue * _startupQueue;
    long long  _startupStatus;
    <SCKDatabaseStoreCoordinator> * _storeCoordinator;
    NSMutableDictionary * _zoneSnapshotsByZoneName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) SCKAsyncSerialQueue *ckReadQueue;
@property (nonatomic, retain) SCKAsyncSerialQueue *ckWriteQueue;
@property (nonatomic, retain) <SCKContainerProxying> *container;
@property (nonatomic, retain) NSMutableDictionary *observersByZoneName;
@property (nonatomic, retain) SCKDatabaseSchema *schema;
@property (nonatomic, retain) SCKStartupQueue *startupQueue;
@property long long startupStatus;
@property (nonatomic, retain) <SCKDatabaseStoreCoordinator> *storeCoordinator;
@property (nonatomic, retain) NSMutableDictionary *zoneSnapshotsByZoneName;

- (void).cxx_destruct;
- (void)_createZoneInContainerWithSchema:(id)arg1 completion:(id /* block */)arg2;
- (id)_dirtyZones;
- (void)_enqueueStartupSequenceWithFeatures:(long long)arg1;
- (void)_fetchDatabaseAndZoneChangesWithCompletion:(id /* block */)arg1;
- (void)_fetchDatabaseChangesWithCompletion:(id /* block */)arg1;
- (void)_fetchZoneChangesForZones:(id)arg1 completion:(id /* block */)arg2;
- (void)_reloadSnapshotOfZone:(id)arg1 fromStore:(id)arg2;
- (void)_runCKOperation:(id)arg1;
- (id)_sanitizeErrorForClients:(id)arg1;
- (void)_saveZoneToContainer:(id)arg1 completion:(id /* block */)arg2;
- (id)_zoneWithSchema:(id)arg1 zoneStore:(id)arg2;
- (id)_zonesNeedingFirstSync;
- (void)addObserver:(id)arg1 forZone:(id)arg2;
- (id)callbackQueue;
- (id)ckReadQueue;
- (id)ckWriteQueue;
- (id)container;
- (void)handleRemoteNotification:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 containerProxy:(id)arg4;
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 containerProxy:(id)arg4;
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 features:(long long)arg4 containerProxy:(id)arg5;
- (void)modifyContentsOfZone:(id)arg1 withCommand:(id)arg2;
- (id)observersByZoneName;
- (void)pollForChangesWithCondition:(id)arg1 completion:(id /* block */)arg2;
- (void)readContentsOfZone:(id)arg1 withBlock:(id /* block */)arg2;
- (void)removeObserver:(id)arg1 forZone:(id)arg2;
- (id)schema;
- (void)setCallbackQueue:(id)arg1;
- (void)setCkReadQueue:(id)arg1;
- (void)setCkWriteQueue:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setObserversByZoneName:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setStartupQueue:(id)arg1;
- (void)setStartupStatus:(long long)arg1;
- (void)setStoreCoordinator:(id)arg1;
- (void)setZoneSnapshotsByZoneName:(id)arg1;
- (id)startupQueue;
- (long long)startupStatus;
- (id)storeCoordinator;
- (void)storeCoordinatorDiscoveredExternalChanges:(id)arg1;
- (bool)t_flushChangesWithTimeout:(double)arg1;
- (id)zoneSnapshotsByZoneName;

@end
