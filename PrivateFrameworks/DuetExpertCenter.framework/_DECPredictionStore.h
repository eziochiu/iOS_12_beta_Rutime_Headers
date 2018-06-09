/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionStore : NSObject {
    _PASSqliteDatabase * _db;
    NSConditionLock * _initLock;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _queueLock;
    NSMutableArray * _queuedResults;
    _DECPredictionStoreReader * _reader;
}

+ (id)_initializeDatabase:(id)arg1 newDatabaseCreated:(bool*)arg2 simulateCrash:(bool)arg3;
+ (bool)_isDatabaseIntegrityViolated:(id)arg1;
+ (id)_recreateCorruptDatabase:(id)arg1 simulateCrash:(bool)arg2;

- (void).cxx_destruct;
- (void)_blockUntilReady;
- (void)_initStoreWithPath:(id)arg1 shouldSimulateCrash:(bool)arg2;
- (void)_migrate;
- (id)_migrationPlan;
- (void)_writeResult:(id)arg1;
- (void)close;
- (id)dateOfLastPredictionForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (void)dealloc;
- (void)flushQueue;
- (id)init;
- (id)initWithInMemoryStore;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 shouldSimulateCrash:(bool)arg2;
- (id)initWithSqliteDatabase:(id)arg1;
- (long long)insertResultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 result:(id)arg3;
- (void)queuedInsertResultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 result:(id)arg3;
- (id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)schemaVersion;

@end
