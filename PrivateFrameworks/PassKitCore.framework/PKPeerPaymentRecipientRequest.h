/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest {
    NSString * _recipientAddress;
    unsigned long long  _recipientAddressSource;
    NSString * _senderAddress;
}

@property (nonatomic, copy) NSString *recipientAddress;
@property (nonatomic) unsigned long long recipientAddressSource;
@property (nonatomic, copy) NSString *senderAddress;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3;
- (id)recipientAddress;
- (unsigned long long)recipientAddressSource;
- (id)senderAddress;
- (void)setRecipientAddress:(id)arg1;
- (void)setRecipientAddressSource:(unsigned long long)arg1;
- (void)setSenderAddress:(id)arg1;

@end
