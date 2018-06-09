/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey> {
    IDSPublicAccountIdentity * _accountIdentity;
    IDSMPPublicLegacyIdentity * _legacyIdentity;
    IDSMPPublicDeviceIdentity * _modernIdentity;
}

@property (nonatomic, readonly) IDSPublicAccountIdentity *accountIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSMPPublicLegacyIdentity *legacyIdentity;
@property (nonatomic, readonly) IDSMPPublicDeviceIdentity *modernIdentity;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3;
- (id)legacyIdentity;
- (id)modernIdentity;

@end
