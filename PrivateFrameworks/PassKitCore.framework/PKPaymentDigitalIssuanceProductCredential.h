/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential {
    PKCurrencyAmount * _balance;
    PKPaymentSetupProduct * _product;
    NSString * _productIdentifier;
    NSString * _provisioningToken;
}

@property (nonatomic, readonly, copy) PKCurrencyAmount *balance;
@property (nonatomic, readonly, copy) NSArray *metadata;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSString *provisioningToken;

- (void).cxx_destruct;
- (id)balance;
- (id)initWithPaymentSetupProduct:(id)arg1 provisioningToken:(id)arg2 balance:(id)arg3;
- (id)metadata;
- (id)product;
- (id)productIdentifier;
- (id)provisioningToken;
- (void)setProduct:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setProvisioningToken:(id)arg1;
- (void)setRequirementsResponse:(id)arg1;

@end
