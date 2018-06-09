/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDuplicateActionController : NSObject {
    NSDictionary * __assetsByAssetCollection;
    bool  __canDuplicate;
    bool  __canExtractStill;
    bool  __didCheckDuplicateCapabilities;
    NSProgress * __downloadingProgress;
    NSProgress * __duplicatingProgress;
    id /* block */  __onFinishDownloadCompletionHandler;
    NSProgress * __overallProgress;
    PUActivityProgressController * __progressController;
    long long  _itemCount;
    NSMutableArray * _resourceDownloadRequests;
}

@property (nonatomic, readonly, copy) NSDictionary *_assetsByAssetCollection;
@property (nonatomic, readonly) bool _canDuplicate;
@property (nonatomic, readonly) bool _canExtractStill;
@property (setter=_setDidCheckDuplicateCapabilities:, nonatomic) bool _didCheckDuplicateCapabilities;
@property (setter=_setDownloadingProgress:, nonatomic, retain) NSProgress *_downloadingProgress;
@property (setter=_setDuplicatingProgress:, nonatomic, retain) NSProgress *_duplicatingProgress;
@property (setter=_setOnFinishDownloadCompletionHandler:, nonatomic, copy) id /* block */ _onFinishDownloadCompletionHandler;
@property (setter=_setOverallProgress:, nonatomic, retain) NSProgress *_overallProgress;
@property (setter=_setProgressController:, nonatomic, retain) PUActivityProgressController *_progressController;
@property (nonatomic, readonly) bool shouldUseAlertController;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)arg1 hasPhotos:(bool)arg2 hasVideos:(bool)arg3;
+ (bool)canPerformDuplicateActionOnAssets:(id)arg1 orAssetsByAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_assetsByAssetCollection;
- (bool)_canDuplicate;
- (bool)_canExtractStill;
- (void)_checkDuplicateCapabilities;
- (void)_checkHasPhotos:(bool*)arg1 hasVideos:(bool*)arg2;
- (bool)_didCheckDuplicateCapabilities;
- (void)_downloadResourcesForDuplicateAction:(long long)arg1 newStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadingProgress;
- (id)_duplicatingProgress;
- (void)_finishedDownloadWithSuccess:(bool)arg1;
- (void)_finishedDuplicationWithSuccess:(bool)arg1;
- (void)_handleOperationCompletionWithError:(id)arg1;
- (void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(bool)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleProgressUserCancellation;
- (id /* block */)_onFinishDownloadCompletionHandler;
- (id)_overallProgress;
- (void)_overallProgressFractionCompletedDidChange;
- (void)_overallProgressIsCancelledDidChange;
- (void)_performPhotoLibraryChangeForAction:(long long)arg1 newStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (id)_progressController;
- (void)_setDidCheckDuplicateCapabilities:(bool)arg1;
- (void)_setDownloadingProgress:(id)arg1;
- (void)_setDuplicatingProgress:(id)arg1;
- (void)_setOnFinishDownloadCompletionHandler:(id /* block */)arg1;
- (void)_setOverallProgress:(id)arg1;
- (void)_setProgressController:(id)arg1;
- (bool)_validateOriginalAssetResourcesForDuplicateAction:(long long)arg1;
- (id)alertControllerForDuplicateActionWithPreview:(bool)arg1 newStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 userConfirmationHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithAssetsByAssetCollection:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performDuplicateAction:(long long)arg1 newStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (bool)shouldUseAlertController;

@end
