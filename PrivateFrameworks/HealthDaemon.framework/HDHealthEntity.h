/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>

+ (bool)_isNilDatabase:(id)arg1 error:(id*)arg2;
+ (id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 limit:(unsigned long long)arg4 anchorProperty:(id)arg5;
+ (id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(unsigned long long)arg5 anchorProperty:(id)arg6;
+ (unsigned long long)_transactionOptionsForWriting:(bool)arg1;
+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)columnNamesForTimeOffset;
+ (id)columnsDefinition;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)createTableSQL;
+ (id)databaseName;
+ (bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(id /* block */)arg9;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 orderingProperties:(id)arg5 orderingDirections:(id)arg6 limit:(unsigned long long)arg7 lastSyncAnchor:(long long*)arg8 healthDatabase:(id)arg9 error:(id*)arg10 block:(id /* block */)arg11;
+ (bool)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)insertOrReplaceEntity:(bool)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id*)arg4 bindingHandler:(id /* block */)arg5;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 limit:(unsigned long long)arg6 healthDatabase:(id)arg7 error:(id*)arg8;
+ (bool)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
+ (bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
+ (bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3 inaccessibilityHandler:(id /* block */)arg4;
+ (id)predicateForSyncWithPredicate:(id)arg1 session:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)protectedDatabaseName;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (bool)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 bindingHandler:(id /* block */)arg5;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long*)arg1;

- (id)dateForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)foreignKeyEntity:(Class)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)setDate:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)setForeignKeyEntity:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)setString:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)stringForProperty:(id)arg1 healthDatabase:(id)arg2 error:(out id*)arg3;
- (id)stringForProperty:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;

@end
