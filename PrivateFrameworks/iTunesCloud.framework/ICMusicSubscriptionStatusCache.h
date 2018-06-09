/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _dsidToSubscriptionStatusResponse;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_getUserIdentityCacheKeyForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1;
- (id)_init;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)arg1;
- (void)_persistCachePostingGlobalNotification:(bool)arg1;
- (void)_postLocalChangeNotification;
- (void)dealloc;
- (void)getCachedSubscriptionStatusResponseForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setCachedSubscriptionStatusResponse:(id)arg1 forRequestContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:(id /* block */)arg1;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:(id)arg1 completion:(id /* block */)arg2;

@end
