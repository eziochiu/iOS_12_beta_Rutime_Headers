/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleSeriesEntity : HDQuantitySampleEntity

+ (bool)_deleteHFDSeriesIfFoundForPersistentID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_insertDataObject:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(id*)arg4;
+ (long long)_insertionEra;
+ (id)_propertiesToLeftJoin;
+ (id)_quantitySampleWithID:(id)arg1 canBeUnfrozen:(bool)arg2 profile:(id)arg3 error:(id*)arg4;
+ (void)_setStatistics:(id)arg1 cumulativeQuantitySeriesSample:(id)arg2;
+ (void)_setStatistics:(id)arg1 discreteQuantitySeriesSample:(id)arg2;
+ (bool)_updateFrozenEntityToMatchReplacedUnfrozenEntity:(id)arg1 unfrozenSeriesUUID:(id)arg2 unfrozenSeriesHFDKey:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)additionalPredicateForEnumeration;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (bool)deleteSeriesFromHFDWithKey:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)deleteSeriesWithID:(id)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (Class)entityClassForEnumeration;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateDataWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)enumerateDataWithTransaction:(id)arg1 HFDKey:(long long)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (bool)insertValues:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)performSeriesWriteTransactionWithProfile:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeSQL;
+ (id)quantitySampleSeriesEntitiesForAutoFreezeWithTransaction:(id)arg1 error:(id*)arg2;
+ (bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)supportsObjectMerging;
+ (void)unitTesting_updateInsertionEra;

- (id)HFDKeyWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)_canAddDatumInDatabase:(id)arg1 error:(id*)arg2;
- (id)_frozenUUIDForUnfrozenQuantitySample:(id)arg1 HFDKey:(long long)arg2 seriesFirstTime:(double)arg3 seriesLastTime:(double)arg4 frozenCount:(long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id*)arg8;
- (bool)_getFirstTimeLastTimeCountWithDatabase:(id)arg1 HFDKey:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)_insertValues:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_isSeriesInDatabase:(id)arg1;
- (id)_mergeCodableSeriesDataFromQuantitySampleSeries:(id)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_statisticsWithHFDKey:(long long)arg1 statisticsCalculator:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)countForSeriesWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (bool)enumerateDataInInterval:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateDataWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)freezeWithDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)hasSeriesDataWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)insertValues:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)primitiveInsertValues:(id)arg1 HFDKey:(long long)arg2 database:(id)arg3 error:(id*)arg4;
- (bool)startTimeEndTimeCountForSeriesWithTransaction:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (void)willDeleteFromDatabase:(id)arg1;

@end
