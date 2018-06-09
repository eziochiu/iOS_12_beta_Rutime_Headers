/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFProxyResolver : NSObject <NFResolver, NFValidationResolver> {
    NFCallbackStore * _callbackStore;
    NFContext * _context;
    NFContainerPool * _pool;
    <NFDefinitionContainer> * _privateContainer;
    <NFDefinitionContainer> * _publicContainer;
}

@property (nonatomic, readonly) NFCallbackStore *callbackStore;
@property (nonatomic, retain) NFContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFContainerPool *pool;
@property (nonatomic, retain) <NFDefinitionContainer> *privateContainer;
@property (nonatomic, retain) <NFDefinitionContainer> *publicContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackStore;
- (id)context;
- (id)contextWithContextBlock:(id /* block */)arg1;
- (id)createProxyResolverForPrivateContainer:(id)arg1;
- (id)currentObjectGraphResolver:(unsigned long long)arg1;
- (void)ensure:(id)arg1 name:(id)arg2;
- (void)ensureClass:(Class)arg1;
- (void)ensureClass:(Class)arg1 name:(id)arg2;
- (void)ensureProtocol:(id)arg1;
- (void)ensureProtocol:(id)arg1 name:(id)arg2;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 inPool:(id)arg3 callbackStore:(id)arg4;
- (void)linkResolverWithLinkBlock:(id /* block */)arg1;
- (id)pool;
- (id)privateContainer;
- (id)publicContainer;
- (id)resolve:(id)arg1 name:(id)arg2 context:(id)arg3 validateBlock:(id /* block */)arg4;
- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 contextBlock:(id /* block */)arg2;
- (id)resolveClass:(Class)arg1 name:(id)arg2;
- (id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(id /* block */)arg3;
- (id)resolveProtocol:(id)arg1;
- (id)resolveProtocol:(id)arg1 contextBlock:(id /* block */)arg2;
- (id)resolveProtocol:(id)arg1 name:(id)arg2;
- (id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(id /* block */)arg3;
- (void)setContext:(id)arg1;
- (void)setPool:(id)arg1;
- (void)setPrivateContainer:(id)arg1;
- (void)setPublicContainer:(id)arg1;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2;
- (id)unsafeResolveForKey:(id)arg1 name:(id)arg2 context:(id)arg3;

@end
