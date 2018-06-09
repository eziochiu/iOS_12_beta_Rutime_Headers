/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct _HDDeleteObjectDataDefn { bool x1; long long x2; long long x3; long long x4; })_deleteInfoForObjectWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (Class)_deletedEntityClass;
+ (id)_insertBaseDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
+ (bool)_insertDataObject:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 database:(id)arg4 insertedEntityID:(id*)arg5 error:(id*)arg6;
+ (id)_insertDataObject:(id)arg1 withProvenanceID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
+ (id)_objectWithPredicate:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_primitiveInsertDataObject:(id)arg1 insertionContext:(id)arg2 entityClass:(Class)arg3 provenanceEntityID:(long long)arg4 profile:(id)arg5 database:(id)arg6 error:(id*)arg7;
+ (bool)_removeObjectWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3;
+ (bool)_shouldReplaceExistingObject:(id)arg1 withObject:(id)arg2;
+ (id)_sourceBundleIdentifierForSourceEntities:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)_validateObjectsToInsert:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)acceptsObject:(id)arg1;
+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (Class)baseDataEntityClass;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (id)columnNamesForTimeOffset;
+ (id)columnsDefinition;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)dataEntityForObject:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (void)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(bool)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)entityEnumeratorWithProfile:(id)arg1;
+ (bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 associatedObjectHandler:(id /* block */)arg4;
+ (bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (void)insertDataObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)isBackedByTable;
+ (id)joinClausesForProperty:(id)arg1;
+ (bool)journalObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5 insertHandler:(id /* block */)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)objectWithID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)objectWithUUID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)participatesInInsertion;
+ (id)predicateForObjectsFromAppleWatchSources:(bool)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)arg1;
+ (long long)preferredEntityType;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (bool)requiresSampleTypePredicate;
+ (long long)shouldInsertObject:(id)arg1 sourceID:(id)arg2 profile:(id)arg3 objectToReplace:(id*)arg4 objectID:(id*)arg5 error:(id*)arg6;
+ (id)sourceIDForObjectID:(id)arg1 type:(long long)arg2 profile:(id)arg3 errorOut:(id*)arg4;
+ (id)sourceIDsForObjectsOfType:(long long)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (bool)supportsObjectMerging;

@end
