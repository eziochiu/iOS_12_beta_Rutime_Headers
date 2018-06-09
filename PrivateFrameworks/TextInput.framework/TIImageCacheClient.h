/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIImageCacheClient : NSObject {
    NSCache * _cache;
    NSXPCConnection * _connection;
    bool  _hasLocalAccess;
    NSString * _imagePath;
    bool  _lockOnRead;
    NSString * _path;
    int  _remoteQueryCount;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesDefault;
    bool  _shouldIdleWhenDone;
    NSString * _versionPath;
}

@property (nonatomic) unsigned long long cacheItemLimit;
@property (nonatomic, readonly) int cacheVersion;
@property (nonatomic) bool lockOnRead;

- (void).cxx_destruct;
- (int)_cacheVersion;
- (void)_createConnectionIfNecessary;
- (void)_idleIfNecessary:(bool)arg1;
- (struct _img { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; })_imgForItem:(id)arg1;
- (void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3;
- (void)_setCacheVersion:(int)arg1;
- (id)_versionPath;
- (unsigned long long)cacheItemLimit;
- (id)cacheNumberForKey:(id)arg1;
- (int)cacheVersion;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)dealloc;
- (void)idleAfter:(double)arg1;
- (unsigned long long)imageCount;
- (bool)imageExistsForKey:(id)arg1 inGroup:(id)arg2;
- (id)imagePath;
- (id)initWithLocalAccess:(bool)arg1;
- (bool)lockOnRead;
- (unsigned int)memContentOffset;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; }*)arg2;
- (void)purge;
- (void)removeImagesInGroups:(id)arg1 completion:(id /* block */)arg2;
- (void)setCacheItemLimit:(unsigned long long)arg1;
- (void)setIdleWhenDone;
- (void)setLockOnRead:(bool)arg1;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3;

@end
