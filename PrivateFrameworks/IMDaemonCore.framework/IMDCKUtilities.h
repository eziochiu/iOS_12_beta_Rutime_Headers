/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate> {
    FTDeviceSupport * _deviceSupport;
    bool  _didKeyRollPendingCheck;
    IMDefaults * _imDefaults;
    IMLockdownManager * _lockdownManager;
    IDSServerBag * _serverBag;
    IMDCKSyncState * _syncState;
    bool  _useDeprecatedApi;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceCharging, nonatomic, readonly) bool deviceCharging;
@property (getter=isDeviceOnWifi, nonatomic, readonly) bool deviceOnWifi;
@property (nonatomic, retain) FTDeviceSupport *deviceSupport;
@property (nonatomic) bool didKeyRollPendingCheck;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMDefaults *imDefaults;
@property (nonatomic, readonly) bool isInCloudKitDemoMode;
@property (nonatomic, readonly) bool isSyncingPaused;
@property (getter=isKeyRollPending, nonatomic, readonly) bool keyRollPending;
@property (nonatomic, retain) IMLockdownManager *lockdownManager;
@property (nonatomic, retain) IDSServerBag *serverBag;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IMDCKSyncState *syncState;
@property (nonatomic) bool useDeprecatedApi;

+ (id)im_AKSecurityLevelKey;
+ (id)logHandle;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)CKPartialError:(id)arg1 hasErrorCode:(id)arg2;
- (bool)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2;
- (bool)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1;
- (bool)_accountInfoWithCompletionHandler:(id /* block */)arg1;
- (id)_accountManager;
- (bool)_accountNeedsRepairOverride;
- (id)_accountStore;
- (bool)_allowDestructiveMOCFeaturesBasedOnDSID;
- (void)_askToTapToRadarWithString:(id)arg1 internalOnly:(bool)arg2;
- (id)_authenticationController;
- (bool)_checkEligibilityWithAccountInfo:(id)arg1;
- (void)_checkEligibilityWithLoggedInAccountWithCompletion:(id /* block */)arg1;
- (bool)_checkIfEnabledByServerBagOrDefault:(id)arg1;
- (id)_ckStatisticCaluclations;
- (id)_createAccountError:(id)arg1;
- (bool)_deviceActive;
- (id)_errorsFromPartialError:(id)arg1;
- (void)_fetchPrimaryAccountWithCompletion:(id /* block */)arg1;
- (id)_getKeepMessagesValue;
- (bool)_isCKErrorPartialFailure:(id)arg1;
- (bool)_isInExitState;
- (bool)_isSyncingPausedOverride;
- (long long)_mininimumServerBagClientValue;
- (unsigned long long)_mocEnabledStateFromAccountStatus:(long long)arg1;
- (bool)_mocFeatureEnabled;
- (id)_personIdFromAccount:(id)arg1;
- (id)_primaryiCloudAccount;
- (id)_primaryiCloudAccountAltDSID;
- (unsigned long long)_primaryiCloudAccountSecurityLevel;
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;
- (bool)_serverAllowsCacheDelete;
- (bool)_serverAllowsRemovalFromBackUp;
- (bool)_serverAllowsSync;
- (void)_setiCloudSettingsSwitchEnabled:(bool)arg1;
- (bool)_shouldDisplayPopUpForResettingKeepMessages;
- (bool)_shouldiCloudSwitchBeEnabled;
- (void)_showCKLogNotificationWithCompletion:(id /* block */)arg1;
- (id)_truthContainer;
- (id)_truthDatabase;
- (bool)acceptableErrorCodeWhileDeleting:(id)arg1;
- (id)accountDSID:(id)arg1;
- (bool)accountIsVerifiedForMOCAndSafeForCacheDelete;
- (id)accountWithDSID:(id)arg1;
- (id)backupController;
- (void)broadcastCloudKitState;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (bool)cacheDeleteEnabled;
- (void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
- (void)checkiCloudQuota:(id /* block */)arg1;
- (bool)cloudKitSyncDownloadAssetsOnly;
- (bool)cloudKitSyncingEnabled;
- (id)deviceActiveString;
- (id)deviceConditions;
- (bool)deviceConditionsAllowPeriodicSync;
- (id)deviceSupport;
- (bool)didKeyRollPendingCheck;
- (void)disableAllDevicesWithCompletion:(id /* block */)arg1;
- (void)downgradingFromHSA2AndDisablingMOC;
- (id)dsid;
- (void)eligibleForTruthZoneWithCompletion:(id /* block */)arg1;
- (bool)enableAttachmentMetricCollection;
- (void)enableMOCIfNeeded;
- (bool)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1;
- (bool)errorIndicatesChatZoneCreationFailed:(id)arg1;
- (bool)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1;
- (bool)errorIndicatesIdentityWasLost:(id)arg1;
- (bool)errorIndicatesQuotaExceeded:(id)arg1;
- (bool)errorIndicatesUserDeletedZone:(id)arg1;
- (bool)errorIndicatesZoneNotCreated:(id)arg1;
- (void)evalToggleiCloudSettingsSwitch;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)arg1;
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;
- (void)fetchCloudKitAccountStatusAndCheckForAccountNeedsRepairWithCompletion:(id /* block */)arg1;
- (void)fetchCloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)fetchLocalAccountSecurityLevel:(id /* block */)arg1;
- (void)fetchMOCEnabledStateWithCompletionBlock:(id /* block */)arg1;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
- (void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchiCloudAccountPersonID:(id /* block */)arg1;
- (bool)iCloudAccountMatchesiMessageAccount;
- (id)imDefaults;
- (id)init;
- (id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4;
- (bool)isDeviceCharging;
- (bool)isDeviceOnWifi;
- (void)isFirstSyncWithCompletion:(id /* block */)arg1;
- (bool)isInCloudKitDemoMode;
- (bool)isKeyRollPending;
- (bool)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2;
- (bool)isSyncingPaused;
- (void)keyRollPendingStateDidChange;
- (id)lastDeviceBackUpDate;
- (id)lockdownManager;
- (id)logCollectorAddress;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 isInitialSync:(bool)arg4;
- (bool)logDumpIsNecessaryAfterSync;
- (id)logHandle;
- (unsigned long long)messageDatabaseSize;
- (id)metricForPCSReportManateeStatusWithReason:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;
- (void)noteAllSyncedItemsPriorToSync;
- (long long)overrideNumberOfChatsToFetch;
- (long long)overrideNumberOfChatsToWrite;
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(id /* block */)arg1;
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;
- (bool)removeFromBackUpAllowed;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2 initialSync:(bool)arg3;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2 initialSync:(bool)arg3 sendToHandle:(id)arg4;
- (void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(bool)arg2 initialSync:(bool)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5;
- (void)resetLastSyncDate;
- (id)serverBag;
- (void)setCloudKitSyncingEnabled:(bool)arg1;
- (void)setDeviceSupport:(id)arg1;
- (void)setDidKeyRollPendingCheck:(bool)arg1;
- (void)setImDefaults:(id)arg1;
- (void)setLockdownManager:(id)arg1;
- (void)setServerBag:(id)arg1;
- (void)setUseDeprecatedApi:(bool)arg1;
- (bool)shouldCollectDailyLogDump;
- (bool)shouldCollectDailyLogDumpForRestoreFailures;
- (bool)shouldForceArchivedMessagesSync;
- (bool)shouldLogDumpOnCloudKitError;
- (bool)shouldPresentTTROnCloudKitError;
- (bool)shouldRepairAccountWithDeviceAccountSecurityLevel:(unsigned long long)arg1 serverAccountStatus:(long long)arg2;
- (bool)shouldSyncToSRContainer;
- (bool)shouldUseDevContainer;
- (void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2;
- (id)syncFailureMetricString:(id)arg1 error:(id)arg2;
- (id)syncState;
- (void)syncStateWillUpdate:(id)arg1;
- (bool)useDeprecatedApi;

@end
