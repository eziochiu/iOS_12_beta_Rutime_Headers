/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKArtworkDataSourceCache : NSObject {
    NSCache * _artworkImageCache;
    MKTransitArtworkManager * _artworkManager;
}

@property (nonatomic, readonly) MKTransitArtworkManager *artworkManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_lookupArtworkInCacheWithKey:(id)arg1;
- (void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2;
- (void)_shieldPackDidUpdate;
- (id)artworkManager;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 widthPaddingMultiple:(double)arg5;
- (id)imageForSizedArtwork:(id)arg1 scale:(double)arg2;
- (id)initWithArtworkManager:(id)arg1;
- (void)purge;

@end
