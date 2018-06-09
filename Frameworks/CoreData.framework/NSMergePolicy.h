/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergePolicy : NSObject {
    void * _reserved2;
    void * _reserved3;
    unsigned long long  _type;
}

@property (readonly) unsigned long long mergeType;

+ (bool)accessInstanceVariablesDirectly;
+ (id)errorMergePolicy;
+ (void)initialize;
+ (id)mergeByPropertyObjectTrumpMergePolicy;
+ (id)mergeByPropertyStoreTrumpMergePolicy;
+ (id)overwriteMergePolicy;
+ (id)rollbackMergePolicy;

- (bool)_byPropertyObjectTrumpMergeObject:(id)arg1 ontoObject:(id)arg2 writeAll:(bool)arg3;
- (bool)_byPropertyObjectTrumpResolveConstraintConflict:(id)arg1;
- (bool)_byPropertyStoreTrumpResolveConstraintConflict:(id)arg1;
- (bool)_didSomethingElseResolveDBConflict:(id)arg1;
- (id)_electDesignatedOriginalForConflict:(id)arg1;
- (id)_electNewlyInsertedDesignatedOriginalFrom:(id)arg1;
- (id)_electPreexistingDesignatedOriginalFrom:(id)arg1;
- (bool)_eliminateContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (bool)_mergeContendersResolveConstraintConflict:(id)arg1 withKeeper:(id)arg2;
- (void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeToManyRelationshipsForConstraintConflict:(id)arg1 withDesignatedOriginal:(id)arg2;
- (void)_mergeToManyRelationshipsForObject:(id)arg1 ontoObject:(id)arg2;
- (void)_mergeToManyUnionRelationshipsForConstraintConflict:(id)arg1;
- (void)_mergeToManyUnionRelationshipsForObject:(id)arg1 andObject:(id)arg2;
- (void)_mergeValuesForObject:(id)arg1 ontoObject:(id)arg2;
- (bool)_overwriteResolveConstraintConflict:(id)arg1;
- (bool)_resolveContextConstraintConflict:(id)arg1;
- (bool)_rollbackResolveConstraintConflict:(id)arg1;
- (id)_unresolvedConflictFor:(id)arg1;
- (id)_unresolvedObjectsForContextConflict:(id)arg1;
- (bool)_valuesOnObject:(id)arg1 matchAgainstValues:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMergeType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(bool)arg5;
- (unsigned long long)mergeType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)resolveConflict:(id)arg1;
- (bool)resolveConflicts:(id)arg1 error:(id*)arg2;
- (bool)resolveConstraintConflict:(id)arg1 error:(id*)arg2;
- (bool)resolveConstraintConflicts:(id)arg1 error:(id*)arg2;
- (bool)resolveOptimisticLockingVersionConflicts:(id)arg1 error:(id*)arg2;
- (unsigned long long)type;

@end
