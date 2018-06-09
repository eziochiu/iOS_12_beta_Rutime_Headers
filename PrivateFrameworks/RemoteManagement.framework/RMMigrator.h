/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMMigrator : NSObject {
    NSPersistentStore * _cloudStore;
    NSPersistentStoreCoordinator * _coordinator;
    NSPersistentStore * _localStore;
    NSPersistentHistoryToken * _migratedToken;
}

- (void).cxx_destruct;
- (bool)_checkPreconditionsError:(id*)arg1;
- (bool)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id*)arg4;
- (id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (bool)isChangeInteresting:(id)arg1;
- (bool)migrateToCloud:(id*)arg1;
- (bool)migrateToLocal:(id*)arg1;

@end
