/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASSqliteDatabase : NSObject {
    bool  _currentExclusivity;
    struct sqlite3 { } * _db;
    NSObject<_PASSqliteErrorHandlerProtocol> * _errorHandler;
    NSString * _filename;
    struct atomic_flag { 
        bool _Value; 
    }  _isClosed;
    bool  _isInMemory;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSCache * _queryCache;
    NSMutableArray * _statementsToFinalizeAsync;
    int  _transactionDepth;
    bool  _transactionRolledback;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) struct sqlite3 { }*handle;
@property (nonatomic, readonly) bool isInMemory;

+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)inMemoryPath;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(bool*)arg3;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(bool*)arg3 errorHandler:(id)arg4;
+ (id)initializeDatabase:(id)arg1 withProtection:(bool)arg2 newDatabaseCreated:(bool*)arg3;
+ (bool)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2 errorHandler:(id)arg3;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)recreateCorruptDatabase:(id)arg1 withContentProtection:(long long)arg2;
+ (void)runDebugCommand:(const char *)arg1 onDbWithHandle:(id)arg2;
+ (bool)shouldCacheSql:(const char *)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id*)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id*)arg1 errorHandler:(id)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id*)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id*)arg3 errorHandler:(id)arg4;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 errorHandler:(id)arg4;
+ (void)truncateDatabaseAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(id /* block */)arg4;
- (bool)_transactionWithExclusivity:(bool)arg1 transaction:(id /* block */)arg2;
- (void)_txnBegin;
- (void)_txnBeginExclusive;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)clearCaches;
- (void)closePermanently;
- (bool)createSnapshot:(id)arg1;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)filename;
- (void)finalizeLater:(struct sqlite3_stmt { }*)arg1;
- (bool)frailReadTransaction:(id /* block */)arg1;
- (bool)frailWriteTransaction:(id /* block */)arg1;
- (id)freeSpace;
- (struct sqlite3 { }*)handle;
- (bool)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(id /* block */)arg4;
- (bool)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (bool)hasIndexNamed:(id)arg1;
- (bool)hasTableNamed:(id)arg1;
- (id)init;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3 errorHandler:(id)arg4;
- (void)insertIntoTable:(id)arg1 dictionary:(id)arg2;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(id /* block */)arg3;
- (bool)isInMemory;
- (id)languageForFTSTable:(id)arg1;
- (long long)lastInsertRowId;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)placeCorruptionMarker;
- (bool)prepAndRunNonDataQueries:(id)arg1 onError:(id /* block */)arg2;
- (bool)prepAndRunQuery:(id)arg1 onPrep:(id /* block */)arg2 onRow:(id /* block */)arg3 onError:(id /* block */)arg4;
- (bool)prepQuery:(id)arg1 onPrep:(id /* block */)arg2 onError:(id /* block */)arg3;
- (void)readTransaction:(id /* block */)arg1;
- (bool)runQuery:(id)arg1 onRow:(id /* block */)arg2;
- (bool)runQuery:(id)arg1 onRow:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(id /* block */)arg4 onError:(id /* block */)arg5;
- (bool)setUserVersion:(unsigned long long)arg1;
- (void)simulateOnDiskDatabase;
- (id)tablesWithColumnNamed:(id)arg1;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(id /* block */)arg4;
- (unsigned long long)userVersion;
- (void)withDbLockExecuteBlock:(id /* block */)arg1;
- (void)writeTransaction:(id /* block */)arg1;

@end