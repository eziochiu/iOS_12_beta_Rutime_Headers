/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAuthenticationSigningResult : NSObject {
    IDSAuthenticationCertificate * _authenticationCertificate;
    NSData * _inputData;
    NSData * _nonce;
    NSData * _signature;
}

@property (nonatomic, readonly) IDSAuthenticationCertificate *authenticationCertificate;
@property (nonatomic, readonly) NSData *inputData;
@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic, readonly) NSString *serverVerifiableEncoding;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)authenticationCertificate;
- (id)initWithAuthenticationCertificate:(id)arg1 inputData:(id)arg2 nonce:(id)arg3 signature:(id)arg4;
- (id)inputData;
- (id)nonce;
- (id)serverVerifiableEncoding;
- (id)signature;

@end
