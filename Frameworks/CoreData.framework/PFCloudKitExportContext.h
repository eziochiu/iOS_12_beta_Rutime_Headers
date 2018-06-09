/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitExportContext : NSObject {
    unsigned long long  _currentBytes;
    NSMutableSet * _currentExportedObjects;
    NSMutableSet * _currentRecordIDs;
    NSMutableArray * _currentRecords;
    PFCloudKitSerializer * _currentSerializer;
    NSString * _exportMetadataIdentifier;
    NSPersistentHistoryToken * _finalHistoryToken;
    NSNumber * _latestTransactionNumber;
    NSMutableArray * _operations;
    PFCloudKitExporterOptions * _options;
    PFCloudKitMirroredRelationshipCache * _relCache;
    NSArray * _writtenAssetURLs;
}

@property (nonatomic, readonly) NSString *exportMetadataIdentifier;
@property (nonatomic, readonly) NSPersistentHistoryToken *finalHistoryToken;
@property (nonatomic, readonly) NSArray *operations;
@property (nonatomic, readonly) PFCloudKitMirroredRelationshipCache *relCache;
@property (nonatomic, readonly) NSArray *writtenAssetURLs;

- (void)addOperationForCurrentState:(id)arg1 withExportMetadata:(id)arg2;
- (void)dealloc;
- (id)exportMetadataIdentifier;
- (id)finalHistoryToken;
- (id)initWithOptions:(id)arg1;
- (bool)modifyRecordsOperationWithID:(id)arg1 finishedForStore:(id)arg2 withSavedRecord:(id)arg3 deletedRecordIDs:(id)arg4 operationError:(id)arg5 managedObjectContext:(id)arg6 error:(id*)arg7;
- (id)operations;
- (bool)persistMetadataChangesIfNecessary:(id)arg1 error:(id*)arg2;
- (bool)processAnalyzerContext:(id)arg1 withStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4;
- (void)processDeletedRecordID:(id)arg1 withExportMetadata:(id)arg2 inContext:(id)arg3;
- (bool)processObjectState:(id)arg1 withSerializer:(id)arg2 analyzerContext:(id)arg3 store:(id)arg4 managedObjectContext:(id)arg5 exportMetadata:(id)arg6 error:(id*)arg7;
- (bool)purgeExportMetadataFromStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)relCache;
- (void)resetCurrentState;
- (id)writtenAssetURLs;

@end
