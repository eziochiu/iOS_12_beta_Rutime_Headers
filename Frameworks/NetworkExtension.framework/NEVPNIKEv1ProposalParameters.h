/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    int  _diffieHellmanGroup;
    long long  _encryptionAlgorithm;
    long long  _integrityAlgorithm;
    int  _lifetimeSeconds;
}

@property int diffieHellmanGroup;
@property long long encryptionAlgorithm;
@property long long integrityAlgorithm;
@property int lifetimeSeconds;

+ (bool)supportsSecureCoding;

- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (int)diffieHellmanGroup;
- (void)encodeWithCoder:(id)arg1;
- (long long)encryptionAlgorithm;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)integrityAlgorithm;
- (int)lifetimeSeconds;
- (void)setDiffieHellmanGroup:(int)arg1;
- (void)setEncryptionAlgorithm:(long long)arg1;
- (void)setIntegrityAlgorithm:(long long)arg1;
- (void)setLifetimeSeconds:(int)arg1;

@end
