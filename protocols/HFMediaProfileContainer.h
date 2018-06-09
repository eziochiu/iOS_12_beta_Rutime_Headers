/* made by EzioChiu.
 */

@protocol HFMediaProfileContainer <HMMediaObject, HFAccessoryVendor, HFHomeKitObject, HFPrettyDescription, HFReorderableHomeKitObject, HFFavoritable, HFRoomContextProviding, HFGroupableItemProtocol, HFSymptomsVendor, HFSymptomsHandlerVendor>

@required

- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
- (HMAccessory *)hf_backingAccessory;
- (NSString *)hf_defaultName;
- (NSSet *)hf_dependentHomeKitObjects;
- (NSString *)hf_editingName;
- (NSSet *)hf_fakeDebugSymptoms;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
- (HMHome *)hf_home;
- (NSString *)hf_idsDeviceIdentifierWithError:(id*)arg1;
- (bool)hf_isAccessorySettingsReachable;
- (bool)hf_isAppleMusicReachable;
- (bool)hf_isCurrentAccessory;
- (bool)hf_isReachable;
- (<HFMediaValueSource> *)hf_mediaValueSource;
- (NSString *)hf_prettyDescription;
- (HFServiceNameComponents *)hf_serviceNameComponents;
- (HFAccessorySettingAdapterManager *)hf_settingsAdapterManager;
- (HFMediaProfileContainerSettingsValueManager *)hf_settingsValueManager;
- (bool)hf_showsAudioSettings;
- (bool)hf_supportsMediaSystem;
- (bool)hf_supportsSoftwareUpdate;
- (HMMediaSession *)mediaSession;

@end
