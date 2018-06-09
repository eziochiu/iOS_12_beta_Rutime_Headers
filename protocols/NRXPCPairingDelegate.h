/* made by EzioChiu.
 */

@protocol NRXPCPairingDelegate

@required

- (void)xpcAbortPairingReason:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcActiveDeviceAssertions:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSArray *, void*
- (void)xpcBeginDiscoveryWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcBeginMigrationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcBeginMigrationWithDeviceID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcBeginMigrationWithDeviceID:(void *)arg1 passcode:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)xpcClearRecoveryFlagWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcCompanionOOBDiscoverAndPairWithName:(void *)arg1 withOutOfBandPairingKey:(void *)arg2 withOptions:(void *)arg3 operationHasBegun:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcCompanionPasscodePairWithDeviceID:(void *)arg1 withOptions:(void *)arg2 operationHasBegun:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcEndDiscoveryWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcFakePairedSyncIsCompleteWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(void *)arg1 operationHasBegun:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(void *)arg1 operationHasBegun:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcInvalidateSwitchAssertionWithIdentifier:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcNotifyActivationCompleted:(NSUUID *)arg1 withSuccess:(bool)arg2;
- (void)xpcNotifyPasscode:(NSNumber *)arg1 withDeviceID:(NSUUID *)arg2;
- (void)xpcPairWithSimulator:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcPairingClientDidEnterPhase:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcPairingShouldContinue;
- (void)xpcPingActiveGizmoWithPriority:(void *)arg1 withMessageSize:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 10: int, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, double, double, void*
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)xpcResumePairingClientCrashMonitoring:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcScanForMigratableWatchesWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSetMigrationConsented:(void *)arg1 forDeviceID:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: bool, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcStartWatchSetupPushWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcStopWatchSetupPushWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSubmitAlbertPairingReport:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSubmitServerRequestReportWithRequestType:(void *)arg1 duration:(void *)arg2 errorCode:(void *)arg3 block:(void *)arg4; // needs 4 arg types, found 8: NSString *, double, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSuspendPairingClientCrashMonitoring:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSwitchActiveDeviceWithDeviceID:(void *)arg1 isMagicSwitch:(void *)arg2 operationHasCompleted:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcSwitchActiveDeviceWithDeviceID:(void *)arg1 withAssertionHandler:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)xpcSwitchToSimulator:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcTriggerVersion4Workaround;
- (void)xpcUnpairWithDeviceID:(void *)arg1 withOptions:(void *)arg2 operationHasBegun:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcUnpairWithSimulator:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NRWatchPairingExtendedMetadata *, void*

@end
