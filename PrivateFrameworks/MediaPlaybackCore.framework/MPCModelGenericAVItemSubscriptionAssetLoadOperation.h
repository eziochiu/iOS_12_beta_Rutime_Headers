/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemSubscriptionAssetLoadOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPCModelGenericAVItemAssetLoadProperties * _assetLoadProperties;
    id /* block */  _cancellationHandler;
    long long  _operationType;
    ICStoreRequestContext * _requestContext;
    id /* block */  _responseHandler;
    ICMusicSubscriptionLeaseSession * _subscriptionLeaseSession;
}

@property (nonatomic, retain) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) long long operationType;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) ICMusicSubscriptionLeaseSession *subscriptionLeaseSession;

- (void).cxx_destruct;
- (id)_handlePlaybackResponse:(id)arg1 withPlaybackCacheRequest:(id)arg2 error:(id*)arg3;
- (id)assetLoadProperties;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (void)execute;
- (id)init;
- (long long)operationType;
- (id)requestContext;
- (id /* block */)responseHandler;
- (void)setAssetLoadProperties:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSubscriptionLeaseSession:(id)arg1;
- (id)subscriptionLeaseSession;

@end
