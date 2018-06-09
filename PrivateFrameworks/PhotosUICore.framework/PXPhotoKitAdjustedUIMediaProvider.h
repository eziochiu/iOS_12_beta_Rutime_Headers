/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAdjustedUIMediaProvider : PXUIMediaProvider {
    bool  _delayRenders;
    PHCachingImageManager * _imageManager;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    int  _nextRequestID;
    NSObject<OS_dispatch_queue> * _renderQueue;
    NSMutableDictionary * _requestsByIdentifier;
    NSMutableDictionary * _unadjustedRequestIdentifiersByIdentifier;
    bool  _useCachedRenders;
}

@property (nonatomic) bool delayRenders;
@property (nonatomic) bool useCachedRenders;

+ (void)clearCachedRenders;

- (void).cxx_destruct;
- (void)_handleRequestCompletedWithID:(long long)arg1;
- (long long)_nextRequestID;
- (void)_removeRequestforID:(long long)arg1;
- (id)cachedImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (void)cancelImageRequest:(long long)arg1;
- (bool)delayRenders;
- (id)init;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestURLForImage:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(id /* block */)arg4;
- (long long)requestURLForVideo:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(id /* block */)arg4;
- (long long)requestURLsForLivePhoto:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(id /* block */)arg4;
- (void)setDelayRenders:(bool)arg1;
- (void)setUseCachedRenders:(bool)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (bool)useCachedRenders;

@end
