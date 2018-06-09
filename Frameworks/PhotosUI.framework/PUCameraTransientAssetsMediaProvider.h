/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraTransientAssetsMediaProvider : PUMediaProvider {
    NSObject<OS_dispatch_queue> * __livePhotoRequestQueue;
    NSMutableDictionary * __livePhotoRequestsByRequestID;
    <PUTransientImageManager> * __transientImageManager;
    int  _latestRequestId;
    id /* block */  _supplementaryLivePhotoImageSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_livePhotoRequestQueue;
@property (nonatomic, readonly) NSMutableDictionary *_livePhotoRequestsByRequestID;
@property (nonatomic, readonly) <PUTransientImageManager> *_transientImageManager;
@property (nonatomic, copy) id /* block */ supplementaryLivePhotoImageSource;

- (void).cxx_destruct;
- (void)_handleDelegateImageRequestResultWithImage:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_handleLivePhotoPairedVideoRequestResultURL:(id)arg1 filterName:(id)arg2 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id)arg4 requestID:(int)arg5;
- (id)_imageForTransientAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_livePhotoRequestQueue;
- (id)_livePhotoRequestWithID:(int)arg1;
- (id)_livePhotoRequestsByRequestID;
- (int)_nextRequestId;
- (id)_playerItemForVideoURL:(id)arg1;
- (void)_removeLivePhotoRequestWithID:(int)arg1;
- (void)_requestAVAssetForVideoURL:(id)arg1 resultHandler:(id /* block */)arg2;
- (int)_requestLivePhotoForTransientAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (bool)_requestLivePhotoWithSupplementaryImageSourceIfPossibleWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)_setLivePhotoRequest:(id)arg1 forRequestID:(int)arg2;
- (id)_transientImageManager;
- (void)_updateResultForLivePhotoRequestID:(int)arg1;
- (id)_videoCompositionForAVAsset:(id)arg1 filterName:(id)arg2;
- (void)cancelImageRequest:(int)arg1;
- (id)init;
- (id)initWithTransientImageManager:(id)arg1 supplementaryLivePhotoImageSource:(id /* block */)arg2;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)setSupplementaryLivePhotoImageSource:(id /* block */)arg1;
- (id /* block */)supplementaryLivePhotoImageSource;

@end
