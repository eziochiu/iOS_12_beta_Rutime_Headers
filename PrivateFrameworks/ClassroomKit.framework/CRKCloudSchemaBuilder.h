/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudSchemaBuilder : NSObject <CRKCloudZoneSyncDelegate> {
    NSSet * _cloudStoringClasses;
    CKContainer * _container;
    CRKFileBasedKeyedDataStore * _store;
    CRKCloudZoneSyncEngine * _syncEngine;
    CKRecordZoneID * _zoneId;
}

@property (nonatomic, retain) NSSet *cloudStoringClasses;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, retain) CRKFileBasedKeyedDataStore *store;
@property (nonatomic, retain) CRKCloudZoneSyncEngine *syncEngine;
@property (nonatomic, retain) CKRecordZoneID *zoneId;

- (void).cxx_destruct;
- (void)buildSchemaWithCompletion:(id /* block */)arg1;
- (bool)cleanupFiles;
- (void)cleanupRecordZoneWithCompletion:(id /* block */)arg1;
- (void)cleanupWithCompletion:(id /* block */)arg1;
- (id)cloudStoringClasses;
- (id)container;
- (void)didReceiveCloudError:(id)arg1 fromZoneSyncEngine:(id)arg2;
- (id)initWithCloudSyncingClasses:(id)arg1 container:(id)arg2 store:(id)arg3;
- (void)processRemoteDelta:(id)arg1 fromZoneSyncEngine:(id)arg2;
- (void)setCloudStoringClasses:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setSyncEngine:(id)arg1;
- (void)setZoneId:(id)arg1;
- (id)skeletonRecordsForClass:(Class)arg1;
- (id)store;
- (id)syncEngine;
- (id)zoneId;

@end
