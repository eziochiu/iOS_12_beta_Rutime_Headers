/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {
    NSNumber * _anchor;
    id /* block */  _authorizationFilter;
    NSNumber * _deletedObjectsAnchor;
    NSMutableDictionary * _encodingOptions;
    _HKFilter * _filter;
    bool  _ignoreEntityClassAdditionalPredicateForEnumeration;
    bool  _improveJoinOrderingForStartDateIndexSelection;
    NSString * _lastSQL;
    HKObjectType * _objectType;
    HDProfile * _profile;
    NSSet * _restrictedSourceEntities;
    NSArray * _sortDescriptors;
    bool  _useLeftJoin;
}

@property (nonatomic, retain) NSNumber *anchor;
@property (nonatomic, copy) id /* block */ authorizationFilter;
@property (nonatomic, retain) NSNumber *deletedObjectsAnchor;
@property (nonatomic, retain) _HKFilter *filter;
@property (nonatomic) bool ignoreEntityClassAdditionalPredicateForEnumeration;
@property (nonatomic) bool improveJoinOrderingForStartDateIndexSelection;
@property (nonatomic, readonly, copy) NSString *lastSQL;
@property (nonatomic, readonly) HKObjectType *objectType;
@property (nonatomic, retain) NSSet *restrictedSourceEntities;
@property (nonatomic, copy) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (bool)_enumerateObjectsOnDatabase:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (id)_joinClauseForProperties:(id)arg1;
- (bool)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2;
- (bool)_prepareDescriptor:(id)arg1 error:(id*)arg2;
- (bool)_setColumnNamesAndSortOrderingsOnDescriptor:(id)arg1 error:(id*)arg2;
- (void)addEncodingOptionsFromDictionary:(id)arg1;
- (id)anchor;
- (id /* block */)authorizationFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedObjectsAnchor;
- (id)encodingOptionForKey:(id)arg1;
- (bool)enumerateIncludingDeletedObjects:(bool)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)enumerateWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)filter;
- (bool)ignoreEntityClassAdditionalPredicateForEnumeration;
- (bool)improveJoinOrderingForStartDateIndexSelection;
- (id)initWithEntityClass:(Class)arg1 profile:(id)arg2;
- (id)initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3;
- (id)lastSQL;
- (id)objectType;
- (id)restrictedSourceEntities;
- (void)setAnchor:(id)arg1;
- (void)setAuthorizationFilter:(id /* block */)arg1;
- (void)setDeletedObjectsAnchor:(id)arg1;
- (void)setEncodingOption:(id)arg1 forKey:(id)arg2;
- (void)setFilter:(id)arg1;
- (void)setIgnoreEntityClassAdditionalPredicateForEnumeration:(bool)arg1;
- (void)setImproveJoinOrderingForStartDateIndexSelection:(bool)arg1;
- (void)setRestrictedSourceEntities:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
