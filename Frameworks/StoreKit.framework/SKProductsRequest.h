/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductsRequest : SKRequest {
    id  _productsRequestInternal;
}

@property (nonatomic) <SKProductsRequestDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)_start;
- (id)init;
- (id)initWithProductIdentifiers:(id)arg1;

@end
