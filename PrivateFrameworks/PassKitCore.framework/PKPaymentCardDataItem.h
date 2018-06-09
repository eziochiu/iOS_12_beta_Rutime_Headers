/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCardDataItem : PKPaymentDataItem {
    PKCurrencyAmount * _peerPaymentBalance;
    bool  _showPeerPaymentBalance;
}

@property (nonatomic, readonly) CNContact *billingAddress;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, readonly) bool requiresBillingAddress;
@property (nonatomic) bool showPeerPaymentBalance;

+ (long long)dataType;

- (void).cxx_destruct;
- (id)billingAddress;
- (id)errors;
- (bool)isValidWithError:(id*)arg1;
- (id)pass;
- (id)paymentApplication;
- (id)peerPaymentBalance;
- (bool)requiresBillingAddress;
- (void)setPeerPaymentBalance:(id)arg1;
- (void)setShowPeerPaymentBalance:(bool)arg1;
- (bool)showPeerPaymentBalance;
- (long long)status;

@end
