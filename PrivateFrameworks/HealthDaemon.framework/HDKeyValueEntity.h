/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDKeyValueEntity : HDHealthEntity

+ (long long)_deviceLocalCategory;
+ (bool)_doInsertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(long long)arg5 provenance:(long long)arg6 updatePolicy:(long long)arg7 database:(id)arg8 error:(id*)arg9;
+ (Class)_entityClassForKeyValueCategory:(long long)arg1;
+ (bool)_enumerateKeyValueEntitiesInCategory:(long long)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (bool)_insertCodableCategoryDomainDictionary:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_insertCodableTimestampedKeyValuePairs:(id)arg1 domain:(id)arg2 category:(long long)arg3 provenance:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)_insertCodableTimestampedKeyValuePairs:(id)arg1 domain:(id)arg2 category:(long long)arg3 provenance:(long long)arg4 updatePolicy:(long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 database:(id)arg7 error:(id*)arg8;
+ (bool)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 updatePolicy:(long long)arg6 profile:(id)arg7 error:(id*)arg8;
+ (bool)_insertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(long long)arg5 provenance:(long long)arg6 updatePolicy:(long long)arg7 profile:(id)arg8 error:(id*)arg9;
+ (id)_modDateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)_predicateForCategory:(long long)arg1;
+ (id)_predicateForDomain:(id)arg1;
+ (id)_predicateForKey:(id)arg1;
+ (id)_predicateForKeys:(id)arg1;
+ (id)_predicateForProvenance:(long long)arg1;
+ (id)_rawValueForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)_readRawValuesInCategory:(long long)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (id)_safeDomainWithDomain:(id)arg1;
+ (bool)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (bool)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (long long)_shouldUpdateWithPolicy:(long long)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 modificationDate:(double)arg5 database:(id)arg6 error:(id*)arg7;
+ (bool)_validateEntityClassForCategory:(long long)arg1;
+ (long long)_validateModificationDatePolicyWithKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 modificationDate:(double)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)_valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
+ (id)allValuesForDomain:(id)arg1 category:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)columnsDefinition;
+ (id)dataForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)databaseTable;
+ (id)dateComponentsForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)dateForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateValuesForDomain:(id)arg1 category:(long long)arg2 keys:(id)arg3 profile:(id)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
+ (id)generateNewDatabaseIdentifier;
+ (id)modificationDatesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)numberForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)okemoZursObjectAnchorWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)persistDatabaseIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)persistDatabaseIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)propertyForSyncProvenance;
+ (id)quantityForKey:(id)arg1 unit:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 entity:(id*)arg6 error:(id*)arg7;
+ (bool)removeValuesForDomain:(id)arg1 category:(long long)arg2 keys:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)retrieveDatabaseIdentifierCreationDateFromProfile:(id)arg1 error:(id*)arg2;
+ (id)retrieveDatabaseIdentifierFromDatabase:(id)arg1 error:(id*)arg2;
+ (id)retrieveDatabaseIdentifierFromProfile:(id)arg1 error:(id*)arg2;
+ (bool)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setDate:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setDateComponents:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setNumber:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setOkemoZursObjectAnchor:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 domain:(id)arg4 category:(long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)setString:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (bool)setValuesWithDictionary:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)stringForKey:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 entity:(id*)arg5 error:(id*)arg6;
+ (id)uniquedColumns;
+ (id)valuesForKeys:(id)arg1 domain:(id)arg2 category:(long long)arg3 profile:(id)arg4 error:(id*)arg5;

@end
