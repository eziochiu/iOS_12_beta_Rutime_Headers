/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding> {
    unsigned long long  _action;
    NSString * _appBundleId;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, copy) NSString *appBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)appBundleId;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
