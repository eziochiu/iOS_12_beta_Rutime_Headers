/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperImageCache : NSObject {
    BSUIMappedImageCache * _imageCache;
    <HFProcessedWallpaperSource> * _processedWallpaperSource;
}

@property (nonatomic, retain) BSUIMappedImageCache *imageCache;
@property (nonatomic, retain) <HFProcessedWallpaperSource> *processedWallpaperSource;
@property (nonatomic, readonly) NSArray *supportedProcessedVariants;

- (void).cxx_destruct;
- (id)_cacheKeyForWallpaper:(id)arg1 withVariant:(long long)arg2;
- (id)imageCache;
- (id)imageForVariant:(long long)arg1 wallpaper:(id)arg2 withOriginalImageGenerator:(id /* block */)arg3;
- (id)init;
- (id)processedWallpaperSource;
- (void)pruneUnusedWallpaperVariants:(id)arg1;
- (void)saveVariantsForWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)setImageCache:(id)arg1;
- (void)setProcessedWallpaperSource:(id)arg1;
- (id)supportedProcessedVariants;

@end
