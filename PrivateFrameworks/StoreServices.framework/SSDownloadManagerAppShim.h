/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManagerAppShim : SSDownloadManager <ASDJobManagerObserver> {
    ASDJobManager * _jobManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__app_cancelDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)__app_convertOptions:(id)arg1;
- (void)__app_dispatchBlock:(id /* block */)arg1 withError:(id)arg2;
- (id)__app_downloadsForJobs:(id)arg1;
- (id)__app_extractJobIDsFromSoftwareDownloads:(id)arg1;
- (void)__app_filterDownloads:(id)arg1 withResult:(id /* block */)arg2;
- (void)__app_finishDownloads:(id)arg1;
- (id)__app_getAllDownloads;
- (void)__app_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)__app_installManifest:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)__app_newActivityWithDownload:(id)arg1;
- (id)__app_newAssetWithDownloadAsset:(id)arg1 assetType:(id)arg2;
- (id)__app_newManifestWithType:(long long)arg1;
- (void)__app_pauseDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)__app_resumeDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)__app_sendDownloadsChanged:(id)arg1 filterSoftware:(bool)arg2;
- (void)__app_setPropertiesForActivity:(id)arg1 withDownload:(id)arg2;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;
- (void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_pauseDownloads:(id)arg1 forced:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendDownloadsChanged:(id)arg1;
- (void)cancelAllDownloadsWithCompletionBlock:(id /* block */)arg1;
- (void)cancelDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)finishDownloads:(id)arg1;
- (id)initWithManagerOptions:(id)arg1;
- (void)jobManager:(id)arg1 changedJobs:(id)arg2;
- (void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2;
- (void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)restartDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)resumeDownloads:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(id /* block */)arg3;

@end
