/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionLogMigrator : NSObject {
    NSManagedObjectModel * _dstModel;
    NSString * _localPeerID;
    NSMappingModel * _mappingModel;
    NSDictionary * _mappingsByEntityName;
    NSSet * _removedEntities;
    NSManagedObjectModel * _srcModel;
    bool  _throttleLogs;
}

@property (readonly) bool throttleLogs;

- (id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)arg1;
- (id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3;
- (id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2;
- (void)dealloc;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4;
- (bool)migrateBaselineFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3;
- (bool)migrateTransactionLogFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3;
- (bool)migrateTransactionLogsForStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 error:(id*)arg4;
- (void)populateMappingsByEntityName;
- (bool)throttleLogs;

@end
