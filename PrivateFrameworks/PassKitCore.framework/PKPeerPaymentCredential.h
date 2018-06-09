/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentCredential : PKPaymentCredential {
    PKPeerPaymentAccount * _account;
    PKCurrencyAmount * _amount;
    PKPeerPaymentPassDetailsResponse * _passDetailsResponse;
    NSString * _pendingPaymentSenderAddress;
    NSString * _pendingPaymentSenderName;
    unsigned long long  _state;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic, retain) PKPeerPaymentPassDetailsResponse *passDetailsResponse;
@property (nonatomic, copy) NSString *pendingPaymentSenderAddress;
@property (nonatomic, readonly, copy) NSString *pendingPaymentSenderName;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)account;
- (id)amount;
- (unsigned long long)hash;
- (id)initWithPeerPaymentAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)longDescription;
- (id)passDetailsResponse;
- (id)pendingPaymentSenderAddress;
- (id)pendingPaymentSenderName;
- (void)setAmount:(id)arg1;
- (void)setPassDetailsResponse:(id)arg1;
- (void)setPendingPaymentSenderAddress:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
