/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContext : NSObject <NFContext> {
    NFCallbackStore * _callbackStore;
    NSMutableDictionary * _objects;
}

@property (nonatomic, readonly) NFCallbackStore *callbackStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *objects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callbackStore;
- (id)initWithCallbackStore:(id)arg1;
- (id)mergeWithContext:(id)arg1;
- (id)objects;
- (id)resolveForKey:(id)arg1;
- (void)unsafeUseObject:(id)arg1 forKey:(id)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forProtocol:(id)arg2;
- (void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;
- (void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;

@end
