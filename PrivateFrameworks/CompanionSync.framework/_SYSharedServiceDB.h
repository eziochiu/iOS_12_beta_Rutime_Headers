/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYSharedServiceDB : NSObject {
    struct sqlite3 { } * _db;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    struct NSMutableDictionary { Class x1; } * _schemaSetupCallbacks;
}

@property (getter=_dbPath, nonatomic, readonly) NSString *dbPath;

+ (void)_releaseSharedInstanceForServiceName:(id)arg1;
+ (void)initialize;
+ (void)pairingStorePathWasReset;
+ (id)sharedInstanceForServiceName:(id)arg1;

- (void).cxx_destruct;
- (bool)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id*)arg2;
- (bool)_LOCKED_ensureDBExists;
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 { }*)arg1;
- (long long)_LOCKED_getClientVersion:(id)arg1;
- (bool)_LOCKED_hasSchemaVersionForClient:(id)arg1;
- (void)_LOCKED_runSchemaUpdate:(id /* block */)arg1 forClientNamed:(id)arg2;
- (void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2;
- (bool)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id*)arg2;
- (id)_dbPath;
- (bool)_ensureParentExists:(id)arg1 error:(id*)arg2;
- (void)_ensureSchemaVersionsTable;
- (bool)_runTransactionBlock:(id /* block */)arg1 exclusive:(bool)arg2;
- (void)dealloc;
- (bool)inExclusiveTransaction:(id /* block */)arg1;
- (bool)inTransaction:(id /* block */)arg1;
- (id)initWithServiceName:(id)arg1;
- (long long)schemaVersionForClient:(id)arg1;
- (void)setSchemaVersion:(long long)arg1 forClient:(id)arg2;
- (void)updateSchemaForClient:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)withDBRef:(id /* block */)arg1;

@end
