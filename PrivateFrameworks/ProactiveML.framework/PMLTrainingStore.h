/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLTrainingStore : NSObject {
    bool  _allowSkipSchema;
    _PASSqliteDatabase * _db;
    NSString * _dbPath;
    id  _lockStateNotificationToken;
}

+ (id)getSchema:(unsigned long long*)arg1;
+ (id)inMemoryStoreForTesting;

- (void).cxx_destruct;
- (void)_loadSessionsForModel:(id)arg1 since:(double)arg2 positiveRowId:(unsigned long long)arg3 negativeRowId:(unsigned long long)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(bool)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 ignoreIfSingular:(bool)arg9 block:(id /* block */)arg10;
- (long long)_migrate;
- (long long)_migrateTo:(id)arg1;
- (long long)_openDbIfUnlocked;
- (void)_registerUnlockHandler;
- (bool)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned long long)arg2 inTransactionOnDb:(id)arg3;
- (unsigned long long)_sessionDescriptorIdFor:(id)arg1;
- (bool)_truncateDbIfCorrupted;
- (void)_unregisterUnlockHandler;
- (id)allStoredPlanIds;
- (void)closeDbForTesting;
- (bool)createSnapshot:(id)arg1;
- (id)dbForTesting;
- (void)dealloc;
- (void)deleteAllTrainingLogs;
- (void)deleteReceivedPlan:(struct NSString { Class x1; }*)arg1;
- (void)deleteSessionsWithBundleId:(id)arg1;
- (void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2;
- (void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2;
- (void)enumerateReceivedPlansUsingBlock:(id /* block */)arg1;
- (void)enumerateSessionDescriptorsUsingBlock:(id /* block */)arg1;
- (id)getSchema:(unsigned long long*)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 allowSkipSchema:(bool)arg2;
- (bool)isDbOpen;
- (void)limitNegativeSessionsWithSessionDescriptor:(id)arg1 negativeLabel:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (void)limitSessionsWithSessionDescriptor:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadRecentTrainingLogForPlan:(struct NSString { Class x1; }*)arg1;
- (void)loadSessionsForModel:(id)arg1 since:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 block:(id /* block */)arg5;
- (void)loadSessionsForModel:(id)arg1 since:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 ignoreIfSingular:(bool)arg7 block:(id /* block */)arg8;
- (void)loadSessionsForModel:(id)arg1 withSkew:(double)arg2 block:(id /* block */)arg3;
- (void)loadSessionsFromTupleDescriptors:(id)arg1 model:(id)arg2 since:(double)arg3 onlyAppleInternal:(bool)arg4 positiveLabel:(unsigned long long)arg5 ignoreIfSingular:(bool)arg6 numberOfRows:(unsigned long long)arg7 numberOfColumns:(unsigned long long)arg8 block:(id /* block */)arg9;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 since:(double)arg3 onlyAppleInternal:(bool)arg4 labelFilter:(id)arg5;
- (id)sessionStats;
- (id)sessionStatsForSessionDescriptor:(id)arg1;
- (void)storeLogEntryForPlan:(struct NSString { Class x1; }*)arg1 model:(id)arg2 serverIteration:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)storeReceivedPlan:(id)arg1 planId:(id)arg2;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(bool)arg7;
- (void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4;
- (void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 bundleId:(id)arg5 domainId:(id)arg6 itemIds:(id)arg7 isAppleInternal:(bool)arg8;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(id /* block */)arg2;
- (void)vacuumDb;

@end
