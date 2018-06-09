/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBrowserStateSQLiteStore : NSObject {
    NSMutableDictionary * _browserWindowDatabaseIDs;
    WBSSQLiteStatement * _cachedTabDeleteStatement;
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    NSMutableDictionary * _tabUUIDStrings;
}

- (void).cxx_destruct;
- (void)_cacheUUIDForTabStateData:(id)arg1;
- (bool)_checkDatabaseIntegrity;
- (void)_closeDatabase;
- (int)_createFreshDatabaseSchema;
- (int)_createTableForTabSession;
- (int)_createTableForTabs;
- (long long)_databaseIDForBrowserWindow:(id)arg1;
- (void)_insertTabStateWithData:(id)arg1;
- (bool)_isDatabaseOpen;
- (bool)_isTabStateCached:(id)arg1;
- (void)_migrateFromLegacyPlistIfNeeded;
- (void)_migrateFromLegacyPlistWithPath:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (void)_openDatabaseAndCheckIntegrity:(bool)arg1;
- (id)_readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(id /* block */)arg2;
- (int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
- (long long)_saveBrowserWindowStateWithData:(id)arg1;
- (long long)_saveBrowserWindowStateWithDictionary:(id)arg1;
- (int)_schemaVersion;
- (void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (id)_sqliteStatementForTabDeleting;
- (id)_tabUUIDsInWindow:(id)arg1;
- (void)_updateBrowserWindowStateWithDictionary:(id)arg1;
- (void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2;
- (void)_updateOrInsertTabStateWithData:(id)arg1;
- (bool)_updateTabStateWithData:(id)arg1;
- (void)_vacuum;
- (id)browserWindowUUIDs;
- (void)checkPointWriteAheadLog;
- (void)closeDatabase;
- (void)dealloc;
- (bool)deleteAllSavedStates;
- (bool)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(bool)arg2;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeTabWithTabData:(id)arg1;
- (void)saveTabStateWithDictionary:(id)arg1;
- (void)setSecureDeleteEnabled:(bool)arg1;
- (id)tabStatesWithBrowserWindowUUID:(id)arg1;
- (void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2;
- (void)updateTabWithTabStateData:(id)arg1;

@end
