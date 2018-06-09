/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID * _deletedRecordZoneID;
}

@property (nonatomic, readonly) CKRecordZoneID *deletedRecordZoneID;

- (void)dealloc;
- (id)deletedRecordZoneID;
- (id)description;
- (void)doWorkWithCompletion:(id /* block */)arg1;
- (id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 metadata:(id)arg3 request:(id)arg4;
- (bool)wipeCloudMetadataFromMirroredObjects:(id*)arg1;

@end
