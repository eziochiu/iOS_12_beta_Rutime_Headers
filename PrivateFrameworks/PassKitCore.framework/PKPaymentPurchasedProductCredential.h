/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential {
    PKPaymentSetupProduct * _product;
    NSString * _productIdentifier;
    PKServiceProviderPurchase * _purchase;
}

@property (nonatomic, readonly, copy) NSArray *metadata;
@property (nonatomic, retain) PKPaymentSetupProduct *product;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, readonly) PKServiceProviderPurchase *purchase;
@property (nonatomic, readonly, copy) NSString *statusDescription;
@property (nonatomic, readonly, copy) NSString *summaryMetadataDescription;

- (void).cxx_destruct;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2;
- (id)metadata;
- (id)product;
- (id)productIdentifier;
- (id)purchase;
- (void)setProduct:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setRequirementsResponse:(id)arg1;
- (id)statusDescription;
- (id)summaryMetadataDescription;

@end
