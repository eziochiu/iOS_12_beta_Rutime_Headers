/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {
    CKRecordZoneID * _purgedRecordZoneID;
}

@property (nonatomic, readonly) CKRecordZoneID *purgedRecordZoneID;

- (void)dealloc;
- (id)description;
- (void)doWorkWithCompletion:(id /* block */)arg1;
- (id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 metadata:(id)arg3 request:(id)arg4;
- (id)purgedRecordZoneID;
- (bool)wipeAllCloudDataAndPurgeHistoryToken:(bool)arg1 error:(id*)arg2;

@end
