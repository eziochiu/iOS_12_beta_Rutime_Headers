/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPairingProxy : NRRegistryProxy <NRPairedDeviceRegistryXPCDaemonDelegate>

+ (id)clientExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (id)machServiceName;
+ (id)serverExportedInterface;
+ (id)serverRemoteObjectInterface;

- (id)pairingDelegate;
- (id)pairingQueue;
- (id)pairingServicesDelegate;
- (void)xpcAbortPairingReason:(id)arg1 withBlock:(id /* block */)arg2;
- (void)xpcActiveDeviceAssertions:(id /* block */)arg1;
- (void)xpcBeginDiscoveryWithBlock:(id /* block */)arg1;
- (void)xpcBeginMigrationWithCompletion:(id /* block */)arg1;
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 passcode:(id)arg2 withBlock:(id /* block */)arg3;
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(id /* block */)arg1;
- (void)xpcClearRecoveryFlagWithCompletion:(id /* block */)arg1;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(id /* block */)arg4;
- (void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)xpcEndDiscoveryWithBlock:(id /* block */)arg1;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2;
- (void)xpcFakePairedSyncIsCompleteWithCompletion:(id /* block */)arg1;
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(id /* block */)arg1;
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(id /* block */)arg1;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(id /* block */)arg1;
- (void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(bool)arg2;
- (void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2;
- (void)xpcPairWithSimulator:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcPairingClientDidEnterPhase:(id)arg1 withBlock:(id /* block */)arg2;
- (void)xpcPairingShouldContinue;
- (void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcResumePairingClientCrashMonitoring:(id /* block */)arg1;
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(id /* block */)arg1;
- (void)xpcScanForMigratableWatchesWithBlock:(id /* block */)arg1;
- (void)xpcStartWatchSetupPushWithBlock:(id /* block */)arg1;
- (void)xpcStopWatchSetupPushWithBlock:(id /* block */)arg1;
- (void)xpcSubmitAlbertPairingReport:(id /* block */)arg1;
- (void)xpcSubmitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(id /* block */)arg4;
- (void)xpcSuspendPairingClientCrashMonitoring:(id /* block */)arg1;
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 isMagicSwitch:(bool)arg2 operationHasCompleted:(id /* block */)arg3;
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 withAssertionHandler:(id /* block */)arg2;
- (void)xpcSwitchToSimulator:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcTriggerVersion4Workaround;
- (void)xpcUnpairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)xpcUnpairWithSimulator:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(id /* block */)arg2;

@end
