/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaProfile : HMAccessoryProfile <HFMediaProfileContainer, HMAccessorySettingsContainer, HMMediaObject, _HMMediaProfileDelegate> {
    <HMMediaProfileDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _routeUID;
}

@property (readonly) HMHome *containerHome;
@property (readonly, copy) NSString *debugDescription;
@property <HMMediaObjectDelegate> *delegate;
@property <HMMediaProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMAccessory *hf_backingAccessory;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly) NSString *hf_defaultName;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjects;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) NSString *hf_editingName;
@property (nonatomic, readonly) NSSet *hf_fakeDebugSymptoms;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) HMHome *hf_home;
@property (nonatomic, readonly) bool hf_isAccessorySettingsReachable;
@property (nonatomic, readonly) bool hf_isAppleMusicReachable;
@property (nonatomic, readonly) bool hf_isCurrentAccessory;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isReachable;
@property (nonatomic, readonly) <HFMediaValueSource> *hf_mediaValueSource;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) NSString *hf_prettyDescription;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_showsAudioSettings;
@property (nonatomic, readonly) bool hf_supportsMediaSystem;
@property (nonatomic, readonly) bool hf_supportsSoftwareUpdate;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSString *routeUID;
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *symptoms;
@property (nonatomic, readonly) HMSymptomsHandler *symptomsHandler;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)containerHome;
- (id)delegate;
- (id)init;
- (id)initWithAccessoryProfile:(id)arg1;
- (void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2;
- (id)mediaSession;
- (id)propertyQueue;
- (id)routeUID;
- (void)setDelegate:(id)arg1;
- (id)settings;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)accessories;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_backingAccessory;
- (id)hf_dateAdded;
- (id)hf_defaultName;
- (id)hf_dependentHomeKitObjects;
- (id)hf_displayName;
- (id)hf_editingName;
- (id)hf_fakeDebugSymptoms;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (bool)hf_hasSetFavorite;
- (id)hf_home;
- (id)hf_idsDeviceIdentifierWithError:(id*)arg1;
- (bool)hf_isAccessorySettingsReachable;
- (bool)hf_isAppleMusicReachable;
- (bool)hf_isCurrentAccessory;
- (bool)hf_isFavorite;
- (bool)hf_isReachable;
- (id)hf_mediaValueSource;
- (id)hf_parentRoom;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_serviceNameComponents;
- (id)hf_settingsAdapterManager;
- (id)hf_settingsValueManager;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_showsAudioSettings;
- (bool)hf_supportsMediaSystem;
- (bool)hf_supportsSoftwareUpdate;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)homeKitObject;
- (bool)isContainedWithinItemGroup;
- (bool)isItemGroup;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)symptoms;
- (id)symptomsHandler;

@end
