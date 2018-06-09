/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKMutablePayment : SKPayment

@property (nonatomic, copy) NSString *applicationUsername;
@property (nonatomic) bool isStoreOriginated;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, copy) NSString *partnerTransactionIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) long long quantity;
@property (nonatomic, copy) NSData *requestData;
@property (nonatomic, copy) NSDictionary *requestParameters;
@property (nonatomic) bool simulatesAskToBuyInSandbox;

- (void)setApplicationUsername:(id)arg1;
- (void)setIsStoreOriginated:(bool)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setPartnerTransactionIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setQuantity:(long long)arg1;
- (void)setRequestData:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setSimulatesAskToBuyInSandbox:(bool)arg1;

@end
