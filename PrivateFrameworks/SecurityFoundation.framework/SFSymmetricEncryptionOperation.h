/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation> {
    id  _symmetricEncryptionOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (readonly) Class superclass;

+ (long long)_defaultEncryptionMode;
+ (id)_defaultEncryptionOperation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id*)arg4;
- (id)encryptionKeySpecifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;
- (long long)mode;
- (void)setEncryptionKeySpecifier:(id)arg1;
- (void)setMode:(long long)arg1;

@end
