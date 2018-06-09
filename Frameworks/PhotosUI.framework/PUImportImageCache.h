/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportImageCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheTableQueue;
    NSMutableDictionary * _caches;
    int  _imageFormat;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accessImageTableForIdentifier:(id)arg1 withChangeBlock:(id /* block */)arg2;
- (id)cacheTableForIdentifier:(id)arg1;
- (void)configureWithFormat:(int)arg1;
- (id)imageForIdentifer:(id)arg1;
- (void)imageForIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (void)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(bool)arg3 completion:(id /* block */)arg4;
- (id)imageForModel:(id)arg1 ofSize:(unsigned long long)arg2 allowLowerResolutions:(bool)arg3 foundSize:(unsigned long long*)arg4;
- (id)init;
- (void)removeCacheForIdentifiers:(id)arg1;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2;
- (void)tearDown;

@end
