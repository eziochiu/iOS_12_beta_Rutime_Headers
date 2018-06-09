/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBookDownload : SSDownload {
    NSString * _downloadPhaseIdentifierOverride;
    <SSBookDownloadQueue> * _downloadQueue;
    <SSBookDownloadStatus> * _downloadStatus;
}

@property (nonatomic, readonly) NSString *downloadID;
@property (nonatomic, retain) NSString *downloadPhaseIdentifierOverride;
@property (nonatomic, readonly) <SSBookDownloadStatus> *downloadStatus;

- (void).cxx_destruct;
- (void)_becomeManagedOnConnection:(id)arg1;
- (bool)addAsset:(id)arg1 forType:(id)arg2;
- (id)assetsForType:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)downloadID;
- (id)downloadPhaseIdentifier;
- (id)downloadPhaseIdentifierOverride;
- (id)downloadPolicy;
- (long long)downloadSizeLimit;
- (id)downloadStatus;
- (double)estimatedSecondsRemaining;
- (id)initWithDownloadStatus:(id)arg1;
- (bool)isBackgroundNetworkingUserInitiated;
- (bool)isCancelable;
- (bool)isEligibleForRestore:(id*)arg1;
- (id)metadata;
- (id)networkConstraints;
- (void)pause;
- (double)percentComplete;
- (long long)persistentIdentifier;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)removeAsset:(id)arg1;
- (void)restart;
- (void)resume;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setBackgroundNetworkingUserInitiated:(bool)arg1;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloadPhaseIdentifierOverride:(id)arg1;
- (void)setDownloadPolicy:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)status;
- (id)valueForProperty:(id)arg1;

@end
