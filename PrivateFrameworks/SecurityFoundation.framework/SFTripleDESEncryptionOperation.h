/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFTripleDESEncryptionOperation : SFSymmetricEncryptionOperation {
    id  _tripleDESEncryptionOperationInternal;
}

@property (nonatomic, copy) _SFTripleDESKeySpecifier *encryptionKeySpecifier;

- (void).cxx_destruct;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;

@end
