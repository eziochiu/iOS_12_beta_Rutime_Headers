/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPN : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _disconnectOnDemandEnabled;
    bool  _enabled;
    NSArray * _exceptionApps;
    bool  _onDemandEnabled;
    NSArray * _onDemandRules;
    NEVPNProtocol * _protocol;
}

@property (getter=isDisconnectOnDemandEnabled, nonatomic) bool disconnectOnDemandEnabled;
@property (getter=isEnabled) bool enabled;
@property (copy) NSArray *exceptionApps;
@property (getter=isOnDemandEnabled) bool onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (copy) NEVPNProtocol *protocol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyProfileDictionaryWithCertificateUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionApps;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDisconnectOnDemandEnabled;
- (bool)isEnabled;
- (bool)isOnDemandEnabled;
- (id)onDemandRules;
- (id)protocol;
- (void)setDisconnectOnDemandEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExceptionApps:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setProtocol:(id)arg1;

@end
