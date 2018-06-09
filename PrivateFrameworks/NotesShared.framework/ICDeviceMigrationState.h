/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (nonatomic, retain) NSDate *stateModificationDate;

+ (id)allDeviceMigrationStatesInContext:(id)arg1;
+ (id)allKnownDeviceMigrationStates;
+ (id)currentDeviceMigrationState;
+ (id)currentDeviceMigrationStateCreateIfNecessary:(bool)arg1;
+ (id)currentDeviceMigrationStateCreateIfNecessary:(bool)arg1 context:(id)arg2;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 context:(id)arg2;
+ (id)deviceMigrationStatesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)identifierForDeviceIdentifier:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 context:(id)arg3;
+ (id)stringFromMigrationState:(short)arg1;

- (void)deleteFromLocalDatabase;
- (id)ic_loggingValues;
- (bool)isInICloudAccount;
- (bool)isMigrating;
- (void)mergeDataFromRecord:(id)arg1;
- (id)newlyCreatedRecord;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;

@end