/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager> {
    NPSDomainAccessor * _accessor;
    <DNDSAssertionSyncManagerDataSource> * _dataSource;
    <DNDSAssertionSyncManagerDelegate> * _delegate;
    DNDSModeAssertion * _gizmoToggleAssertion;
    DNDSModeAssertion * _gizmoWorkoutAssertion;
    NSDate * _lastInvalidationDate;
    NPSManager * _npsManager;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <DNDSAssertionSyncManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSAssertionSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupState;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_queue_allModeAssertionsWithError:(id*)arg1;
- (id)_queue_assertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)_queue_companionUpdateDateForAssertions:(id)arg1;
- (id)_queue_gizmoUpdateDate;
- (id)_queue_invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)_queue_updateCompanionAssertionMirroringForLocalAssertions:(id)arg1;
- (void)_queue_updateCompanionToggleSyncForLocalAssertions:(id)arg1 gizmoUpdateDate:(id)arg2;
- (void)_queue_updateGizmoAssertionSync;
- (void)_queue_updateGizmoToggleSyncForLocalAssertions:(id)arg1 companionUpdateDate:(id)arg2;
- (void)_queue_updateToggleSyncForLocalAssertions:(id)arg1;
- (void)_sendUpdateToAllObserversForAssertionInvalidations:(id)arg1;
- (void)_sendUpdateToAllObserversForTakenAssertions:(id)arg1;
- (void)_updateGizmoAssertionSync;
- (void)addObserver:(id)arg1;
- (id)allModeAssertionsWithError:(id*)arg1;
- (id)assertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)resume;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)update;

@end
