/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImportDatabaseContext : NSObject {
    NSMutableSet * _changedRecordZoneIDs;
    NSMutableSet * _deletedRecordZoneIDs;
    NSSet * _interestingZoneIDs;
    NSMutableSet * _purgedRecordZoneIDs;
    CKServerChangeToken * _updatedChangeToken;
}

@property (nonatomic, readonly) NSSet *changedRecordZoneIDs;
@property (nonatomic, readonly) NSSet *deletedRecordZoneIDs;
@property (nonatomic, readonly, copy) NSSet *interestingZoneIDs;
@property (nonatomic, readonly) NSSet *purgedRecordZoneIDs;
@property (nonatomic, retain) CKServerChangeToken *updatedChangeToken;

- (id)changedRecordZoneIDs;
- (void)dealloc;
- (id)deletedRecordZoneIDs;
- (id)description;
- (bool)hasWorkToDo;
- (id)initWithInterestingZoneIDs:(id)arg1;
- (id)interestingZoneIDs;
- (id)purgedRecordZoneIDs;
- (void)setUpdatedChangeToken:(id)arg1;
- (id)updatedChangeToken;
- (void)zoneWithIDChanged:(id)arg1;
- (void)zoneWithIDWasDeleted:(id)arg1;
- (void)zoneWithIDWasPurged:(id)arg1;

@end
