/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse {
    NSArray * _actions;
    NSData * _amountHash;
    NSString * _paymentIdentifier;
    long long  _status;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSData *amountHash;
@property (nonatomic, readonly, copy) NSString *paymentIdentifier;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (id)actions;
- (id)amountHash;
- (bool)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)paymentIdentifier;
- (long long)status;
- (id)transactionIdentifier;

@end
