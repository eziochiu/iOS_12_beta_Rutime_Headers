/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFCallbackRegistration : NSObject <NFCallbackRegistration> {
    NFCallbackStore * _callbackStore;
    <NFDefinitionContainer> * _privateContainer;
}

@property (nonatomic, readonly) NFCallbackStore *callbackStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFDefinitionContainer> *privateContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackStore;
- (id)initWithCallbackStore:(id)arg1 privateContainer:(id)arg2;
- (id)privateContainer;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;

@end
