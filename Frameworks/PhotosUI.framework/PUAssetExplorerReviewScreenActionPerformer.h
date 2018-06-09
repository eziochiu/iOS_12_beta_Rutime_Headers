/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenActionPerformer : PUAssetActionPerformer {
    PUActivityProgressController * __requestProgressController;
    id /* block */  _performUserInteractionTaskBlock;
}

@property (setter=_setRequestProgressController:, nonatomic, retain) PUActivityProgressController *_requestProgressController;
@property (nonatomic, copy) id /* block */ performUserInteractionTaskBlock;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_handleProgressControllerCanceled:(id)arg1;
- (void)_handleReviewAssetRequestCompletedWithSuccess:(bool)arg1 canceled:(bool)arg2 error:(id)arg3 reviewAsset:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_requestProgressController;
- (void)_setRequestProgressController:(id)arg1;
- (id)_setupProgressControllerForProgress:(id)arg1;
- (void)_showFailedReviewAssetRequestAlert;
- (void)executePerformUserInteractionTaskBlock;
- (void)performUserInteractionTask;
- (id /* block */)performUserInteractionTaskBlock;
- (void)requestReviewAssetForDisplayAsset:(id)arg1 reviewAssetProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setPerformUserInteractionTaskBlock:(id /* block */)arg1;

@end
