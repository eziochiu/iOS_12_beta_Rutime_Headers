/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportMediaProvider : PXMediaProvider {
    NSMutableDictionary * _extensionPlaceholderCachesByRequestSize;
    bool  _hasBeenIdle;
    PUImportImageCache * _imageCache;
    long long  _imageRequestsInflight;
    long long  _lastRequestsInflight;
    long long  _nextRequestID;
    int  _thumbnailImageFormat;
    NSMutableDictionary * _thumbnailRequestsByID;
    PXLoadingStatusManager * loadingStatusManager;
}

@property (nonatomic, retain) NSMutableDictionary *extensionPlaceholderCachesByRequestSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } gridItemSize;
@property (nonatomic) bool hasBeenIdle;
@property (nonatomic, retain) PUImportImageCache *imageCache;
@property (nonatomic) long long imageRequestsInflight;
@property (nonatomic) long long lastRequestsInflight;
@property (nonatomic, retain) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic) long long nextRequestID;
@property (nonatomic, readonly) int thumbnailImageFormat;
@property (nonatomic, retain) NSMutableDictionary *thumbnailRequestsByID;

+ (int)defaultThumbnailImageFormat;
+ (void)registerPUImportMediaProviderNotificationsReceiver:(struct NSObject { Class x1; }*)arg1;
+ (void)unregisterPUImportMediaProviderNotificationsReceiver:(struct NSObject { Class x1; }*)arg1;

- (void).cxx_destruct;
- (id)_newPlaceholderImageForItemWithExtension:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)_placeholderExtensionForItem:(id)arg1;
- (id)_placeholderForItem:(id)arg1 size:(unsigned long long)arg2;
- (id)cachedImageForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(id /* block */)arg1;
- (id)extensionPlaceholderCachesByRequestSize;
- (struct CGSize { double x1; double x2; })gridItemSize;
- (bool)hasBeenIdle;
- (long long)idleTimeOut;
- (id)imageCache;
- (long long)imageOfSize:(unsigned long long)arg1 forModel:(id)arg2 localCacheOnly:(bool)arg3 completion:(id /* block */)arg4;
- (long long)imageRequestsInflight;
- (id)init;
- (long long)lastRequestsInflight;
- (id)loadingStatusManager;
- (long long)nextRequestID;
- (void)performIdleProcessingIfNecessary;
- (void)ppt_sendMediaProviderDidProcessAsset:(id)arg1;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)sendMediaProviderThumbnailingBecameIdle;
- (void)setExtensionPlaceholderCachesByRequestSize:(id)arg1;
- (void)setHasBeenIdle:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageRequestsInflight:(long long)arg1;
- (void)setLastRequestsInflight:(long long)arg1;
- (void)setLoadingStatusManager:(id)arg1;
- (void)setNextRequestID:(long long)arg1;
- (void)setThumbnailRequestsByID:(id)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 outDataSpec:(struct PXMediaProviderThumbnailDataSpec { struct PXMediaProviderThumbnailDataFormat { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; } x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; }*)arg3;
- (bool)thumbnailExistsForModel:(id)arg1;
- (bool)thumbnailExistsForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (int)thumbnailImageFormat;
- (id)thumbnailRequestsByID;

@end
