/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFIdentity : NSObject {
    id  _identityInternal;
}

@property (nonatomic, readonly) SFIdentityAttributes *attributes;
@property (nonatomic, retain) _SFCertificate *certificate;
@property (nonatomic, retain) _SFKeyPair *keyPair;
@property (nonatomic, readonly) _SFPublicKey *publicKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)certificate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPair:(id)arg1;
- (id)initWithKeyPair:(id)arg1 certificate:(id)arg2;
- (id)initWithPublicKey:(id)arg1;
- (id)initWithPublicKey:(id)arg1 certificate:(id)arg2;
- (id)keyPair;
- (id)publicKey;
- (void)setCertificate:(id)arg1;
- (void)setKeyPair:(id)arg1;

@end
