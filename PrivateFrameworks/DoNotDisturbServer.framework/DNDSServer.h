/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSServer : NSObject <DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSModeAssertionProviderObserver, DNDSModeAssertionStateProviderDataSource, DNDSRemoteServiceProviderDelegate, DNDSScheduleManagerDataSource, DNDSScheduleManagerDelegate, DNDSSettingsManagerDelegate, DNDSStateProviderUpdateListener> {
    <DNDSAssertionSyncManager> * _assertionSyncManager;
    NSArray * _assertionTransformers;
    DNDSBulletinBoardEventBehaviorResolver * _eventBehaviorResolver;
    NSArray * _lifetimeMonitors;
    DNDSLocalAssertionManager * _localAssertionManager;
    NSObject<OS_dispatch_queue> * _queue;
    BBQuietModeOverrideAssertion * _quietModeAssertion;
    DNDSScheduleManager * _scheduleManager;
    DNDSRemoteServiceProvider * _serviceProvider;
    BBSettingsGateway * _settingsGateway;
    DNDSSettingsManager * _settingsManager;
    <DNDSSettingsSyncManager> * _settingsSyncManager;
    DNDSModeAssertionStateProvider * _stateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_activeModeAssertionsConsideringProviders:(id)arg1;
- (void)_queue_handleSyncSettingsChange:(id)arg1;
- (void)_queue_resume;
- (void)_queue_updateBulletinBoardAssertionWithCompletionHandler:(id /* block */)arg1;
- (void)_queue_updateLifetimeMonitorsAndState;
- (void)activeAssertionsDidChangeForLifetimeMonitor:(id)arg1;
- (id)activeLocalModeAssertionsForSyncManager:(id)arg1;
- (id)allModeAssertionsForLifetimeMonitor:(id)arg1;
- (id)currentStateForSyncManager:(id)arg1;
- (id)currentlyActiveModeAssertionsForStateProvider:(id)arg1;
- (id)init;
- (id)lastModeAssertionsCompleteInvalidationDateForScheduleManager:(id)arg1;
- (id)lastModeAssertionsCompleteInvalidationDateForSyncManager:(id)arg1;
- (id)lastScheduleSettingsChangedDateForScheduleManager:(id)arg1;
- (id)lifetimeMonitor:(id)arg1 effectiveLifetimeForModeAssertion:(id)arg2;
- (void)lifetimeMonitor:(id)arg1 lifetimeDidExpireForAssertionUUIDs:(id)arg2;
- (void)modeAssertionProvider:(id)arg1 didPerformInvalidations:(id)arg2;
- (void)modeAssertionProvider:(id)arg1 didTakeAssertions:(id)arg2;
- (id)remoteServiceProvider:(id)arg1 assertionWithClientIdentifer:(id)arg2 error:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 behaviorSettingsWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 currentStateWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3 error:(id*)arg4;
- (id)remoteServiceProvider:(id)arg1 invalidateModeAssertionWithUUID:(id)arg2 reason:(unsigned long long)arg3 error:(id*)arg4;
- (id)remoteServiceProvider:(id)arg1 phoneCallBypassSettingsWithError:(id*)arg2;
- (id)remoteServiceProvider:(id)arg1 resolveBehaviorForEventDetails:(id)arg2 error:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 scheduleSettingsWithError:(id*)arg2;
- (bool)remoteServiceProvider:(id)arg1 setBehaviorSettings:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setPhoneCallBypassSettings:(id)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(id)arg1 setScheduleSettings:(id)arg2 withError:(id*)arg3;
- (id)remoteServiceProvider:(id)arg1 takeModeAssertionWithDetails:(id)arg2 clientIdentifier:(id)arg3 error:(id*)arg4;
- (void)resume;
- (id)scheduleAssertionModeIdentifierForScheduleManager:(id)arg1;
- (void)scheduleChangedForScheduleManager:(id)arg1;
- (void)settingsManager:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)settingsManager:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (void)stateProvider:(id)arg1 didUpdateDoNotDisturbState:(id)arg2;
- (id)stateProvider:(id)arg1 effectiveModeIdentifierForModeAssertion:(id)arg2;
- (void)syncManager:(id)arg1 invalidateAllModeAssertionsTakenBeforeDate:(id)arg2 forReason:(unsigned long long)arg3;

@end
