/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    bool  _isClosed;
    long long  _protectionType;
}

@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) NSURL *databaseURL;

+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;

- (void).cxx_destruct;
- (bool)_checkDatabaseIntegrity;
- (void)_closeDatabase;
- (id)_createNewDatabaseSQLiteStatement;
- (bool)_createNewDatabaseSchema;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (int)_insertEntry:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (bool)_migrateToCurrentSchemaVersionifNeeded;
- (bool)_openDatabase:(id)arg1 andCheckIntegrity:(bool)arg2;
- (bool)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;
- (int)_updateEntry:(id)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;
- (id)allEntries;
- (void)close;
- (id)database;
- (id)databaseURL;
- (void)dealloc;
- (bool)deleteAllEntries;
- (bool)deleteEntryWithHost:(id)arg1;
- (id)entryWithHost:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2;
- (bool)saveEntry:(id)arg1;

@end
