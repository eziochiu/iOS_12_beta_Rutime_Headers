/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase {
    PKPaymentMerchantSession * _merchantSession;
}

@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;

- (void).cxx_destruct;
- (id)bodyDictionaryWithDeviceData:(id)arg1;
- (id)endpointName;
- (id)initWithWrappedPayment:(id)arg1 paymentPass:(id)arg2 merchantSession:(id)arg3;
- (id)merchantSession;
- (void)setMerchantSession:(id)arg1;

@end
