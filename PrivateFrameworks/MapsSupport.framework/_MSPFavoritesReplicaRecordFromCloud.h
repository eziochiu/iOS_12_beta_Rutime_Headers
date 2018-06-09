/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPFavoritesReplicaRecordFromCloud : NSObject <MSPFavoritesReplicaRecord, MSPReplicaRecordFromCloud> {
    NSData * _contents;
    MSPVectorTimestamp * _contentsTimestamp;
    MSPPosition * _position;
    MSPVectorTimestamp * _positionTimestamp;
    bool  _tombstoneRepresentedByCloudRecord;
}

@property (nonatomic, readonly, copy) NSData *contents;
@property (nonatomic, readonly, copy) MSPVectorTimestamp *contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;
@property (readonly) Class superclass;
@property (getter=isTombstoneRepresentedByCloudRecord, nonatomic, readonly) bool tombstoneRepresentedByCloudRecord;

+ (id)tombstone;

- (void).cxx_destruct;
- (id)_initAsTombstone;
- (id)contents;
- (id)contentsTimestamp;
- (id)description;
- (id)initWithCloudRecord:(id)arg1;
- (bool)isTombstoneRepresentedByCloudRecord;
- (id)position;
- (id)positionTimestamp;

@end
