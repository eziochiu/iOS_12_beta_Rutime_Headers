/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate> {
    bool  _disconnected;
    unsigned short  _lastCompatibilityState;
    unsigned long long  _lastStatus;
    NSMutableDictionary * _legacyDevices;
    NSObject<OS_dispatch_queue> * _legacyDevicesQueue;
    NSObject<OS_dispatch_queue> * _legacyDevicesQueueFirst;
    NSMutableArray * _waitingToPairBlocks;
}

@property (nonatomic) unsigned short lastCompatibilityState;
@property (nonatomic) unsigned long long lastStatus;
@property (nonatomic, retain) NSMutableDictionary *legacyDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *legacyDevicesQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *legacyDevicesQueueFirst;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, retain) NSMutableArray *waitingToPairBlocks;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id /* block */)activeDeviceSelectorBlock;
+ (id /* block */)activePairedDeviceSelectorBlock;
+ (id /* block */)pairedDevicesSelectorBlock;
+ (Class)proxyClass;
+ (id)sharedInstance;
+ (bool)shouldBoostProcess;

- (void).cxx_destruct;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id*)arg2;
- (void)_fireChangeNotificationsForDiff:(id)arg1 collection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4 notify:(bool)arg5;
- (void)_fireCompatibilityStateChangedNotificationWithCollection:(id)arg1;
- (void)_fireCompatibilityStateStatusNotificationsWithCollection:(id)arg1;
- (void)_fireStatusChangedNotificationWithCollection:(id)arg1;
- (void)_fireWaitingToPairBlocks;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(id /* block */)arg1;
- (id)_getChangeHistory;
- (id)_getClientInfo;
- (unsigned short)_getCompatibilityStateWithCollection:(id)arg1;
- (id)_getLocalDeviceCollection;
- (id)_getSecureProperties:(id)arg1;
- (unsigned long long)_getStatusWithCollection:(id)arg1;
- (void)_getSwitchEventsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inlineCallback:(id /* block */)arg3;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (id)_legacyDevicesWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)_postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3;
- (void)_submitAlbertPairingReport;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (void)beginDiscovery;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(id /* block */)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)blockAndQueryVersions;
- (void)checkIfFlaggedForRecoveryWithCompletion:(id /* block */)arg1;
- (void)clearRecoveryFlagWithCompletion:(id /* block */)arg1;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(id /* block */)arg4;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (unsigned short)compatibilityState;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (void)endDiscovery;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)fakePairedSyncIsCompleteWithCompletion:(id /* block */)arg1;
- (id)getActivePairedDevice;
- (id)getAllDevices;
- (id)getDevices;
- (id)getDevicesMatching:(id /* block */)arg1;
- (void)getDevicesWithBlock:(id /* block */)arg1;
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)getPairedDevices;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(id /* block */)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (id)init;
- (id)initWithBoost:(bool)arg1;
- (id)initWithBoost:(bool)arg1 disconnected:(bool)arg2;
- (bool)isKeychainEnabled;
- (bool)isPaired;
- (bool)isWatchSetupPushActive;
- (void)keepPhoneUnlockedInternalTestSPI:(id /* block */)arg1;
- (unsigned short)lastCompatibilityState;
- (id)lastMigrationRequestPhoneName;
- (unsigned long long)lastStatus;
- (id)legacyDevices;
- (id)legacyDevicesQueue;
- (id)legacyDevicesQueueFirst;
- (long long)maxPairedDeviceCount;
- (long long)maxPairingCompatibilityVersion;
- (id)migrationConsentRequestData;
- (long long)minPairingCompatibilityVersion;
- (long long)minQuickSwitchCompatibilityVersion;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(bool)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)pairedDeviceCountIsLessThanMaxPairedDevices;
- (bool)pairedDeviceSupportQuickSwitch;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (long long)pairingCompatibilityVersion;
- (id)pairingID;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(id /* block */)arg1;
- (void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)resumePairingClientCrashMonitoring;
- (void)retriggerUnpairInfoDialog;
- (void)sendDevicesUpdatedNotification;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(bool)arg2 operationHasCompleted:(id /* block */)arg3;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(id /* block */)arg2;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(id /* block */)arg2;
- (void)setLastCompatibilityState:(unsigned short)arg1;
- (void)setLastStatus:(unsigned long long)arg1;
- (void)setLegacyDevices:(id)arg1;
- (void)setLegacyDevicesQueue:(id)arg1;
- (void)setLegacyDevicesQueueFirst:(id)arg1;
- (void)setMigrationConsented:(bool)arg1 forDevice:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setMigrationConsented:(bool)arg1 forDeviceID:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setWaitingToPairBlocks:(id)arg1;
- (void)startWatchSetupPush;
- (unsigned long long)status;
- (void)stopWatchSetupPush;
- (bool)supportsPairedDevice;
- (bool)supportsWatch;
- (void)suspendPairingClientCrashMonitoring;
- (unsigned int)switchIndex;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(id /* block */)arg1;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(bool)arg2 operationHasBegun:(id /* block */)arg3;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)userIsCheckingForUpdate;
- (id)waitForActivePairedDevice;
- (void)waitForPairingStorePathPairingID:(id /* block */)arg1;
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(id /* block */)arg2;
- (id)waitingToPairBlocks;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_deviceForIDSDevice:(id)arg1;

@end
