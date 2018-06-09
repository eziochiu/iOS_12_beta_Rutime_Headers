/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageCacheList : NSObject {
    PLLoadRequestKey * _dummy;
    id * _images;
    NSObject<OS_dispatch_queue> * _isolation;
    unsigned long long * _keyHashes;
    id * _keys;
    unsigned int  _lastFailLocation;
    unsigned int  _length;
}

+ (id)newImageCacheList;

- (id)_init;
- (void)dealloc;
- (id)imageForKey:(id)arg1;
- (id)init;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end
