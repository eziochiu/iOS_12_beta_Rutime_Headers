/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
    id * _additionalPrivateIvars;
    void * _dispatchQueue;
    struct _persistentStoreCoordinatorFlags { 
        unsigned int _isRegistered : 1; 
        unsigned int _canUseDirectDispatch : 1; 
        unsigned int _reservedFlags : 30; 
    }  _flags;
    NSManagedObjectModel * _managedObjectModel;
    long long  _miniLock;
    NSArray * _persistentStores;
    id  _queueOwner;
    unsigned int  _reserved32;
}

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, readonly) _PFModelMap *modelMap;
@property (copy) NSString *name;
@property (readonly) NSArray *persistentStores;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (unsigned long long)__platformOptions;
+ (id)_beginPowerAssertionWithAssert:(unsigned long long*)arg1;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (void)_endPowerAssertionWithAssert:(unsigned long long)arg1 andApp:(id)arg2;
+ (id)_metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)_registerDefaultStoreClassesAndTypes;
+ (bool)_setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (Class)_storeClassForStoreType:(id)arg1;
+ (id)_storeTypeForStore:(id)arg1;
+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (id)registeredStoreTypes;
+ (bool)removePersistentHistoryFromPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4;
+ (bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 localPeerID:(id)arg3 ubiquityName:(id)arg4;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3;

- (id)URLForPersistentStore:(id)arg1;
- (void)_addPersistentStore:(id)arg1 identifier:(id)arg2;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3;
- (void)_assignObjects:(id)arg1 toStore:(id)arg2;
- (bool)_attemptRecoveryFromAddPersistentStoreError:(id)arg1 withDescription:(id)arg2;
- (bool)_canRouteToStore:(id)arg1 forContext:(id)arg2;
- (bool)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(struct __CFSet { }*)arg3 withAcceptableEntities:(struct __CFSet { }*)arg4;
- (bool)_checkForPostLionWriter:(id)arg1;
- (bool)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2;
- (bool)_checkForTombstoneSkew:(id)arg1 metadata:(id)arg2 configuration:(id)arg3;
- (id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3;
- (void)_coordinator_no_idea_what_kind_of_request_that_was_supposed_to_be;
- (void)_coordinator_you_never_successfully_opened_the_database_cant_open:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_corrupted:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_device_locked:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_disk_full:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_io_error:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_missing_directory:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_no_permission:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_schema_mismatch:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_so_saving_back_to_it_is_kinda_hard:(id)arg1;
- (void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3;
- (bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3;
- (bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)_doAddPersistentStoreWithDescription:(id)arg1 privateCopy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_doPreSaveAssignmentsForObjects:(id)arg1 intoStores:(id)arg2;
- (id)_exceptionNoStoreSaveFailureForError:(id)arg1 recommendedFrame:(int*)arg2;
- (id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id*)arg3;
- (bool)_hasHistoryTracking:(id)arg1;
- (void)_introspectLastErrorAndThrow;
- (bool)_isRegisteredWithCloudKit;
- (bool)_isRegisteredWithUbiquity;
- (id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3;
- (id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)_persistentStoreForIdentifier:(id)arg1;
- (void)_postStoreRemoteChangeNotificationsForStore:(id)arg1 andState:(unsigned long long)arg2;
- (void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3;
- (id)_processStoreResults:(id)arg1 forRequest:(id)arg2;
- (id)_qosClassOptions;
- (id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)_refreshTriggerValuesInStore:(id)arg1 error:(id*)arg2;
- (void)_removeAllPersistentStores;
- (bool)_removePersistentStore:(id)arg1;
- (bool)_removePersistentStore:(id)arg1 error:(id*)arg2;
- (id)_reopenQueryGenerationWithIdentifier:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6;
- (id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2;
- (id)_retainedChangeTokenFromStores:(id)arg1;
- (id)_retainedCurrentChangeTrackingToken;
- (id)_retainedCurrentQueryGeneration;
- (id)_retainedIdentifierFromStores:(id)arg1;
- (id)_retainedPersistentStores;
- (id)_routableStoresForContext:(id)arg1 fromStores:(id)arg2;
- (void)_routeHeavyweightBlock:(id /* block */)arg1;
- (void)_routeLightweightBlock:(id /* block */)arg1 toStore:(id)arg2;
- (id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (void)_setIsRegisteredWithCloudKit:(bool)arg1;
- (void)_setIsRegisteredWithUbiquity:(bool)arg1;
- (void)_setQosClassOptions:(unsigned int)arg1;
- (void)_setXPCBundleIdentifier:(id)arg1;
- (void)_setXPCProcessName:(id)arg1;
- (bool)_validateQueryGeneration:(id)arg1 error:(id*)arg2;
- (id)_xpcBundleIdentifier;
- (id)_xpcProcessName;
- (void)addPersistentStoreWithDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)currentPersistentHistoryTokenFromStores:(id)arg1;
- (void)dealloc;
- (bool)destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithManagedObjectModel:(id)arg1;
- (void)lock;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1 error:(id*)arg2;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)managedObjectModel;
- (id)metadataForPersistentStore:(id)arg1;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5;
- (id)modelMap;
- (id)name;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)persistentStoreCoordinator;
- (id)persistentStoreForIdentifier:(id)arg1;
- (id)persistentStoreForURL:(id)arg1;
- (id)persistentStores;
- (bool)removePersistentStore:(id)arg1 error:(id*)arg2;
- (bool)replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (void)setName:(id)arg1;
- (bool)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (bool)tryLock;
- (void)unlock;
- (bool)validateManagedObjectModel:(id)arg1 forHistoryTrackingWithOptions:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (bool)hasStoreInCommonWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)ic_managedObjectIDForURIString:(id)arg1;

@end
