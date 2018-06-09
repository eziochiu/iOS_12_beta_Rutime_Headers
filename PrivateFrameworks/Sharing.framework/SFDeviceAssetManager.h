/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceAssetManager : NSObject {
    bool  _activateCalled;
    NSURL * _cacheDirectory;
    NSDictionary * _cachedMpnMappingTable;
    NSDictionary * _cachedProductMappingsTable;
    NSMutableDictionary * _cachedQueryPaths;
    MAAsset * _deviceAssetManagement;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSDictionary * _mpnMappingTable;
    NSString * _networkStatus;
    NSDictionary * _productTypesMappingTable;
    CUReachabilityMonitor * _reachabilityMonitor;
    bool  _useProcessLocalCache;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSString *networkStatus;
@property (nonatomic) bool useProcessLocalCache;

- (void).cxx_destruct;
- (void)activate;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (void)addQueryResultToLocalCache:(id)arg1 url:(id)arg2 isFallback:(bool)arg3;
- (id)cacheDirectory;
- (bool)canUseMobileAssetSPI;
- (void)clearQueryResultFromLocalCache:(id)arg1;
- (id)dispatchQueue;
- (void)getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)hardcodedMappedProducts;
- (id)init;
- (void)invalidate;
- (id)localCacheWithFileName:(id)arg1;
- (id)locallyCachedMPNs;
- (id)locallyCachedProductMappings;
- (id)locallyCachedQueryResults;
- (void)logNetworkStatus;
- (void)mappedProductTypeForProductType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)mpnMappingTableFromPropertyList:(id)arg1;
- (id)networkStatus;
- (void)onqueue_activate;
- (id)onqueue_assetMappedMPNForMPN:(id)arg1;
- (id)onqueue_assetMappedProductTypeForProductType:(id)arg1;
- (void)onqueue_downloadAsset:(id)arg1 ucat:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)arg2 queryLogString:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 ucat:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)arg2 queryType:(id)arg3 fallback:(bool)arg4 retryAttempt:(bool)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(bool)arg2 fallback:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)onqueue_getCachedAssetBundleForTask:(id)arg1;
- (void)onqueue_invalidate;
- (id)onqueue_managementAsset;
- (void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_updateManagementAssetIfNecessary;
- (void)onqueue_updateMetaDataWithCompletionHandler:(id /* block */)arg1;
- (void)onqueue_validateMPNInQuery:(id)arg1;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (id)queryTypeForInstalledOnly:(bool)arg1 fallback:(bool)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setUseProcessLocalCache:(bool)arg1;
- (void)storeEntries:(id)arg1 inLocalCacheWithFileName:(id)arg2;
- (void)storeMPNsInLocalCache:(id)arg1;
- (void)storeProductMappingsInLocalCache:(id)arg1;
- (void)storeQueryResultsInLocalCache:(id)arg1;
- (bool)useProcessLocalCache;

@end
