/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLAuthenticationCredentials : NSObject {
    struct __SecCertificate { } * _localCertificate;
    struct __SecKey { } * _privateKey;
    struct __SecKey { } * _publicKey;
    struct __SecCertificate { } * _remoteCertificate;
}

@property (nonatomic) struct __SecCertificate { }*localCertificate;
@property (nonatomic) struct __SecKey { }*privateKey;
@property (nonatomic) struct __SecKey { }*publicKey;
@property (nonatomic) struct __SecCertificate { }*remoteCertificate;

+ (id)generateAuthenticationCredentialsContainingSelfSignedCertificate;

- (struct __SecCertificate { }*)localCertificate;
- (struct __SecKey { }*)privateKey;
- (struct __SecKey { }*)publicKey;
- (struct __SecCertificate { }*)remoteCertificate;
- (void)setLocalCertificate:(struct __SecCertificate { }*)arg1;
- (void)setPrivateKey:(struct __SecKey { }*)arg1;
- (void)setPublicKey:(struct __SecKey { }*)arg1;
- (void)setRemoteCertificate:(struct __SecCertificate { }*)arg1;

@end