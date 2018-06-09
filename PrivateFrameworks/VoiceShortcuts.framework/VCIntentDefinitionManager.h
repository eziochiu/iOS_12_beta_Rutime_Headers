/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCIntentDefinitionManager : NSObject <VCSyncDataHandling> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSURL * _intentsDirectory;
    VCIntentDefinitionSyncStateModel * _persistenceStore;
    <VCVoiceShortcutSyncService> * _syncService;
}

+ (id)_filesInSyncedIntentsDirectoryForBundleID:(id)arg1 withExtensions:(id)arg2;
+ (id)_intentsDirectory;
+ (id)appInfoForBundleID:(id)arg1;
+ (id)intentDefinitionLocalizableFileURLsForBundleID:(id)arg1;
+ (id)intentDefinitionURLsForBundleID:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_createIntentDefinitionWithProtobuff:(id)arg1;
- (id)_createIntentDefinitionsDirectory;
- (id)_deleteIntentDefinitionWithID:(id)arg1;
- (void)applicationChangedNotification;
- (void)applyChangeSet:(id)arg1 fromSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)createMessageFromData:(id)arg1;
- (void)dealloc;
- (void)deregisterSyncServiceWithIdentifier:(id)arg1;
- (id)getAllChanges;
- (id)getAllLocalIntentDefinitions;
- (id)getAllStoredIntentDefinitions;
- (void)getUnsyncedChangesForSyncServiceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (int)handledMessageType;
- (id)initWithError:(id*)arg1;
- (bool)loadPersistentStoreWithURL:(id)arg1;
- (void)markChangesAsSynced:(id)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)registerSyncService:(id)arg1 asMaster:(bool)arg2;
- (void)removeSyncStateForSyncServiceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)resetLocalData:(id*)arg1;
- (bool)resetPersistentStore;
- (id)wrapMessageInVCPBChange:(id)arg1;

@end
