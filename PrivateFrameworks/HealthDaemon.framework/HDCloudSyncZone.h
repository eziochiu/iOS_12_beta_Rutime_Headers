/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncZone : NSObject {
    bool  _hasFutureSchemaRecord;
    HDCloudSyncMasterRecord * _masterRecord;
    long long  _purpose;
    HDCloudSyncRepository * _repository;
    NSMutableArray * _sequenceRecords;
    HDCloudSyncStore * _store;
    HDCloudSyncStoreRecord * _storeRecord;
    HDCloudSyncZoneIdentifier * _zoneIdentifier;
    long long  _zoneType;
}

@property (nonatomic) bool hasFutureSchemaRecord;
@property (nonatomic, readonly) bool hasOrphanedSequenceRecords;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) HDCloudSyncMasterRecord *masterRecord;
@property (nonatomic) long long purpose;
@property (nonatomic, readonly) HDCloudSyncRepository *repository;
@property (nonatomic, retain) HDCloudSyncStore *store;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (nonatomic, readonly) HDCloudSyncStoreRecord *storeRecord;
@property (nonatomic, readonly, copy) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) long long zoneType;

- (void).cxx_destruct;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (id)description;
- (bool)hasFutureSchemaRecord;
- (bool)hasOrphanedSequenceRecords;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3;
- (bool)isEmpty;
- (id)masterRecord;
- (long long)purpose;
- (id)repository;
- (void)setHasFutureSchemaRecord:(bool)arg1;
- (void)setPurpose:(long long)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)storeIdentifier;
- (id)storeRecord;
- (id)zoneIdentifier;
- (long long)zoneType;

@end
