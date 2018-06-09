/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMobileAssetMediator : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _isWaitingForReachability;
    NSMutableSet * _queuedAssetMatchSet;
    struct __SCNetworkReachability { } * _reachabilityRef;
    TIMobileAssetSyncState * _syncState;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool isWaitingForReachability;
@property (nonatomic, readonly) NSMutableSet *queuedAssetMatchSet;
@property (nonatomic, readonly) struct __SCNetworkReachability { }*reachabilityRef;
@property (nonatomic, readonly) TIMobileAssetSyncState *syncState;

+ (id)assetDownloadsInProgress;
+ (id)assetsByRemovingOldVersionsFromAssets:(id)arg1;
+ (id)compatibilityPredicate;
+ (oneway void)downloadAsset:(id)arg1 continuation:(id /* block */)arg2;
+ (id)downloadOptionsForAsset:(id)arg1;
+ (id /* block */)downloadProgressHandlerForAsset:(id)arg1;
+ (id)fetchAssetInformationForDownloadsInProgress;
+ (id)fetchAssetInformationMatchingAny:(id)arg1 localOnly:(bool)arg2 compatibleOnly:(bool)arg3;
+ (bool)isDownloadOverdueForAsset:(id)arg1;
+ (id)knownAssetIdentifiers;
+ (id)predicateForAssetMatch:(id)arg1 compatibleVersionOnly:(bool)arg2;
+ (id)predicateForKey:(id)arg1 matchingAnyDictionaryIn:(id)arg2 acceptUnspecifiedValue:(bool)arg3 acceptUnspecifiedAttribute:(bool)arg4 lenientMatch:(bool)arg5;
+ (id)predicateForKey:(id)arg1 matchingAnyStringIn:(id)arg2 acceptUnspecifiedValue:(bool)arg3;
+ (id)predicateForKey:(id)arg1 matchingString:(id)arg2 acceptUnspecifiedValue:(bool)arg3;
+ (id)predicateForTIAsset:(id)arg1;
+ (id)queryAssetsWithPredicate:(id)arg1 localOnly:(bool)arg2 error:(id*)arg3;
+ (void)recordDownloadEndedForAsset:(id)arg1;
+ (void)recordDownloadStartedForAssets:(id)arg1;
+ (void)saveAssetDownloadsInProgress;
+ (id)uniqueIdentifierForAsset:(id)arg1;
+ (id)uniqueIdentifierWithVersionForAsset:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dispatchQueue;
- (oneway void)downloadAssets:(id)arg1 continuation:(id /* block */)arg2;
- (void)downloadUninstalledAssetsMatching:(id)arg1 continuation:(id /* block */)arg2;
- (void)downloadUninstalledAssetsMatchingQueuedAssetMatchSet;
- (id)fetchInstalledAssetInformation;
- (oneway void)fetchUninstalledAssetInformationMatchingAny:(id)arg1 continuation:(id /* block */)arg2;
- (id)initWithDispatchQueue:(id)arg1;
- (bool)isWaitingForReachability;
- (id)queuedAssetMatchSet;
- (void)reachabilityChanged;
- (struct __SCNetworkReachability { }*)reachabilityRef;
- (void)registerReachabilityCallback;
- (void)retryDownloadsWhenReachable;
- (void)setIsWaitingForReachability:(bool)arg1;
- (bool)shouldDownloadUninstalledAssets;
- (id)syncState;
- (void)syncToRemoteMetadataIfNecessary;
- (void)tryDownloadUninstalledAssetsMatchingQueuedAssetMatchSet;
- (bool)tryToPurgeAsset:(id)arg1;

@end
