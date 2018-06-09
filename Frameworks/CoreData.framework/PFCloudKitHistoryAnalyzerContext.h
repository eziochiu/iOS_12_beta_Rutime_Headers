/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitHistoryAnalyzerContext : NSObject {
    NSMutableSet * _allDeletedRecordIDs;
    NSSet * _deletedRecordIDs;
    NSDictionary * _entityNameToObjectIDs;
    bool  _isFinished;
    NSMutableDictionary * _objectIDToDeletedRecordID;
    NSMutableDictionary * _objectIDToState;
    NSMutableSet * _processedTransactionIDs;
    NSArray * _sortedStates;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly) NSSet *allDeletedRecordIDs;
@property (nonatomic, readonly) NSSet *deletedRecordIDs;
@property (nonatomic, readonly) NSDictionary *entityNameToObjectIDs;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) NSDictionary *objectIDToDeletedRecordID;
@property (nonatomic, readonly) NSDictionary *objectIDToState;
@property (nonatomic, readonly) NSSet *processedTransactionIDs;
@property (nonatomic, readonly) NSArray *sortedStates;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;

- (id)allDeletedRecordIDs;
- (void)dealloc;
- (id)deletedRecordIDs;
- (id)entityNameToObjectIDs;
- (void)finishProcessing;
- (id)initWithZone:(id)arg1;
- (bool)isFinished;
- (id)objectIDToDeletedRecordID;
- (id)objectIDToState;
- (void)processChange:(id)arg1;
- (void)processTransaction:(id)arg1 fromImporter:(bool)arg2;
- (id)processedTransactionIDs;
- (void)reset;
- (id)sortedStates;
- (id)zoneID;

@end
