/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFAuthenticatedEncryptionOperation : NSObject <_SFEncryptionOperation> {
    id  _authenticatedEncryptionOperationInternal;
}

@property (nonatomic) long long authenticationCodeLength;
@property (nonatomic) long long authenticationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) _SFAESKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_defaultAuthenticationMode;
+ (id)_defaultEncryptionOperation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationCodeLength;
- (long long)authenticationMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 error:(id*)arg4;
- (id)encrypt:(id)arg1 withKey:(id)arg2 additionalAuthenticatedData:(id)arg3 ivGenerator:(id)arg4 error:(id*)arg5;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4;
- (id)encryptionKeySpecifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 authenticationMode:(long long)arg2;
- (void)setAuthenticationCodeLength:(long long)arg1;
- (void)setAuthenticationMode:(long long)arg1;
- (void)setEncryptionKeySpecifier:(id)arg1;

@end
