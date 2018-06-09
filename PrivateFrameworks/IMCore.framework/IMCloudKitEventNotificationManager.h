/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitEventNotificationManager : NSObject {
    <IMCloudKitEventHandlerAccountInfoProvider> * _accountInfoProvider;
    IMWeakReferenceCollection * _eventHandlers;
    NSTimer * _fetchStatsTimer;
    IMEventNotificationManager * _notificationManager;
    IMCloudKitSyncState * _previousState;
    double  _progressPollingInterval;
    IMCloudKitSyncProgress * _progressToSend;
}

@property <IMCloudKitEventHandlerAccountInfoProvider> *accountInfoProvider;
@property bool didPromptForCloudKitSync;
@property (readonly) IMWeakReferenceCollection *eventHandlers;
@property NSTimer *fetchStatsTimer;
@property (retain) IMEventNotificationManager *notificationManager;
@property (retain) IMCloudKitSyncState *previousState;
@property double progressPollingInterval;
@property (retain) IMCloudKitSyncProgress *progressToSend;
@property (readonly) IMCloudKitSyncState *syncState;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)logHandle;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelStatsFetchingTimer;
- (void)_fetchSyncStateStatistics:(id /* block */)arg1;
- (bool)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (void)_sendHiddenProgressToEventListeners;
- (void)_sendProgressToEventListeners:(id)arg1;
- (void)_sendProgressToEventListenersDeferred;
- (void)_sendSyncStateChangedEventToEventListeners:(id)arg1;
- (void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2;
- (void)_syncStateDidChange:(id)arg1;
- (void)_timerExpiredForSyncStatsFetching:(id)arg1;
- (void)_updateProgressWithState:(id)arg1;
- (bool)accountHasiMessageEnabled;
- (id)accountInfoProvider;
- (void)addEventHandler:(id)arg1;
- (id)cloudKitHooks;
- (bool)didPromptForCloudKitSync;
- (void)disableAllSyncEnabledCloudKitDevices;
- (id)eventHandlers;
- (id)fetchStatsTimer;
- (void)fetchSyncDebuggingInfo:(id)arg1;
- (void)fetchSyncState;
- (void)fetchSyncStateAfterClearingErrors;
- (void)fetchSyncStateAfterClearingErrorsWithCompletion:(id /* block */)arg1;
- (void)fetchSyncStateStatistics;
- (void)fetchSyncStateStatisticsWithCompletion:(id /* block */)arg1;
- (void)fetchSyncStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)logHandle;
- (id)notificationManager;
- (void)performAdditionalStorageRequiredCheck;
- (id)previousState;
- (double)progressBroadcastDelay;
- (double)progressPollingInterval;
- (id)progressToSend;
- (void)removeEventHandler:(id)arg1;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setCloudKitSyncEnabled:(bool)arg1;
- (void)setCloudKitSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)setDidPromptForCloudKitSync:(bool)arg1;
- (void)setFetchStatsTimer:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setPreviousState:(id)arg1;
- (void)setProgressPollingInterval:(double)arg1;
- (void)setProgressToSend:(id)arg1;
- (void)startFetchingSyncProgress;
- (void)startInitialSync;
- (void)startPeriodicSync;
- (id)syncState;
- (id)syncStateWithDictionary:(id)arg1;
- (void)visitEventHandlers:(id /* block */)arg1;

@end
