/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageSource : NSObject {
    GKThreadsafeCache * _cache;
    UIImage * _defaultImage;
    GKImageBrush * _imageBrush;
    NSString * _name;
    UIImage * _renderedDefaultImage;
    bool  _shouldRenderDefaultImageWithBrush;
}

@property (nonatomic, retain) GKThreadsafeCache *cache;
@property (nonatomic, retain) UIImage *defaultImage;
@property (nonatomic, retain) GKImageBrush *imageBrush;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UIImage *renderedDefaultImage;
@property (nonatomic) bool shouldRenderDefaultImageWithBrush;

+ (id)cacheDirectoryForImageID:(id)arg1;
+ (void)clearCache;
+ (id)sharedCache;
+ (id)syncQueue;

- (void)_storeImage:(id)arg1 cacheKey:(id)arg2 path:(id)arg3 context:(id)arg4;
- (id)cache;
- (unsigned long long)cacheCostForImage:(id)arg1;
- (void)cacheImageFromContext:(id)arg1 forIdentifier:(id)arg2;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)cachedImageForKey:(id)arg1;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (void)dealloc;
- (id)defaultImage;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)fastCachedImageForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)imageBrush;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;
- (id)keyForImageIdentifier:(id)arg1;
- (id)name;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (id)renderedDefaultImage;
- (id)renderedImageWithImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize { double x1; double x2; })arg2 returnContext:(id*)arg3;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2;
- (id)renderedTestImage;
- (void)setCache:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setImageBrush:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRenderedDefaultImage:(id)arg1;
- (void)setShouldRenderDefaultImageWithBrush:(bool)arg1;
- (bool)shouldRenderDefaultImageWithBrush;
- (bool)shouldUseTestImage;
- (id)subsourceWithBrush:(id)arg1;
- (void)validateFileSystemCache;

@end
