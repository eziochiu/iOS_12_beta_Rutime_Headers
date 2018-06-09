/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDaemon : NSObject <HDDiagnosticObject, HDHealthDaemon, HDTaskServerClassProvider, HDXPCListenerDelegate> {
    <HDNanoAlertSuppressionService> * _alertSuppressionService;
    HDAlertSuppressor * _alertSuppressor;
    HDAnalyticsSubmissionCoordinator * _analyticsSubmissionCoordinator;
    HDAppLauncher * _appLauncher;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    HDBackgroundWorkoutRunner * _backgroundWorkoutRunner;
    _HKBehavior * _behavior;
    HDCarouselServicesManager * _carouselServicesManager;
    HDCloudSyncCoordinator * _cloudSyncCoordinator;
    HDCoachingDiagnosticManager * _coachingDiagnosticManager;
    HDCompanionWorkoutCreditManager * _companionWorkoutCreditManager;
    HDContentProtectionManager * _contentProtectionManager;
    HDCoreMotionWorkoutInterface * _coreMotionWorkoutInterface;
    NSDictionary * _daemonExtensionsByIdentifier;
    NSMutableArray * _daemonLaunchObservers;
    bool  _daemonReady;
    <HDDaemonTester> * _daemonTester;
    HDDemoDataGenerator * _demoDataFactory;
    struct MGNotificationTokenStruct { } * _deviceNameChangesToken;
    int  _didStart;
    NSMutableSet * _endpoints;
    HDFeatureAvailabilityAssetManager * _featureAvailabilityAssetManager;
    HDFitnessAppBadgeManager * _fitnessAppBadgeManager;
    NSString * _healthDirectoryPath;
    HDHeartRateRecoveryManager * _heartRateRecoveryManager;
    int  _languageChangeNotifyToken;
    NSObject<OS_dispatch_queue> * _mainQueue;
    HDMaintenanceWorkCoordinator * _maintenanceWorkCoordinator;
    NSString * _medicalIDDirectoryPath;
    HDPluginManager * _pluginManager;
    HDPowerSavingModeManager * _powerSavingModeManager;
    HDPrimaryProfile * _primaryProfile;
    HDProcessStateManager * _processStateManager;
    HDProfileManager * _profileManager;
    HDQueryManager * _queryManager;
    HDQuietModeManager * _quietModeManager;
    HDXPCListener * _serviceListener;
    HDTaskServerRegistry * _taskServerRegistry;
}

@property (nonatomic, retain) <HDNanoAlertSuppressionService> *alertSuppressionService;
@property (nonatomic, readonly) HDAlertSuppressor *alertSuppressor;
@property (nonatomic, retain) HDAnalyticsSubmissionCoordinator *analyticsSubmissionCoordinator;
@property (nonatomic, readonly) HDAppLauncher *appLauncher;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (nonatomic, readonly) HDBackgroundWorkoutRunner *backgroundWorkoutRunner;
@property (readonly) _HKBehavior *behavior;
@property (nonatomic, readonly) HDCarouselServicesManager *carouselServicesManager;
@property (nonatomic, readonly) HDCloudSyncCoordinator *cloudSyncCoordinator;
@property (nonatomic, readonly) HDCoachingDiagnosticManager *coachingDiagnosticManager;
@property (nonatomic, readonly) HDCompanionWorkoutCreditManager *companionWorkoutCreditManager;
@property (nonatomic, readonly) HDContentProtectionManager *contentProtectionManager;
@property (nonatomic, readonly) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface;
@property (nonatomic) <HDDaemonTester> *daemonTester;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDFeatureAvailabilityAssetManager *featureAvailabilityAssetManager;
@property (nonatomic, readonly) HDFitnessAppBadgeManager *fitnessAppBadgeManager;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *healthDirectoryPath;
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (nonatomic, readonly) HDHeartRateRecoveryManager *heartRateRecoveryManager;
@property (nonatomic, readonly) HDMaintenanceWorkCoordinator *maintenanceWorkCoordinator;
@property (readonly, copy) NSString *medicalIDDirectoryPath;
@property (readonly) HDPluginManager *pluginManager;
@property (nonatomic, readonly) HDPowerSavingModeManager *powerSavingModeManager;
@property (nonatomic, readonly) HDPrimaryProfile *primaryProfile;
@property (nonatomic, readonly) HDProcessStateManager *processStateManager;
@property (nonatomic, readonly) HDProfileManager *profileManager;
@property (nonatomic, readonly) HDQueryManager *queryManager;
@property (nonatomic, readonly) HDQuietModeManager *quietModeManager;
@property (nonatomic, readonly) HDXPCListener *serviceListener;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDTaskServerRegistry *taskServerRegistry;

