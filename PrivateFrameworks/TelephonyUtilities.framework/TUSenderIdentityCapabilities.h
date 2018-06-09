/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSenderIdentityCapabilities : NSObject {
    TUCallCapabilitiesXPCClient * _client;
    bool  _emergencyCallbackModeEnabled;
    NSUUID * _senderIdentityUUID;
    TUSenderIdentityCapabilitiesState * _state;
    NSString * _thumperCallingLocalDeviceID;
}

@property (nonatomic, readonly) TUCallCapabilitiesXPCClient *client;
@property (getter=isCSCallingCurrentlyAvailable, nonatomic, readonly) bool csCallingCurrentlyAvailable;
@property (getter=isEmergencyCallbackModeEnabled, nonatomic) bool emergencyCallbackModeEnabled;
@property (getter=isEmergencyWiFiCallingCurrentlyAvailable, nonatomic, readonly) bool emergencyWiFiCallingCurrentlyAvailable;
@property (nonatomic, readonly, copy) NSUUID *senderIdentityUUID;
@property (nonatomic, readonly, copy) TUSenderIdentityCapabilitiesState *state;
@property (nonatomic, readonly) bool supportsEmergencyWiFiCalling;
@property (nonatomic, readonly) bool supportsSimultaneousVoiceAndData;
@property (nonatomic, readonly) bool supportsThumperCalling;
@property (nonatomic, readonly) bool supportsThumperCallingOverCellularData;
@property (nonatomic, readonly) bool supportsVoLTECalling;
@property (nonatomic, readonly) bool supportsWiFiCalling;
@property (nonatomic, readonly) bool supportsWiFiCallingRoaming;
@property (getter=isThumperCallingAllowedForCurrentDevice, nonatomic, readonly) bool thumperCallingAllowedForCurrentDevice;
@property (getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice, nonatomic, readonly) bool thumperCallingAllowedOnDefaultPairedSecondaryDevice;
@property (nonatomic, readonly) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (getter=isThumperCallingCurrentlyAvailable, nonatomic, readonly) bool thumperCallingCurrentlyAvailable;
@property (getter=isThumperCallingEnabled, nonatomic, readonly) bool thumperCallingEnabled;
@property (nonatomic, copy) NSString *thumperCallingLocalDeviceID;
@property (nonatomic, readonly, copy) NSData *thumperCallingProvisioningPostData;
@property (nonatomic, readonly) int thumperCallingProvisioningStatus;
@property (nonatomic, readonly, copy) NSURL *thumperCallingProvisioningURL;
@property (getter=isThumperCallingProvisioningURLInvalid, nonatomic, readonly) bool thumperCallingProvisioningURLInvalid;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (getter=isVoLTECallingCurrentlyAvailable, nonatomic, readonly) bool voLTECallingCurrentlyAvailable;
@property (getter=isVoLTECallingEnabled, nonatomic, readonly) bool voLTECallingEnabled;
@property (nonatomic, readonly) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (getter=isWiFiCallingCurrentlyAvailable, nonatomic, readonly) bool wiFiCallingCurrentlyAvailable;
@property (getter=isWiFiCallingEnabled, nonatomic, readonly) bool wiFiCallingEnabled;
@property (nonatomic, readonly, copy) NSData *wiFiCallingProvisioningPostData;
@property (nonatomic, readonly) int wiFiCallingProvisioningStatus;
@property (nonatomic, readonly, copy) NSURL *wiFiCallingProvisioningURL;
@property (getter=isWiFiCallingProvisioningURLInvalid, nonatomic, readonly) bool wiFiCallingProvisioningURLInvalid;
@property (getter=isWiFiCallingRoamingEnabled, nonatomic, readonly) bool wiFiCallingRoamingEnabled;

- (void).cxx_destruct;
- (void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)arg1;
- (void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
- (id)client;
- (id)debugDescription;
- (void)endEmergencyCallbackMode;
- (id)initWithSenderIdentityUUID:(id)arg1 state:(id)arg2 client:(id)arg3;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (bool)isCSCallingCurrentlyAvailable;
- (bool)isEmergencyCallbackModeEnabled;
- (bool)isEmergencyWiFiCallingCurrentlyAvailable;
- (bool)isThumperCallingAllowedForCurrentDevice;
- (bool)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
- (bool)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1;
- (bool)isThumperCallingCurrentlyAvailable;
- (bool)isThumperCallingEnabled;
- (bool)isThumperCallingProvisioningURLInvalid;
- (bool)isValid;
- (bool)isVoLTECallingCurrentlyAvailable;
- (bool)isVoLTECallingEnabled;
- (bool)isWiFiCallingCurrentlyAvailable;
- (bool)isWiFiCallingEnabled;
- (bool)isWiFiCallingProvisioningURLInvalid;
- (bool)isWiFiCallingRoamingEnabled;
- (void)requestPinFromPrimaryDeviceForThumperCalling;
- (id)senderIdentityUUID;
- (void)setEmergencyCallbackModeEnabled:(bool)arg1;
- (void)setThumperCallingAllowed:(bool)arg1 onSecondaryDeviceWithID:(id)arg2;
- (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(bool)arg1;
- (void)setThumperCallingEnabled:(bool)arg1;
- (void)setThumperCallingLocalDeviceID:(id)arg1;
- (void)setVoLTECallingEnabled:(bool)arg1;
- (void)setWiFiCallingEnabled:(bool)arg1;
- (void)setWiFiCallingRoamingEnabled:(bool)arg1;
- (id)state;
- (bool)supportsEmergencyWiFiCalling;
- (bool)supportsSimultaneousVoiceAndData;
- (bool)supportsThumperCalling;
- (bool)supportsThumperCallingOverCellularData;
- (bool)supportsVoLTECalling;
- (bool)supportsWiFiCalling;
- (bool)supportsWiFiCallingRoaming;
- (id)thumperCallingCapabilityInfo;
- (id)thumperCallingLocalDeviceID;
- (id)thumperCallingProvisioningPostData;
- (int)thumperCallingProvisioningStatus;
- (id)thumperCallingProvisioningURL;
- (id)voLTECallingCapabilityInfo;
- (id)wiFiCallingCapabilityInfo;
- (id)wiFiCallingProvisioningPostData;
- (int)wiFiCallingProvisioningStatus;
- (id)wiFiCallingProvisioningURL;

@end
