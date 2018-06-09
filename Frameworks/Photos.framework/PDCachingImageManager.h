/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDCachingImageManager : PDImageManager <PHImageCacheDelegate> {
    bool  _allowsCachingHighQualityImages;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachingLock;
    NSMutableSet * _cachingRequestIDs;
    PHImageCache * _imageCache;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) bool allowsCachingHighQualityImages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cacheFailReasonFromInfo:(id)arg1;
- (id)_imageTableForPreheatingDegradedOpportunisticRequests;
- (id)_imageTableForPreheatingTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_preheatImageTable:(id)arg1 forAssets:(id)arg2;
- (id)_tableFormats;
- (bool)allowsCachingHighQualityImages;
- (void)handleImageResult:(id)arg1 forRequest:(id)arg2 options:(id)arg3 info:(id)arg4 error:(id)arg5 resultHandler:(id /* block */)arg6;
- (void)imageCache:(id)arg1 didEvictCacheEntry:(id)arg2;
- (id)init;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(bool*)arg3 didFindImage:(bool*)arg4 resultHandler:(id /* block */)arg5;
- (void)setAllowsCachingHighQualityImages:(bool)arg1;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;

@end
