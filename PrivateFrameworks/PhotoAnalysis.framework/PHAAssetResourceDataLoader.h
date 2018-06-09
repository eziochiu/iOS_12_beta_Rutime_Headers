/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading> {
    NSMutableSet * _activeDownloads;
    <PHADownloadRequestManagement> * _downloadRequestManager;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PHADownloadRequestManagement> *downloadRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1;
- (void)_inq_cancelAllDownloads;
- (void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id*)arg2;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2;
- (void)cancelAllDownloads;
- (id)downloadRequestManager;
- (id)init;
- (void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)setDownloadRequestManager:(id)arg1;

@end
