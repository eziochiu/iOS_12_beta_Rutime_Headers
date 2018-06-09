/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitHooks : NSObject

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)logHandle;
+ (id)sharedInstance;

- (void)_didAttemptToDisableAllDevicesResult:(bool)arg1;
- (void)_didAttemptToSetEnabledTo:(bool)arg1 result:(bool)arg2;
- (void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;
- (void)_requestMOCEnabledReturned:(unsigned long long)arg1;
- (void)_updateCloudKitState;
- (void)_updateCloudKitStateWithDictionary:(id)arg1;
- (void)broadcastCloudKitState;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)clearChatZoneSyncToken;
- (void)clearDataFromCloudKit;
- (void)clearLocalSyncState;
- (void)clearTombStoneMessagesTable;
- (void)createAttachmentZone;
- (void)createChatZone;
- (void)deleteAttachmentZone;
- (void)deleteChatZone;
- (void)deleteExitRecord;
- (void)deleteMessagesZone;
- (void)deleteSalt;
- (void)downloadAttachmentAssets;
- (bool)eligibleForTruthZone;
- (id)exitDate;
- (void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1;
- (void)fetchExitRecord;
- (void)fetchLatestRampState;
- (void)fetchLatestSalt;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (void)fetchSyncStateStatistics;
- (id)init;
- (void)initiatePeriodicSync;
- (void)initiateSync;
- (long long)isChangingEnabledState;
- (bool)isDisablingDevices;
- (bool)isEnabled;
- (bool)isInExitState;
- (bool)isStartingSync;
- (bool)isSyncing;
- (id)lastSyncDate;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (id)logHandle;
- (void)markAllChatsAsDirty;
- (void)metricAttachments:(long long)arg1;
- (bool)mocAccountsMatch;
- (void)performAdditionalStorageRequiredCheck;
- (void)printCachedRampState;
- (void)printCachedSalt;
- (void)purgeAttachments:(long long)arg1;
- (bool)rampedIntoTruthZone;
- (void)removePathFromiCloudBackups:(id)arg1;
- (bool)removedFromiCloudBackup;
- (void)requestMOCEnabledState;
- (void)sendRestoreFailuresLogDumps;
- (void)setEnabled:(bool)arg1;
- (void)setShouldOptimizeAttachmentStorage:(bool)arg1;
- (void)setiCloudBackupsDisabled:(bool)arg1;
- (void)setupIMCloudKitHooks;
- (bool)shouldOptimizeAttachmentStorage;
- (bool)shouldShowCloudKitUI;
- (void)syncAttachments;
- (void)syncChats;
- (void)syncDeletesToCloudKit;
- (void)syncMessages;
- (id)syncStateDictionary;
- (void)toggleiCloudBackupsIfNeeded;
- (void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2;
- (void)tryToDisableAllDevices;
- (void)writeAttachments;
- (void)writeCloudKitSyncCounts:(id)arg1;
- (void)writeDirtyChats;
- (void)writeDirtyMessages;
- (void)writeExitRecord;

@end
