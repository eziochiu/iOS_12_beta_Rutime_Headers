/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImportZoneContext : NSObject {
    NSSet * _deletedObjectIDs;
    NSDictionary * _deletedRecordTypeToRecordID;
    NSArray * _deletedRelationships;
    NSURL * _fileBackedFuturesDirectory;
    NSArray * _importOperations;
    NSArray * _invalidatedPendingRelationships;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSArray * _modifiedRecords;
    NSArray * _pendingRelationshipsToTry;
    NSMutableDictionary * _recordTypeToRecordNameToObjectID;
    NSMutableDictionary * _recordTypeToUnresolvedRecordNames;
    PFCloudKitMirroredRelationshipCache * _relCache;
    NSArray * _updatedRecords;
    NSMutableArray * _updatedRelationships;
}

@property (nonatomic, readonly) NSSet *deletedObjectIDs;
@property (nonatomic, readonly) NSArray *deletedRelationships;
@property (nonatomic, readonly) NSURL *fileBackedFuturesDirectory;
@property (nonatomic, readonly) NSArray *importOperations;
@property (nonatomic, readonly) NSArray *invalidatedPendingRelationships;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSArray *modifiedRecords;
@property (nonatomic, readonly) NSArray *pendingRelationshipsToTry;
@property (nonatomic, readonly) PFCloudKitMirroredRelationshipCache *relCache;
@property (nonatomic, readonly) NSArray *updatedRelationships;

- (void)addMirroredRelationshipToLink:(id)arg1;
- (void)addObjectID:(id)arg1 toCache:(id)arg2 andUniqueIdentifier:(id)arg3;
- (void)addObjectID:(id)arg1 toCache:(id)arg2 forRecordWithType:(id)arg3 andUniqueIdentifier:(id)arg4;
- (void)addUnresolvedRecordName:(id)arg1 forRecordType:(id)arg2 toCache:(id)arg3;
- (void)dealloc;
- (id)deletedObjectIDs;
- (id)deletedRelationships;
- (id)fileBackedFuturesDirectory;
- (id)importOperations;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4 relationshipCache:(id)arg5;
- (bool)initializeCachesWithManagedObjectContext:(id)arg1 andObservedStore:(id)arg2 error:(id*)arg3;
- (id)invalidatedPendingRelationships;
- (id)mirroringOptions;
- (id)modifiedRecords;
- (id)objectIDForRecordWithName:(id)arg1 ofType:(id)arg2;
- (id)pendingRelationshipsToTry;
- (bool)populateUnresolvedIDsWithManagedObjectContext:(id)arg1 error:(id*)arg2;
- (void)registerObjectID:(id)arg1 forInsertedRecord:(id)arg2;
- (id)relCache;
- (id)updatedRelationships;

@end
