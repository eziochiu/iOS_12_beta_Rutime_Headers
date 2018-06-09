/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {
    NSMutableDictionary * _assetPathToSafeSaveURL;
    NSMutableArray * _encounteredErrors;
    unsigned long long  _totalAssetBytes;
    NSMutableArray * _updatedRecords;
}

@property (nonatomic, readonly) NSDictionary *assetPathToSafeSaveURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *encounteredErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalAssetBytes;
@property (nonatomic, readonly) NSArray *updatedRecords;

- (void)addUpdatedRecord:(id)arg1;
- (id)assetPathToSafeSaveURL;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (void)cloudKitSerializer:(id)arg1 resolvedPendingRelationship:(id)arg2;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;
- (void)dealloc;
- (void)doWorkWithCompletion:(id /* block */)arg1;
- (id)encounteredErrors;
- (void)fetchFinishedForRecord:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (void)fetchOperationFinishedWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchRecordsRequest;
- (id)initWithOptions:(id)arg1 metadata:(id)arg2 request:(id)arg3;
- (id)newMirroringResultByApplyingAccumulatedChanges:(id*)arg1;
- (void)removeDownloadedAssetFiles;
- (unsigned long long)totalAssetBytes;
- (id)updatedRecords;

@end
