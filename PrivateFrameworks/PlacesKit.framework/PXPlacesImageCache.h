/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesImageCache : NSObject {
    NSCache * _cache;
    <NSObject> * _memoryWarningObserver;
}

- (void).cxx_destruct;
- (void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3;
- (id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeAllObjects;
- (void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;

@end
