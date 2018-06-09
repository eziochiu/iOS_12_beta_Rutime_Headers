/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPathLazyImageAsset : UIImageAsset {
    bool  _haveCGCacheImages;
    NSArray * _imagePaths;
    bool  _imagesHaveBeenLoaded;
}

@property (nonatomic) bool haveCGCacheImages;
@property (nonatomic, copy) NSArray *imagePaths;

- (void).cxx_destruct;
- (void)_clearResolvedImageResources;
- (bool)_containsImagesInPath:(id)arg1;
- (bool)haveCGCacheImages;
- (id)imagePaths;
- (id)imageWithTraitCollection:(id)arg1;
- (void)setHaveCGCacheImages:(bool)arg1;
- (void)setImagePaths:(id)arg1;

@end
