/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSenderIdentityCapabilitiesState : NSObject <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    TUCTCapabilitiesState * _csCallingCapabilitiesState;
    bool  _emergencyCallbackModeEnabled;
    NSUUID * _senderIdentityUUID;
    bool  _supportsSimultaneousVoiceAndData;
    TUThumperCTCapabilitiesState * _thumperCallingCapabilitiesState;
    bool  _valid;
    TUCTCapabilitiesState * _voLTECallingCapabilitiesState;
    TUCTCapabilitiesState * _wiFiCallingCapabilitiesState;
}

@property (nonatomic, copy) TUCTCapabilitiesState *csCallingCapabilitiesState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmergencyCallbackModeEnabled, nonatomic) bool emergencyCallbackModeEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *senderIdentityUUID;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsSimultaneousVoiceAndData;
@property (nonatomic, copy) TUThumperCTCapabilitiesState *thumperCallingCapabilitiesState;
@property (getter=isValid, nonatomic) bool valid;
@property (nonatomic, copy) TUCTCapabilitiesState *voLTECallingCapabilitiesState;
@property (nonatomic, copy) TUCTCapabilitiesState *wiFiCallingCapabilitiesState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)csCallingCapabilitiesState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderIdentityUUID:(id)arg1;
- (bool)isEmergencyCallbackModeEnabled;
- (bool)isValid;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (id)senderIdentityUUID;
- (void)setCsCallingCapabilitiesState:(id)arg1;
- (void)setEmergencyCallbackModeEnabled:(bool)arg1;
- (void)setSupportsSimultaneousVoiceAndData:(bool)arg1;
- (void)setThumperCallingCapabilitiesState:(id)arg1;
- (void)setValid:(bool)arg1;
- (void)setVoLTECallingCapabilitiesState:(id)arg1;
- (void)setWiFiCallingCapabilitiesState:(id)arg1;
- (bool)supportsSimultaneousVoiceAndData;
- (id)thumperCallingCapabilitiesState;
- (id)voLTECallingCapabilitiesState;
- (id)wiFiCallingCapabilitiesState;

@end
