/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating> {
    NAFuture * _accessoryCompanionLinkDeviceFuture;
    RPCompanionLinkClient * _client;
    NAFuture * _inProgressSysdiagnoseCollectionFuture;
    NAFuture * _linkIsActivatedFuture;
}

@property (nonatomic, readonly) NAFuture *accessoryCompanionLinkDeviceFuture;
@property (nonatomic, readonly) RPCompanionLinkClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (nonatomic, readonly) NAFuture *linkIsActivatedFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_home;
- (id)_homeKitAccessoryUniqueIdentifier;
- (void)_resetRapportClient;
- (id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3;
- (void)_setupRapportClient;
- (void)_updateDevices;
- (id)accessoryCompanionLinkDeviceFuture;
- (id)client;
- (id)handleButtonPressForEntity:(id)arg1;
- (id)identifyAccessory;
- (id)inProgressButtonPressFutureForEntity:(id)arg1;
- (id)inProgressSysdiagnoseCollectionFuture;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;
- (id)linkIsActivatedFuture;
- (void)setInProgressSysdiagnoseCollectionFuture:(id)arg1;
- (bool)shouldShowSettingsEntity:(id)arg1;
- (bool)supportButtonPressForEntity:(id)arg1;

@end
