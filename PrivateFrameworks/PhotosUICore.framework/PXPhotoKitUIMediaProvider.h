/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider {
    PHCachingImageManager * _cachingImageManager;
    PHImageManager * _imageManager;
    PHAssetResourceQualityClass * _lastResourceQualityClass;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastTargetSize;
    NSArray * _thumbnailQualityClasses;
}

@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic, readonly) PHImageManager *imageManager;

- (void).cxx_destruct;
- (id)cachingImageManager;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)arg1;
- (id)imageManager;
- (id)init;
- (id)initWithImageManager:(id)arg1;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; }*)arg3;

@end
