/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPurchaseIntent : NSObject {
    id /* block */  __completion;
    NSString * _appName;
    NSString * _bundleId;
    SKXPCConnection * _connection;
    NSString * _productIdentifer;
    NSString * _productName;
}

@property (nonatomic, copy) id /* block */ _completion;

- (void).cxx_destruct;
- (id /* block */)_completion;
- (void)_send;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4;
- (void)send:(id /* block */)arg1;
- (void)set_completion:(id /* block */)arg1;

@end
