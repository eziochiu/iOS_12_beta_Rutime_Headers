/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridDownloadHelper : NSObject {
    NSMutableDictionary * _downloadContexts;
    NSObject<OS_dispatch_queue> * _downloadContextsIsolationQueue;
    PUPhotosGridViewController * _gridViewController;
    long long  _mode;
    bool  _shouldTreatLivePhotosAsStills;
}

@property (nonatomic, readonly) PUPhotosGridViewController *gridViewController;
@property (nonatomic) long long mode;
@property (nonatomic) bool shouldTreatLivePhotosAsStills;

+ (id)createAlertControllerForDownloadErrorWithAsset:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelPreviousDownloadsForAsset:(id)arg1;
- (void)_checkIfDownloadIsRequiredForAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)_defaultOptions;
- (id)_downloadContextForIdentifier:(id)arg1;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(bool)arg2 canceled:(bool)arg3 error:(id)arg4;
- (void)_removeDownloadRequestForIdentifier:(id)arg1;
- (void)_setDownloadContext:(id)arg1 forIdentifier:(id)arg2;
- (void)_startDownloadingRequiredResourcesForRequest:(id)arg1 options:(id)arg2 inCollection:(id)arg3;
- (void)_updateDownloadProgressForAsset:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadForIdentifier:(id)arg1;
- (void)checkIfDownloadIsRequiredForAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)gridViewController;
- (void)handleDownloadOfAsset:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(id /* block */)arg3;
- (void)handleDownloadOfAssetIfNeeded:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithGridViewController:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (void)setShouldTreatLivePhotosAsStills:(bool)arg1;
- (bool)shouldTreatLivePhotosAsStills;

@end
