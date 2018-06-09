/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {
    NSMutableDictionary * _assetPathToSafeSaveURL;
    NSArray * _changedRecordZoneIDs;
    NSMutableArray * _encounteredErrors;
    NSCKImportOperation * _importOperation;
    NSMutableDictionary * _recordTypeToDeletedRecordID;
    NSMutableArray * _resolvedRelationships;
    unsigned long long  _totalAssetBytes;
    NSMutableArray * _updatedRecords;
}

@property (nonatomic, readonly) NSDictionary *assetPathToSafeSaveURL;
@property (nonatomic, readonly) NSArray *changedRecordZoneIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *encounteredErrors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCKImportOperation *importOperation;
@property (nonatomic, readonly) NSDictionary *recordTypeToDeletedRecordID;
@property (nonatomic, readonly) NSArray *resolvedRelationships;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalAssetBytes;
@property (nonatomic, readonly) NSArray *updatedRecords;

- (void)addDeletedRecordID:(id)arg1 ofType:(id)arg2;
- (void)addUpdatedRecord:(id)arg1;
- (id)assetPathToSafeSaveURL;
- (id)changedRecordZoneIDs;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (void)cloudKitSerializer:(id)arg1 resolvedPendingRelationship:(id)arg2;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)doWorkWithCompletion:(id /* block */)arg1;
- (id)encounteredErrors;
- (void)fetchFinishedForZoneWithID:(id)arg1 serverChangeToken:(id)arg2 error:(id)arg3;
- (void)fetchOperationFinishedWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)importOperation;
- (id)initWithChangedRecordZoneIDs:(id)arg1 options:(id)arg2 metadata:(id)arg3 request:(id)arg4;
- (id)newMirroringResultByApplyingAccumulatedChanges:(id*)arg1;
- (id)recordTypeToDeletedRecordID;
- (void)removeDownloadedAssetFiles;
- (id)resolvedRelationships;
- (unsigned long long)totalAssetBytes;
- (id)updatedRecords;

@end
