/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVApplicationCapabilitiesRequest : SSRequest <SSXPCCoding> {
    NSString * _bundleID;
}

@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)startWithCapabilitiesResponseBlock:(id /* block */)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