- (void).cxx_destruct;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)_bundleIdentifiersToTerminateAfterObliteration;
- (void)_handleSigterm;
- (void)_localeOrLanguageChanged:(id)arg1;
- (bool)_motionTrackingAvailable;
- (id)_newAnalyticsSubmissionCoordinator;
- (id)_newBackgroundTaskScheduler;
- (id)_newBehavior;
- (id)_newCloudSyncCoordinator;
- (id)_newCompanionWorkoutCreditManager;
- (id)_newContentProtectionManager;
- (id)_newMainQueue;
- (id)_newPluginManager;
- (id)_newPrimaryProfile;
- (id)_newProcessStateManager;
- (id)_newProfileManager;
- (void)_notifyDaemonLaunchObservers;
- (void)_periodicUpdates;
- (void)_registerForDeviceNameChanges;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_resetPrivacySettings;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_setUpNotifydEventHandler;
- (void)_setUpPedometerLaunchEventHandler;
- (void)_setUpSignalHandlers;
- (void)_setupMemoryWarningHandler;
- (id)_setupSignal:(int)arg1 handler:(id /* block */)arg2;
- (bool)_shouldInitializeDaemon;
- (void)_terminationCleanup;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_updateCurrentDeviceName;
- (id)alertSuppressionService;
- (id)alertSuppressor;
- (id)analyticsSubmissionCoordinator;
- (id)appLauncher;
- (id)backgroundTaskScheduler;
- (id)backgroundWorkoutRunner;
- (id)behavior;
- (id)carouselServicesManager;
- (id)cloudSyncCoordinator;
- (id)coachingDiagnosticManager;
- (id)companionWorkoutCreditManager;
- (id)contentProtectionManager;
- (id)coreMotionWorkoutInterface;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;
- (id)daemonTester;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)exitClean:(bool)arg1 reason:(id)arg2;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;
- (id)featureAvailabilityAssetManager;
- (id)fitnessAppBadgeManager;
- (id)healthDirectoryPath;
- (id)healthDirectorySizeInBytes;
- (id)healthDirectoryURL;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (id)healthLiteUserDefaultsDomain;
- (id)heartRateRecoveryManager;
- (id)init;
- (id)initWithContainerDirectoryPath:(id)arg1;
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;
- (void)invalidateAllServersForProfile:(id)arg1;
- (void)invalidateAndWait;
- (id)mainQueue;
- (id)maintenanceWorkCoordinator;
- (id)medicalIDDirectoryPath;
- (id)nanoPairedDeviceRegistry;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(id /* block */)arg4;
- (id)pluginManager;
- (id)powerSavingModeManager;
- (id)primaryProfile;
- (id)processStateManager;
- (id)profileManager;
- (id)queryManager;
- (id)quietModeManager;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (id)serviceListener;
- (void)setAlertSuppressionService:(id)arg1;
- (void)setAnalyticsSubmissionCoordinator:(id)arg1;
- (void)setDaemonTester:(id)arg1;
- (void)start;
- (id)taskServerClasses;
- (id)taskServerRegistry;
- (void)terminateClean:(bool)arg1 reason:(id)arg2;
- (void)unitTest_didCreateProfile:(id)arg1;
- (void)unitTest_queryServerDidInit:(id)arg1;
- (void)unitTest_taskServerDidInit:(id)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end
