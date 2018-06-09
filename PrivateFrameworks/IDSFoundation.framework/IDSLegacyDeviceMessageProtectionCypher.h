/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher> {
    IDSMPPublicLegacyIdentity * _publicIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IDSMPPublicLegacyIdentity *publicIdentity;
@property (readonly) Class superclass;

+ (id)cypherWithEndpoint:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_fullIdentityFromAccountIdentity:(id)arg1 error:(id*)arg2;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicIdentity:(id)arg1;
- (id)publicIdentity;

@end
