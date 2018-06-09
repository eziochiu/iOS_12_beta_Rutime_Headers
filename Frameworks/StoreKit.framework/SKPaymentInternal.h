/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentInternal : NSObject <NSCopying> {
    NSString * _applicationUsername;
    bool  _isStoreOriginated;
    NSString * _partnerIdentifier;
    NSString * _partnerTransactionIdentifier;
    NSString * _productIdentifier;
    long long  _quantity;
    NSData * _requestData;
    NSDictionary * _requestParameters;
    bool  _simulatesAskToBuyInSandbox;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
