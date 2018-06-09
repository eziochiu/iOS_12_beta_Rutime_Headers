/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtocol : NSObject {
    NSURLProtocolInternal * _internal;
}

@property (readonly, copy) NSCachedURLResponse *cachedResponse;
@property (readonly, retain) <NSURLProtocolClient> *client;
@property (readonly, copy) NSURLRequest *request;

+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;
+ (Class)_protocolClassForRequest:(id)arg1;
+ (bool)canInitWithRequest:(id)arg1;
+ (bool)canInitWithTask:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (bool)registerClass:(Class)arg1;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (void)unregisterClass:(Class)arg1;

- (id)cachedResponse;
- (id)client;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)request;
- (void)startLoading;
- (void)stopLoading;

@end
