/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord {
    NSSet * _disabledOwnerIdentifiers;
}

@property (nonatomic, retain) NSSet *disabledOwnerIdentifiers;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isMasterRecord:(id)arg1;
+ (bool)isMasterRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)disabledOwnerIdentifiers;
- (id)initInSyncCircle:(id)arg1 disabledOwnerIdentifiers:(id)arg2;
- (id)initWithCKRecord:(id)arg1 disabledOwnerIdentifiers:(id)arg2 schemaVersion:(long long)arg3;
- (void)setDisabledOwnerIdentifiers:(id)arg1;

@end
