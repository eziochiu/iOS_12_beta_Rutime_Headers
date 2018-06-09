/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSMutableAssertionSyncStateSnapshotRecord : DNDSAssertionSyncStateSnapshotRecord

@property (nonatomic, copy) DNDSModeAssertionStoreRecord *snapshotAssertionStore;
@property (nonatomic, copy) NSNumber *snapshotLastFullAssertionInvalidationReason;
@property (nonatomic, copy) NSNumber *snapshotTimestamp;
@property (nonatomic, copy) NSString *snapshotUUID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSnapshotAssertionStore:(id)arg1;
- (void)setSnapshotLastFullAssertionInvalidationReason:(id)arg1;
- (void)setSnapshotTimestamp:(id)arg1;
- (void)setSnapshotUUID:(id)arg1;

@end
