/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCoreDataStore : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSPersistentContainer * _container;
    NSManagedObjectContext * _context;
    NSManagedObjectContext * _suggestionsContext;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSPersistentContainer *container;
@property (nonatomic, retain) NSManagedObjectContext *context;
@property (nonatomic, retain) NSManagedObjectContext *suggestionsContext;

+ (void)initialize;
+ (bool)persistentStoreExistsInDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)activeManagedObjectWithVoiceShortcutIdentifier:(id)arg1 accessSpecifier:(id)arg2 error:(id*)arg3;
- (id)activeManagedObjectsMatchingPredicate:(id)arg1 accessSpecifier:(id)arg2 error:(id*)arg3;
- (id)activeManagedObjectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 accessSpecifier:(id)arg3 error:(id*)arg4;
- (void)addIndexForVoiceShortcut:(id)arg1;
- (void)addVoiceShortcut:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)applyChangeSet:(struct NSOrderedSet { Class x1; }*)arg1 fromSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)callbackQueue;
- (id)container;
- (id)context;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)describeSyncStateIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (id)existingVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 error:(id*)arg3;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getUnsyncedChangesForSyncServiceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsMatchingPredicate:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithEphemeralStore:(id*)arg1;
- (id)initWithPersistenceType:(unsigned long long)arg1 databaseFileURL:(id)arg2 error:(id*)arg3;
- (id)initWithPersistentStoreInDirectory:(id)arg1 error:(id*)arg2;
- (bool)isPhraseUsable:(id)arg1 error:(id*)arg2;
- (bool)loadPersistentStoreWithDescription:(id)arg1 error:(id*)arg2;
- (id)managedObjectFromAddingVoiceShortcut:(id)arg1 accessSpecifier:(id)arg2 error:(id*)arg3;
- (id)managedObjectsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)managedObjectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 error:(id*)arg3;
- (id)markAsDeletedVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 error:(id*)arg3;
- (void)markChangesAsSynced:(struct NSOrderedSet { Class x1; }*)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)markManagedObject:(id)arg1 asSynced:(bool)arg2 withSyncServiceWithIdentifier:(id)arg3 syncMetadata:(id)arg4;
- (bool)markManagedObjectAsDeleted:(id)arg1 error:(id*)arg2;
- (void)markManagedObjectAsUnsynced:(id)arg1;
- (void)removeIndexForVoiceShortcutIdentifier:(id)arg1;
- (void)removeSyncStateForSyncServiceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)resetPersistentStore:(id*)arg1;
- (bool)saveContext:(id)arg1 orRollback:(id*)arg2;
- (bool)saveContextOrRollback:(id*)arg1;
- (void)setContainer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3;
- (void)setSuggestionsContext:(id)arg1;
- (id)suggestionsContext;
- (id)syncStateOfManagedObject:(id)arg1 forSyncServiceWithIdentifier:(id)arg2;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 accessSpecifier:(id)arg4 completion:(id /* block */)arg5;
- (bool)validateManagedObjectHasNoUserData:(id)arg1;
- (void)validatePhrases:(id)arg1 completion:(id /* block */)arg2;

@end
