/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDeleteDaemonModule : NSObject {
    SSAppPurchaseHistoryCache * __purchaseHistoryCache;
}

- (void).cxx_destruct;
- (id)_purchaseHistoryCache;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;

@end
