/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIResourceLoader : NSObject <NSCacheDelegate> {
    SKUIClientContext * _clientContext;
    <SKUIResourceLoaderDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    bool  _inBackground;
    NSString * _name;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _operationsByRequestID;
    long long  _requestCountMap;
    NSMapTable * _requestsByCacheKey;
    NSCache * _resourcesByRequestID;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIResourceLoaderDelegate> *delegate;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIdle, nonatomic, readonly) bool idle;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) long long resourceCacheLimit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (long long)_qualityOfService;
- (long long)_queuePriorityForLoadReason:(long long)arg1;
- (void)_reprioritizeOperations;
- (void)_sendDidBeginLoadingIfNecessary;
- (void)_sendDidIdleIfNecessary;
- (void)_sendDidLoadAllForReason:(long long)arg1;
- (void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2;
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)cachedResourceForRequestIdentifier:(unsigned long long)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestWithIdentifier:(unsigned long long)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (void)enterBackground;
- (void)enterForeground;
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (id)initWithOperationQueue:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (bool)isIdle;
- (bool)isIdleForReason:(long long)arg1;
- (bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;
- (id)name;
- (id)operationQueue;
- (void)removeAllCachedResources;
- (id)requestIdentifierForCacheKey:(id)arg1;
- (long long)resourceCacheLimit;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (void)setResourceCacheLimit:(long long)arg1;
- (bool)trySetReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;

@end
