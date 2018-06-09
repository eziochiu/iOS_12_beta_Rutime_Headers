/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementLegacyStore : NSObject <NSManagedObjectContextFaultingDelegate, _KSTextReplacementStoreProtocol> {
    NSURL * _baseURL;
    bool  _forceMaintenance;
    long long  _importedSinceMaintenance;
    NSDate * _lastMaintenanceDate;
    NSManagedObjectContext * _managedObjectContext;
    bool  _minimumUptimeDidExpire;
    bool  _pendingSampleShortcutImport;
    NSPersistentStore * _persistentStore;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSDate * _persistentStoreDidLoadTime;
    bool  _suspendedForAccountChange;
    NSObject<OS_os_transaction> * _uptimeTransaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceMaintenance;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long importedSinceMaintenance;
@property (nonatomic, retain) NSDate *lastMaintenanceDate;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) bool minimumUptimeDidExpire;
@property (nonatomic) bool pendingSampleShortcutImport;
@property (nonatomic, retain) NSPersistentStore *persistentStore;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSDate *persistentStoreDidLoadTime;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendedForAccountChange;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)basePersistentStoreURL;
+ (id)legacyImportFilePaths;
+ (id)legacyImportWordKeyPairsFromFiles:(id)arg1;
+ (id)legacyStorePath;
+ (id)textReplacementEntriesFromManagedObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteDuplicatesOfShortcut:(id)arg1 phrase:(id)arg2 count:(long long)arg3 withContext:(id)arg4;
- (id)_deleteTransaction:(id)arg1;
- (bool)_mergeShortcut:(id)arg1 phrase:(id)arg2 fromContext:(id)arg3;
- (bool)_shouldMergeShortcut:(id)arg1 phrase:(id)arg2 intoContext:(id)arg3;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)baseURL;
- (void)cleanup;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)currentStoreIndentity;
- (void)dealloc;
- (bool)detectAndCleanDuplicatesWithContext:(id)arg1;
- (void)didMaintenance;
- (void)didMergeEntriesForNewUbiquityIdentity:(id)arg1;
- (void)didMergeEntriesForOtherLocalPeers:(id)arg1;
- (void)endMinimumUptime;
- (id)entityDescription;
- (id)entriesMatchingPredicate:(id)arg1;
- (id)entriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)entriesUsingSortDescriptors:(id)arg1;
- (bool)forceMaintenance;
- (void)importLegacyEntries;
- (void)importSampleShortcutsIfNecessary;
- (long long)importedSinceMaintenance;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (void)insertEntryWithValue:(id)arg1;
- (id)lastMaintenanceDate;
- (void)loadMaintenancePreferencesIfNecessary;
- (void)loadPersistentStoreIfNecessary;
- (id)managedObjectContext;
- (id)managedObjectModelURL;
- (bool)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg1 firstDelete:(bool)arg2;
- (bool)mergeEntriesForUbiquityIdentityChangeIfNecessary;
- (bool)mergeEntriesFromAllStoresIncludeLocalVariations:(bool)arg1;
- (id)mergeShortcutsFromContext:(id)arg1;
- (bool)migrateEntriesFromStoreAtURL:(id)arg1 error:(id*)arg2;
- (void)migrateSundanceData;
- (void)migrateTellurideData;
- (bool)minimumUptimeDidExpire;
- (double)minimumUptimeRemaining;
- (bool)needsMaintenance;
- (bool)pendingSampleShortcutImport;
- (void)performMaintenanceIfNecessary;
- (id)persistentStore;
- (id)persistentStoreCoordinator;
- (void)persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)persistentStoreCoordinatorStoresWillChange:(id)arg1;
- (void)persistentStoreDidImportUbiquitousContentChanges:(id)arg1;
- (id)persistentStoreDidLoadTime;
- (void)prepareForMigration;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)removeAllEntries;
- (id)removeEntriesWithPredicate:(id)arg1;
- (void)requestMinimumUptime;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)retirePersistentStoreAtURL:(id)arg1;
- (void)runMaintenanceIncludeLocalVariations:(bool)arg1;
- (bool)save;
- (void)setBaseURL:(id)arg1;
- (void)setForceMaintenance:(bool)arg1;
- (void)setImportedSinceMaintenance:(long long)arg1;
- (void)setLastMaintenanceDate:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMinimumUptimeDidExpire:(bool)arg1;
- (void)setPendingSampleShortcutImport:(bool)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPersistentStoreDidLoadTime:(id)arg1;
- (void)setSuspendedForAccountChange:(bool)arg1;
- (id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg1 toToken:(id)arg2 withLastKnownToken:(id)arg3 shouldDeleteFirst:(bool*)arg4;
- (bool)suspendedForAccountChange;
- (id)textReplacementEntries;
- (id)workQueue;

@end
