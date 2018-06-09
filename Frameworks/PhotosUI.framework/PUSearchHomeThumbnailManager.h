/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchHomeThumbnailManager : NSObject <NSCacheDelegate> {
    NSCache * _cache;
    NSMutableDictionary * _metadataPlist;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    PXPlacesSearchProvider * _placesProvider;
}

@property (nonatomic, retain) NSCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *metadataPlist;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metadataQueue;
@property (nonatomic, retain) PXPlacesSearchProvider *placesProvider;
@property (readonly) Class superclass;

+ (id)_filePathForHash:(id)arg1;
+ (id)_filePathForMetadataPlist;
+ (id)_thumbnailFilePath;

- (void).cxx_destruct;
- (void)_createThumbnailDirectoryIfNeeded;
- (void)_fetchImageForLocation:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)_hashForKeyString:(id)arg1;
- (void)_setMetadataDate:(id)arg1 forKey:(id)arg2;
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;
- (void)_writeMetadataPlistToDisk;
- (id)cache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;
- (id)metadataPlist;
- (id)metadataQueue;
- (id)placesProvider;
- (void)setCache:(id)arg1;
- (void)setMetadataPlist:(id)arg1;
- (void)setMetadataQueue:(id)arg1;
- (void)setPlacesProvider:(id)arg1;
- (void)thumbnailForKey:(id)arg1 type:(long long)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;

@end
