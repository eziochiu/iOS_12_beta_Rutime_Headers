/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilitiesState : NSObject <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    bool  _accountsMatchForSecondaryCalling;
    bool  _accountsSupportSecondaryCalling;
    NSArray * _cloudCallingDevices;
    bool  _emergencyCallbackPossible;
    bool  _faceTimeAudioAvailable;
    bool  _faceTimeVideoAvailable;
    NSString * _outgoingRelayCallerID;
    int  _relayCallingAvailability;
    NSDictionary * _relayCallingDisabledForDeviceID;
    bool  _relayCallingEnabled;
    bool  _relayCallingFeaturesEnabled;
    NSDictionary * _senderIdentityCapabilitiesStateByUUID;
    bool  _supportsBasebandCalling;
    bool  _supportsCarrierServices;
    bool  _supportsCellularData;
    bool  _supportsDisplayingFaceTimeAudioCalls;
    bool  _supportsDisplayingFaceTimeVideoCalls;
    bool  _supportsDisplayingTelephonyCalls;
    bool  _supportsFaceTimeAudioRelayCalling;
    bool  _supportsFaceTimeVideoRelayCalling;
    bool  _supportsPrimaryCalling;
    bool  _supportsRelayCalling;
    bool  _supportsTelephonyRelayCalling;
}

@property (nonatomic) bool accountsMatchForSecondaryCalling;
@property (nonatomic) bool accountsSupportSecondaryCalling;
@property (nonatomic, copy) NSArray *cloudCallingDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TUCloudCallingDevice *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (getter=isEmergencyCallbackPossible, nonatomic) bool emergencyCallbackPossible;
@property (getter=isFaceTimeAudioAvailable, nonatomic) bool faceTimeAudioAvailable;
@property (getter=isFaceTimeVideoAvailable, nonatomic) bool faceTimeVideoAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *outgoingRelayCallerID;
@property (nonatomic) int relayCallingAvailability;
@property (nonatomic, copy) NSDictionary *relayCallingDisabledForDeviceID;
@property (getter=isRelayCallingEnabled, nonatomic) bool relayCallingEnabled;
@property (getter=areRelayCallingFeaturesEnabled, nonatomic) bool relayCallingFeaturesEnabled;
@property (nonatomic, copy) NSDictionary *senderIdentityCapabilitiesStateByUUID;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBasebandCalling;
@property (nonatomic) bool supportsCarrierServices;
@property (nonatomic) bool supportsCellularData;
@property (nonatomic) bool supportsDisplayingFaceTimeAudioCalls;
@property (nonatomic) bool supportsDisplayingFaceTimeVideoCalls;
@property (nonatomic) bool supportsDisplayingTelephonyCalls;
@property (nonatomic) bool supportsFaceTimeAudioRelayCalling;
@property (nonatomic) bool supportsFaceTimeVideoRelayCalling;
@property (nonatomic) bool supportsPrimaryCalling;
@property (nonatomic) bool supportsRelayCalling;
@property (nonatomic) bool supportsTelephonyRelayCalling;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accountsMatchForSecondaryCalling;
- (bool)accountsSupportSecondaryCalling;
- (bool)areRelayCallingFeaturesEnabled;
- (id)cloudCallingDevices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPairedDevice;
- (id)description;
- (id)deviceIDForPhoneNumber:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmergencyCallbackPossible;
- (bool)isFaceTimeAudioAvailable;
- (bool)isFaceTimeVideoAvailable;
- (bool)isRelayCallingEnabled;
- (id)outgoingRelayCallerID;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (int)relayCallingAvailability;
- (id)relayCallingDisabledForDeviceID;
- (id)senderIdentityCapabilitiesStateByUUID;
- (void)setAccountsMatchForSecondaryCalling:(bool)arg1;
- (void)setAccountsSupportSecondaryCalling:(bool)arg1;
- (void)setCloudCallingDevices:(id)arg1;
- (void)setEmergencyCallbackPossible:(bool)arg1;
- (void)setFaceTimeAudioAvailable:(bool)arg1;
- (void)setFaceTimeVideoAvailable:(bool)arg1;
- (void)setOutgoingRelayCallerID:(id)arg1;
- (void)setRelayCallingAvailability:(int)arg1;
- (void)setRelayCallingDisabledForDeviceID:(id)arg1;
- (void)setRelayCallingEnabled:(bool)arg1;
- (void)setRelayCallingFeaturesEnabled:(bool)arg1;
- (void)setSenderIdentityCapabilitiesStateByUUID:(id)arg1;
- (void)setSupportsBasebandCalling:(bool)arg1;
- (void)setSupportsCarrierServices:(bool)arg1;
- (void)setSupportsCellularData:(bool)arg1;
- (void)setSupportsDisplayingFaceTimeAudioCalls:(bool)arg1;
- (void)setSupportsDisplayingFaceTimeVideoCalls:(bool)arg1;
- (void)setSupportsDisplayingTelephonyCalls:(bool)arg1;
- (void)setSupportsFaceTimeAudioRelayCalling:(bool)arg1;
- (void)setSupportsFaceTimeVideoRelayCalling:(bool)arg1;
- (void)setSupportsPrimaryCalling:(bool)arg1;
- (void)setSupportsRelayCalling:(bool)arg1;
- (void)setSupportsTelephonyRelayCalling:(bool)arg1;
- (bool)supportsBasebandCalling;
- (bool)supportsCarrierServices;
- (bool)supportsCellularData;
- (bool)supportsDisplayingFaceTimeAudioCalls;
- (bool)supportsDisplayingFaceTimeVideoCalls;
- (bool)supportsDisplayingTelephonyCalls;
- (bool)supportsFaceTimeAudioRelayCalling;
- (bool)supportsFaceTimeVideoRelayCalling;
- (bool)supportsPrimaryCalling;
- (bool)supportsRelayCalling;
- (bool)supportsTelephonyRelayCalling;

@end
