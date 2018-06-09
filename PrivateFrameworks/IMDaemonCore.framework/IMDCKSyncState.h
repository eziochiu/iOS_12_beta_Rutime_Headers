/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate> {
    <IMDCKSyncStateDelegate> * _delegate;
    IMKeyValueCollection * _storage;
}

@property (nonatomic) long long accountStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMDCKSyncStateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisablingDevices, nonatomic) bool disablingDevices;
@property (getter=isEligibleForTruthZone, nonatomic) bool eligibleForTruthZone;
@property (nonatomic, copy) NSDate *exitDate;
@property (getter=isFeatureEnabled, nonatomic) bool featureEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isInExitState, nonatomic) bool inExitState;
@property (nonatomic, readonly) IMKeyValueCollection *keyValueCollection;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (getter=isRemovedFromBackup, nonatomic) bool removedFromBackup;
@property (getter=isStartingEnabledSettingChange, nonatomic) bool startingEnabledSettingChange;
@property (getter=isStartingInitialSyncSetByCloudKitHooks, nonatomic) bool startingInitialSyncSetByCloudKitHooks;
@property (getter=isStartingPeriodicSyncSetByCloudKitHooks, nonatomic) bool startingPeriodicSyncSetByCloudKitHooks;
@property (readonly) Class superclass;
@property (nonatomic) long long syncControllerRecordType;
@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) long long syncControllerSyncType;
@property (nonatomic, readonly) NSArray *syncErrors;
@property (getter=isSyncing, nonatomic) bool syncing;
@property (getter=isSyncingEnabled, nonatomic) bool syncingEnabled;
@property (getter=isSyncingPaused, nonatomic) bool syncingPaused;

+ (id)logHandle;

- (void).cxx_destruct;
- (void)_finishBatchChange;
- (void)_setStartingSync;
- (void)_startBatchChange;
- (long long)accountStatus;
- (void)addSyncError:(id)arg1;
- (void)broadcastSyncState;
- (void)clearLocalCloudKitSyncState;
- (void)clearSyncErrors;
- (id)delegate;
- (id)description;
- (id)exitDate;
- (id)init;
- (id)initWithKeyValueCollection:(id)arg1;
- (bool)isDisablingDevices;
- (bool)isEligibleForTruthZone;
- (bool)isFeatureEnabled;
- (bool)isInExitState;
- (bool)isRemovedFromBackup;
- (bool)isStartingEnabledSettingChange;
- (bool)isStartingInitialSyncSetByCloudKitHooks;
- (bool)isStartingPeriodicSyncSetByCloudKitHooks;
- (bool)isSyncing;
- (bool)isSyncingEnabled;
- (bool)isSyncingPaused;
- (id)keyValueCollection;
- (void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2;
- (void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2;
- (id)lastSyncDate;
- (id)logHandle;
- (id)serializedRepresentation;
- (void)setAccountStatus:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisablingDevices:(bool)arg1;
- (void)setEligibleForTruthZone:(bool)arg1;
- (void)setErrorToAccountNeedsRepair;
- (void)setErrorToKeyRollingError;
- (void)setExitDate:(id)arg1;
- (void)setFeatureEnabled:(bool)arg1;
- (void)setInExitState:(bool)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setRemovedFromBackup:(bool)arg1;
- (void)setStartingEnabledSettingChange:(bool)arg1;
- (void)setStartingInitialSyncSetByCloudKitHooks:(bool)arg1;
- (void)setStartingInitialSyncWithRecordType:(long long)arg1;
- (void)setStartingPeriodicSyncSetByCloudKitHooks:(bool)arg1;
- (void)setStartingPeriodicSyncWithRecordType:(long long)arg1;
- (void)setSyncControllerRecordType:(long long)arg1;
- (void)setSyncControllerSyncState:(unsigned long long)arg1;
- (void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2;
- (void)setSyncControllerSyncType:(long long)arg1;
- (void)setSyncing:(bool)arg1;
- (void)setSyncingEnabled:(bool)arg1;
- (void)setSyncingFinished;
- (void)setSyncingPaused:(bool)arg1;
- (long long)syncControllerRecordType;
- (unsigned long long)syncControllerSyncState;
- (long long)syncControllerSyncType;
- (id)syncErrors;

@end
