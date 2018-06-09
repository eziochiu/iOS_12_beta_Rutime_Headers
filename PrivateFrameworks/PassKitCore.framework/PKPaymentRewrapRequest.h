/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapRequest : PKPaymentRewrapRequestBase {
    NSString * _merchantIdentifier;
}

@property (nonatomic, copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)bodyDictionaryWithDeviceData:(id)arg1;
- (id)endpointName;
- (id)initWithWrappedPayment:(id)arg1 paymentPass:(id)arg2 merchantIdentifier:(id)arg3;
- (id)merchantIdentifier;
- (void)setMerchantIdentifier:(id)arg1;

@end
