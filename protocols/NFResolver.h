/* made by EzioChiu.
 */

@protocol NFResolver <NSObject>

@required

- (<NFResolver> *)currentObjectGraphResolver:(unsigned long long)arg1;
- (void)linkResolverWithLinkBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(void *)arg1 contextBlock:(void *)arg2; // needs 2 arg types, found 7: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NFContext> *, void*
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveClass:(void *)arg1 name:(void *)arg2 contextBlock:(void *)arg3; // needs 3 arg types, found 8: Class, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NFContext> *, void*
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveProtocol:(void *)arg1 contextBlock:(void *)arg2; // needs 2 arg types, found 7: Protocol *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NFContext> *, void*
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(void *)arg1 name:(void *)arg2 contextBlock:(void *)arg3; // needs 3 arg types, found 8: Protocol *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NFContext> *, void*
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2;
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2 context:(NFContext *)arg3;

@end
