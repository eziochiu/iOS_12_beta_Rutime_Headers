/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataEntityDeletionContext : NSObject {
    bool  _callWillDeleteFromDatabase;
    HDSQLiteDatabase * _database;
    NSMutableDictionary * _deleteStatementsByClassName;
    unsigned long long  _deletedObjectCount;
    NSMutableDictionary * _deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableSet * _deletedObjectTypeSet;
    bool  _insertDeletedObjects;
    NSNumber * _lastInsertedDeletedObjectPersistentID;
    NSMutableDictionary * _localSourceIDsByOriginalSourceID;
    HDProfile * _profile;
    id /* block */  _recursiveDeleteAuthorizationBlock;
}

@property (nonatomic) bool callWillDeleteFromDatabase;
@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly) unsigned long long deletedObjectCount;
@property (nonatomic, readonly, copy) NSSet *deletedObjectTypeSet;
@property (nonatomic) bool insertDeletedObjects;
@property (nonatomic, readonly) NSNumber *lastInsertedDeletedObjectPersistentID;
@property (nonatomic, copy) id /* block */ recursiveDeleteAuthorizationBlock;

- (void).cxx_destruct;
- (bool)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id*)arg4;
- (id)_localSourceIDForSourceID:(id)arg1 error:(id*)arg2;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id*)arg2;
- (bool)callWillDeleteFromDatabase;
- (id)database;
- (bool)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id*)arg3;
- (bool)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id*)arg7;
- (unsigned long long)deletedObjectCount;
- (id)deletedObjectTypeSet;
- (void)finish;
- (id)initWithProfile:(id)arg1 database:(id)arg2;
- (bool)insertDeletedObjects;
- (id)lastInsertedDeletedObjectPersistentID;
- (id /* block */)recursiveDeleteAuthorizationBlock;
- (void)setCallWillDeleteFromDatabase:(bool)arg1;
- (void)setInsertDeletedObjects:(bool)arg1;
- (void)setRecursiveDeleteAuthorizationBlock:(id /* block */)arg1;

@end
