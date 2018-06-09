/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataManager : NSObject <HDDiagnosticObject> {
    NSNumber * _lastAnchor;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _observersByDataType;
    unsigned long long  _openTransactions;
    NSMutableDictionary * _pendingObjectsBySampleType;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callObservers:(id)arg1 forType:(id)arg2 source:(id)arg3 withAnchor:(id)arg4;
- (void)_callObservers:(id)arg1 withObjects:(id)arg2 type:(id)arg3 anchor:(id)arg4;
- (void)_callObserversIfPossible;
- (bool)_deleteObjectsWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)_insertDataObjects:(id)arg1 intoDatabase:(id)arg2 insertionContext:(id)arg3 updateSourceOrder:(bool)arg4 error:(id*)arg5;
- (void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_notifyObserversWithAddedObjectsBySampleType:(id)arg1 lastAnchor:(id)arg2;
- (id)_observersForAllTypes;
- (id)_observersForDataType:(id)arg1;
- (id)_queue_observersAllTypesCreateIfNil:(bool)arg1;
- (id)_queue_observersForDataType:(id)arg1 createIfNil:(bool)arg2;
- (id)_queue_observersForKey:(id)arg1 createIfNil:(bool)arg2;
- (void)_shouldNotifyForDeletedSamplesOfTypes:(id)arg1 anchor:(id)arg2;
- (void)addObserver:(id)arg1 forDataType:(id)arg2;
- (void)addObserverForAllTypes:(id)arg1;
- (void)closeObserverTransaction;
- (bool)containsDataObject:(id)arg1;
- (bool)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(bool)arg3 recursiveDeleteAuthorizationBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)deleteDataObjectsOfClass:(Class)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long*)arg4 notifyObservers:(bool)arg5 generateDeletedObjects:(bool)arg6 recursiveDeleteAuthorizationBlock:(id /* block */)arg7 error:(id*)arg8;
- (bool)deleteObjectsWithUUIDs:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (bool)deleteSamplesWithSourceEntities:(id)arg1 error:(id*)arg2;
- (bool)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)deleteSamplesWithUUIDs:(id)arg1 generateDeletedObjects:(bool)arg2 database:(id)arg3 error:(id*)arg4;
- (bool)deleteSamplesWithUUIDs:(id)arg1 recursiveDeleteAuthorizationBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)diagnosticDescription;
- (void)hasSampleWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithProfile:(id)arg1;
- (bool)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id*)arg6;
- (bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id*)arg4;
- (bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(bool)arg4 error:(id*)arg5;
- (bool)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(bool)arg4 updateSourceOrder:(bool)arg5 error:(id*)arg6;
- (void)openObserverTransaction;
- (id)profile;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2;
- (void)removeObserverForAllTypes:(id)arg1;
- (void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(long long)arg3 completion:(id /* block */)arg4;
- (void)setProfile:(id)arg1;
- (void)shouldNotifyForDataObjects:(id)arg1 provenance:(id)arg2 database:(id)arg3 anchor:(id)arg4;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)arg1 database:(id)arg2 anchor:(id)arg3;

@end
