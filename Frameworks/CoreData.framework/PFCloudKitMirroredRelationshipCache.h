/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitMirroredRelationshipCache : NSObject {
    NSMutableSet * _accessedMtmKeys;
    NSMutableDictionary * _ckRecordNameToMirroredRelationship;
    NSMutableArray * _deletedMirroredRelationships;
    NSMutableArray * _deletedPendingRelationships;
    bool  _initialized;
    NSMutableArray * _insertedMirroredRelationships;
    NSManagedObjectModel * _model;
    NSMutableDictionary * _mtmKeyToMirroredRelationship;
    NSMutableArray * _pendingMirroredRelationships;
    NSMutableDictionary * _recordNameToMirroredRelationships;
    NSMutableDictionary * _recordNameToPendingRelationships;
    NSMutableArray * _updatedMirroredRelationships;
}

@property (nonatomic, readonly) NSArray *deletedMirroredRelationships;
@property (nonatomic, readonly) NSArray *pendingMirroredRelationships;

- (void)_cacheMirroredRelationship:(id)arg1 noteAccess:(bool)arg2;
- (id)_mtmKeyForObjectWithRecordName:(id)arg1 relatedToObjectWithRecordName:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4;
- (id)addMirroredManyToMany:(id)arg1;
- (void)applyChangesToSQLCore:(id)arg1;
- (void)dealloc;
- (void)deleteMirroredRelationshipWithCKRecordID:(id)arg1;
- (id)deletedMirroredRelationships;
- (id)init;
- (void)initializeForRecordNames:(id)arg1 mirroredRelationshipRecordNames:(id)arg2 withSQLCore:(id)arg3;
- (void)markAccessedRelationshipsUploadedAndPrune;
- (id)mirroredRelationshipForKey:(id)arg1;
- (id)mirroredRelationshipForManyToMany:(id)arg1;
- (id)mtmKeyForObjectWithRecordName:(id)arg1 relatedToObjectWithRecordName:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4;
- (void)noteUpdateForMirroredRelationship:(id)arg1;
- (id)pendingMirroredRelationships;
- (void)processDeleteForObjectWithRecordName:(id)arg1 andObjectID:(id)arg2;
- (id)purgeMirroredRelationshipsForDeletedRecordIDs:(id)arg1;

@end
