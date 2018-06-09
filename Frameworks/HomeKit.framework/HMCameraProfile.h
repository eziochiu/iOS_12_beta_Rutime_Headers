/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraProfile : HMAccessoryProfile <HFUserNotificationServiceSettingsProviding> {
    HMCameraAudioControl * _microphoneControl;
    HMCameraSettingsControl * _settingsControl;
    HMCameraSnapshotControl * _snapshotControl;
    HMCameraAudioControl * _speakerControl;
    HMCameraStreamControl * _streamControl;
}

@property (nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFCameraManager *hf_cameraManager;
@property (nonatomic, readonly, copy) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic, retain) HMCameraAudioControl *microphoneControl;
@property (nonatomic, retain) HMCameraSettingsControl *settingsControl;
@property (nonatomic, retain) HMCameraSnapshotControl *snapshotControl;
@property (nonatomic, retain) HMCameraAudioControl *speakerControl;
@property (nonatomic, retain) HMCameraStreamControl *streamControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)cameraProfile;
- (id)initWithCameraProfile:(id)arg1;
- (id)microphoneControl;
- (id)services;
- (void)setMicrophoneControl:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (void)setSnapshotControl:(id)arg1;
- (void)setSpeakerControl:(id)arg1;
- (void)setStreamControl:(id)arg1;
- (id)settingsControl;
- (id)snapshotControl;
- (id)speakerControl;
- (id)streamControl;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)_hf_associatedDoorbellService;
- (id)hf_cameraManager;
- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)hf_userNotificationSettings;

@end
