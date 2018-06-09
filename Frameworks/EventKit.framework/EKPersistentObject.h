/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentObject : NSObject <EKFrozenMeltedPair, EKProtocolObject> {
    NSMutableDictionary * _committedProperties;
    NSMutableSet * _dirtyProperties;
    EKEventStore * _eventStore;
    unsigned int  _flags;
    NSMutableDictionary * _loadedProperties;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    EKObjectID * _objectID;
}

@property (nonatomic, readonly) bool canBeConvertedToFullObject;
@property (nonatomic, retain) NSMutableDictionary *committedProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFrozen;
@property (nonatomic, readonly) bool isPartialObject;
@property (nonatomic, readonly) NSDictionary *preFrozenRelationshipObjects;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_relationForKey:(id)arg1;
+ (bool)_shouldRetainPropertyForKey:(id)arg1;
+ (id)defaultPropertiesToLoad;
+ (Class)frozenClass;
+ (Class)meltedClass;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)relations;

- (void).cxx_destruct;
- (void)_addDirtyProperty:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (bool)_areDefaultPropertiesLoaded;
- (void)_createLoadedPropertiesIfNeeded;
- (bool)_isNew;
- (bool)_isPendingDelete;
- (bool)_isPendingInsert;
- (bool)_isPendingUpdate;
- (bool)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2;
- (void)_loadDefaultPropertiesIfNeeded;
- (bool)_loadRelationForKey:(id)arg1 value:(id*)arg2;
- (id)_loadStringValueForKey:(id)arg1;
- (id)_loadedPropertyKeys;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id /* block */)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id /* block */)arg2;
- (id)_propertyForKey:(id)arg1;
- (void)_releaseLoadedProperties;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)_setDefaultPropertiesLoaded:(bool)arg1;
- (void)_setEventStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (void)_setPendingDelete:(bool)arg1;
- (void)_setPendingInsert:(bool)arg1;
- (void)_setPendingUpdate:(bool)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(bool)arg3;
- (void)_takeValues:(id)arg1 forKeys:(id)arg2;
- (void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (bool)canBeConvertedToFullObject;
- (id)changeSet;
- (void)changed;
- (id)committedProperties;
- (id)committedValueForKey:(id)arg1;
- (void)dealloc;
- (id)dirtyProperties;
- (id)dump;
- (int)entityType;
- (id)eventStore;
- (id)existingMeltedObject;
- (bool)existsInStore;
- (struct EKPersistentObject { Class x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; id x3; id x4; id x5; }*)frozenObject;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isCompletelyEqual:(id)arg1;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (bool)isFrozen;
- (bool)isNew;
- (bool)isPartialObject;
- (bool)isPropertyDirty:(id)arg1;
- (bool)isPropertyLoaded:(id)arg1;
- (bool)isPropertyUnavailable:(id)arg1;
- (id)meltedObjectInStore:(id)arg1;
- (id)objectID;
- (id)preFrozenRelationshipObjects;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (bool)primitiveBoolValueForKey:(id)arg1;
- (id)primitiveDataValueForKey:(id)arg1;
- (id)primitiveDateValueForKey:(id)arg1;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (int)primitiveIntValueForKey:(id)arg1;
- (id)primitiveNumberValueForKey:(id)arg1;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)primitiveURLValueForKey:(id)arg1;
- (bool)pushDirtyProperties:(id*)arg1;
- (bool)refresh;
- (void)reset;
- (void)rollback;
- (void)saved;
- (void)setCommittedProperties:(id)arg1;
- (void)takeValues:(id)arg1 forKeys:(id)arg2;
- (void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (id)uniqueIdentifier;
- (void)unloadPropertyForKey:(id)arg1;

@end
