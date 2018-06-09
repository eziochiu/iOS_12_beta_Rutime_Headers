/* made by EzioChiu.
 */

@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional

- (void)accessory:(HMAccessory *)arg1 didAddControlTarget:(HMAccessory *)arg2;
- (void)accessory:(HMAccessory *)arg1 didRemoveControlTarget:(HMAccessory *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfigurationStateForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfiguredNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateDefaultNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateLoggedInAccount:(ACAccount *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateServiceSubtypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSoftwareVersion:(HMFSoftwareVersion *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
- (void)accessoryDidUpdateControllable:(HMAccessory *)arg1;
- (void)accessoryDidUpdateTargetControlSupport:(HMAccessory *)arg1;

@end
