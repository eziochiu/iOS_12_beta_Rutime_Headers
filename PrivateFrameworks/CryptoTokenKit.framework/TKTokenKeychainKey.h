/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenKeychainKey : TKTokenKeychainItem {
    NSData * _applicationTag;
    bool  _canDecrypt;
    bool  _canPerformKeyExchange;
    bool  _canSign;
    long long  _keySizeInBits;
    NSString * _keyType;
    NSData * _publicKeyData;
    NSData * _publicKeyHash;
    bool  _suitableForLogin;
}

@property (copy) NSData *applicationTag;
@property bool canDecrypt;
@property bool canPerformKeyExchange;
@property bool canSign;
@property long long keySizeInBits;
@property (copy) NSString *keyType;
@property (readonly) unsigned long long keyUsage;
@property (copy) NSData *publicKeyData;
@property (copy) NSData *publicKeyHash;
@property (getter=isSuitableForLogin) bool suitableForLogin;

- (void).cxx_destruct;
- (id)applicationTag;
- (bool)canDecrypt;
- (bool)canPerformKeyExchange;
- (bool)canSign;
- (void)createConstraints:(unsigned char)arg1;
- (id)initWithCertificate:(struct __SecCertificate { }*)arg1 objectID:(id)arg2;
- (bool)isSuitableForLogin;
- (long long)keySizeInBits;
- (id)keyType;
- (unsigned long long)keyUsage;
- (id)keychainAttributes;
- (id)publicKeyData;
- (id)publicKeyHash;
- (bool)satisfiesKeyUsage:(unsigned long long)arg1;
- (void)setApplicationTag:(id)arg1;
- (void)setCanDecrypt:(bool)arg1;
- (void)setCanPerformKeyExchange:(bool)arg1;
- (void)setCanSign:(bool)arg1;
- (void)setKeySizeInBits:(long long)arg1;
- (void)setKeyType:(id)arg1;
- (void)setPublicKeyData:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setSuitableForLogin:(bool)arg1;

@end
