/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeBuilder : NSObject {
    NSMutableDictionary * _attributesByOID;
    PHPersistentChangeToken * _changeToken;
    NSManagedObjectContext * _context;
    NSMutableSet * _deletedObjectIDs;
    NSMutableDictionary * _deletedUuidsByObjectId;
    NSMutableSet * _insertedObjectIDs;
    NSMutableDictionary * _relationshipsByOID;
    bool  _unknownMergeEvent;
    NSMutableSet * _updatedObjectIDs;
}

@property (nonatomic, readonly) NSMutableDictionary *attributesByOID;
@property (nonatomic, readonly) NSMutableSet *deletedObjectIDs;
@property (nonatomic, readonly) NSMutableDictionary *deletedUuidsByObjectId;
@property (nonatomic, readonly) NSMutableSet *insertedObjectIDs;
@property (nonatomic, readonly) NSMutableDictionary *relationshipsByOID;
@property (getter=isUnknownMergeEvent, nonatomic) bool unknownMergeEvent;
@property (nonatomic, readonly) NSMutableSet *updatedObjectIDs;

+ (id)changeWithManagedObjectContext:(id)arg1 changeToken:(id)arg2 builderBlock:(id /* block */)arg3;
+ (id)changeWithManagedObjectContext:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (void)_recordChangedProperties:(id)arg1 forObjectID:(id)arg2;
- (void)_recordDeleteChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (void)_recordInsertChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (void)_recordUpdateChange:(id)arg1 withUniquedObjectID:(id)arg2;
- (id)_uuidForChange:(id)arg1 uniquedObjectID:(id)arg2;
- (id)attributesByOID;
- (id)buildChange;
- (id)deletedObjectIDs;
- (id)deletedUuidsByObjectId;
- (id)initWithManagedObjectContext:(id)arg1 changeToken:(id)arg2;
- (id)insertedObjectIDs;
- (bool)isUnknownMergeEvent;
- (void)recordChange:(id)arg1;
- (void)recordTransaction:(id)arg1;
- (id)relationshipsByOID;
- (void)setUnknownMergeEvent:(bool)arg1;
- (id)updatedObjectIDs;

@end
