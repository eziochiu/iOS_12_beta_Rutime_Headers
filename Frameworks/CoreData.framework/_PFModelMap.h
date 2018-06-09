/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFModelMap : NSObject {
    NSArray * _allEntities;
    unsigned long long  _clientEntityCount;
    NSManagedObjectModel * _clientModel;
    NSDictionary * _entitiesByPath;
    unsigned long long  _entityCount;
    id * _indexedEntities;
    unsigned long long * _modelEntityCounts;
    NSArray * _models;
}

@property (nonatomic, readonly) NSArray *allEntities;
@property (nonatomic, readonly) unsigned long long clientEntityCount;
@property (nonatomic, readonly) NSManagedObjectModel *clientModel;
@property (nonatomic, readonly) NSDictionary *entitiesByPath;
@property (nonatomic, readonly) unsigned long long entityCount;
@property (nonatomic, readonly) NSArray *models;

+ (id)ancillaryModelFactoryClasses;

- (void)addManagedObjectModel:(id)arg1;
- (id)allEntities;
- (unsigned long long)clientEntityCount;
- (id)clientModel;
- (void)dealloc;
- (id)entitiesByPath;
- (id)entitiesForContext:(id)arg1 configuration:(id)arg2;
- (unsigned long long)entityCount;
- (id)entityForClassName:(id)arg1 inContext:(id)arg2;
- (id)entityForPath:(id)arg1;
- (id)entityForSlot:(unsigned long long)arg1;
- (id)initWithClientModel:(id)arg1;
- (id)models;
- (unsigned long long)slotForEntity:(id)arg1;

@end
