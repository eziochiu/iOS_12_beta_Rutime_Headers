/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLModel : NSStoreMapping {
    unsigned long long  _brokenHashVersion;
    NSString * _configuration;
    NSMutableArray * _entities;
    NSKnownKeysDictionary * _entitiesByName;
    id * _entityDescriptionToSQLMap;
    unsigned int  _entityIDOffset;
    bool  _hasVirtualToOnes;
    unsigned int  _lastEntityID;
    bool  _modelHasPrecomputedKeyOrder;
    NSManagedObjectModel * _mom;
    bool  _retainLeopardStyleDictionaries;
}

- (void)_addIndexedEntity:(id)arg1;
- (id)_entityMapping;
- (unsigned int)_entityOffset;
- (bool)_generateModel:(id)arg1 error:(id*)arg2;
- (bool)_modelHasPrecomputedKeyOrder;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (void)_recordHasVirtualToOnes;
- (bool)_retainHashHack;
- (id)_sqlEntityWithRenamingIdentifier:(id)arg1;
- (bool)_useLeopardStyleHashing;
- (bool)_useSnowLeopardStyleHashing;
- (id)configurationName;
- (void)dealloc;
- (id)entities;
- (id)entitiesByName;
- (id)entityForID:(unsigned long long)arg1;
- (unsigned long long)entityIDForName:(id)arg1;
- (id)entityNamed:(id)arg1;
- (void)finalize;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(bool)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(bool)arg3 brokenHashVersion:(unsigned long long)arg4;
- (id)managedObjectModel;

@end
