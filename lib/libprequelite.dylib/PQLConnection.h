/* made by EzioChiu
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLConnection : NSObject {
    id /* block */  _autoRollbackHandler;
    NSObject<OS_os_transaction> * _batchStarted;
    int  _batchTransactionType;
    int  _batchingChangesCount;
    int  _batchingChangesLimit;
    double  _batchingPeriod;
    id /* block */  _batchingPolicyHandler;
    NSObject<OS_dispatch_source> * _batchingTimer;
    int  _cacheSize;
    bool  _crashIfUsedAfterClose;
    unsigned long long  _currentStmtStart;
    struct sqlite3 { } * _db;
    NSMutableArray * _flushNotifications;
    NSString * _label;
    NSError * _lastError;
    id /* block */  _lockedHandler;
    bool  _needsFullSync;
    id /* block */  _postFlushHook;
    id /* block */  _preFlushHook;
    struct cache_s { } * _preparedStatements;
    id /* block */  _profilingHook;
    int  _savePointLevel;
    NSObject<OS_dispatch_queue> * _serialQueue;
    int  _skipBatchStop;
    id /* block */  _sqliteErrorHandler;
    NSMutableArray * _stmtCacheCleanupQueue;
    NSObject<OS_dispatch_source> * _stmtCacheSource;
    int  _suspendCaching;
    NSObject<OS_dispatch_queue> * _targetQueue;
    bool  _traced;
    NSURL * _url;
    bool  _useBatching;
    bool  _useQueue;
    int  _vacuumTracker;
}

@property (nonatomic, copy) id /* block */ autoRollbackHandler;
@property (nonatomic) int batchTransactionType;
@property (nonatomic, readonly) long long changes;
@property (nonatomic) bool crashIfUsedAfterClose;
@property (nonatomic, readonly) double currentOperationDuration;
@property (nonatomic, readonly) struct sqlite3 { }*dbHandle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool isBatchSuspended;
@property (nonatomic, readonly) bool isInBatch;
@property (nonatomic, readonly) bool isInTransaction;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, readonly) long long lastInsertedRowID;
@property (nonatomic, copy) id /* block */ lockedHandler;
@property (nonatomic, copy) id /* block */ postFlushHook;
@property (nonatomic, copy) id /* block */ preFlushHook;
@property (nonatomic, copy) id /* block */ profilingHook;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, copy) id /* block */ sqliteErrorHandler;
@property (nonatomic) unsigned long long statementCacheMaxCount;
@property (nonatomic) unsigned long long synchronousMode;
@property (getter=isTraced, nonatomic) bool traced;
@property (nonatomic, readonly, copy) NSURL *url;

// Image: /usr/lib/libprequelite.dylib

+ (void)initialize;

- (void).cxx_destruct;
- (void)_batchStartIfNeeded:(int)arg1;
- (void)_batchStopIfNeeded;
- (void)_clearCleanupCacheQueueIfNeeded;
- (void)_clearStatementCache;
- (void)_createCacheIfNeeded;
- (id)_description:(bool)arg1;
- (bool)_execute:(id)arg1 mustSucceed:(bool)arg2 bindings:(char *)arg3;
- (void)_fireFlushNotifications;
- (bool)_fullSync;
- (bool)_incrementalVacuum:(unsigned long long)arg1;
- (id)_newStatementForFormat:(id)arg1 arguments:(char *)arg2;
- (bool)_performWithFlags:(unsigned int)arg1 action:(id /* block */)arg2 whenFlushed:(id /* block */)arg3;
- (void)_resetState;
- (void)_vacuumIfNeeded;
- (int)_vacuumMode;
- (void)assertOnQueue;
- (id /* block */)autoRollbackHandler;
- (long long)autovacuumableSpaceInBytes;
- (bool)backupToURL:(id)arg1 progress:(id /* block */)arg2;
- (int)batchTransactionType;
- (long long)changes;
- (bool)close:(id*)arg1;
- (bool)crashIfUsedAfterClose;
- (double)currentOperationDuration;
- (struct sqlite3 { }*)dbHandle;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)destroyDatabaseWithError:(id*)arg1;
- (bool)execute:(id)arg1;
- (bool)execute:(id)arg1 args:(char *)arg2;
- (bool)executeRaw:(id)arg1;
- (id)fetch:(id)arg1;
- (id)fetch:(id)arg1 args:(char *)arg2;
- (id)fetchObject:(id /* block */)arg1 sql:(id)arg2;
- (id)fetchObject:(id /* block */)arg1 sql:(id)arg2 args:(char *)arg3;
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(char *)arg4;
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2;
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(char *)arg3;
- (void)flush;
- (void)forceBatchStart;
- (void)groupInBatch:(id /* block */)arg1;
- (bool)groupInTransaction:(id /* block */)arg1;
- (bool)incrementalVacuum:(long long)arg1;
- (id)init;
- (bool)isBatchSuspended;
- (bool)isInBatch;
- (bool)isInTransaction;
- (bool)isTraced;
- (id)label;
- (id)lastError;
- (long long)lastInsertedRowID;
- (id /* block */)lockedHandler;
- (void)makeNextFlushFullSync;
- (bool)openAtURL:(id)arg1 sharedCache:(bool)arg2 error:(id*)arg3;
- (bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3;
- (bool)performWithFlags:(unsigned int)arg1 action:(id /* block */)arg2;
- (bool)performWithFlags:(unsigned int)arg1 action:(id /* block */)arg2 whenFlushed:(id /* block */)arg3;
- (id /* block */)postFlushHook;
- (id /* block */)preFlushHook;
- (id /* block */)profilingHook;
- (bool)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(id /* block */)arg3;
- (id)serialQueue;
- (void)setAutoRollbackHandler:(id /* block */)arg1;
- (void)setBatchTransactionType:(int)arg1;
- (void)setCrashIfUsedAfterClose:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setLockedHandler:(id /* block */)arg1;
- (void)setPostFlushHook:(id /* block */)arg1;
- (void)setPreFlushHook:(id /* block */)arg1;
- (void)setProfilingHook:(id /* block */)arg1;
- (void)setSqliteErrorHandler:(id /* block */)arg1;
- (void)setStatementCacheMaxCount:(unsigned long long)arg1;
- (void)setSynchronousMode:(unsigned long long)arg1;
- (void)setTraced:(bool)arg1;
- (bool)setUserVersion:(long long)arg1;
- (bool)setupPragmas;
- (id /* block */)sqliteErrorHandler;
- (unsigned long long)statementCacheMaxCount;
- (unsigned long long)synchronousMode;
- (id)url;
- (void)useBatchingOnTargetQueue:(id)arg1 delay:(double)arg2 changeCount:(int)arg3;
- (void)useBatchingOnTargetQueue:(id)arg1 withPolicyHandler:(id /* block */)arg2;
- (void)useBatchingWithDelay:(double)arg1 changeCount:(int)arg2;
- (void)useBatchingWithPolicyHandler:(id /* block */)arg1;
- (void)useSerialQueue;
- (void)useSerialQueueWithTarget:(id)arg1;
- (id)userVersion;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)itemIDWithSQL:(id)arg1;
- (id)numberWithSQL:(id)arg1;
- (bool)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (id)stringWithSQL:(id)arg1;

@end
