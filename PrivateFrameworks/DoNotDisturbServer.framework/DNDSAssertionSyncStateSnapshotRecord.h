/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSAssertionSyncStateSnapshotRecord : NSObject <DNDSSyncRecord, NSCopying, NSMutableCopying> {
    DNDSModeAssertionStoreRecord * _snapshotAssertionStore;
    NSNumber * _snapshotLastFullAssertionInvalidationReason;
    NSNumber * _snapshotTimestamp;
    NSString * _snapshotUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSModeAssertionStoreRecord *snapshotAssertionStore;
@property (nonatomic, readonly, copy) NSNumber *snapshotLastFullAssertionInvalidationReason;
@property (nonatomic, readonly, copy) NSNumber *snapshotTimestamp;
@property (nonatomic, readonly, copy) NSString *snapshotUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithSnapshot:(id)arg1;
- (id)_initWithSnapshotUUID:(id)arg1 snapshotTimestamp:(id)arg2 snapshotLastFullAssertionInvalidationReason:(id)arg3 snapshotAssertionStore:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSyncDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)snapshotAssertionStore;
- (id)snapshotLastFullAssertionInvalidationReason;
- (id)snapshotTimestamp;
- (id)snapshotUUID;
- (id)syncDictionaryRepresentation;

@end
