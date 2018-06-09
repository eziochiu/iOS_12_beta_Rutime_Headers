/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPassDetailsResponse : PKPeerPaymentWebServiceResponse {
    long long  _cardType;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSURL * _passURL;
    NSString * _provisioningIdentifier;
    PKPaymentRemoteCredential * _remoteCredential;
    long long  _status;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly, copy) NSString *passSerialNumber;
@property (nonatomic, readonly, copy) NSString *passTypeIdentifier;
@property (nonatomic, readonly, copy) NSURL *passURL;
@property (nonatomic, readonly, copy) NSString *provisioningIdentifier;
@property (nonatomic, readonly) PKPaymentRemoteCredential *remoteCredential;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (long long)cardType;
- (id)initWithData:(id)arg1;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)provisioningIdentifier;
- (id)remoteCredential;
- (long long)status;

@end
