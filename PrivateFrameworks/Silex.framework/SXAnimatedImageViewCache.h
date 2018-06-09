/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAnimatedImageViewCache : NSObject {
    SXAnimatedImage * _animatedImage;
    NSMutableArray * _cachedImages;
    bool  _cachingEnabled;
    NSObject<OS_dispatch_queue> * _decodingQueue;
    <SXAnimatedImageViewCacheDelegate> * _delegate;
    NSMutableIndexSet * _indicesToCache;
    unsigned long long  _lastRequestedIndex;
    unsigned long long  _numberOfCachedImages;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    long long  _singleImageByteSize;
}

@property (nonatomic) SXAnimatedImage *animatedImage;
@property (nonatomic, readonly) NSMutableArray *cachedImages;
@property bool cachingEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *decodingQueue;
@property (nonatomic) <SXAnimatedImageViewCacheDelegate> *delegate;
@property (nonatomic, readonly) NSMutableIndexSet *indicesToCache;
@property unsigned long long lastRequestedIndex;
@property (nonatomic, readonly) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property long long singleImageByteSize;

- (void).cxx_destruct;
- (id)animatedImage;
- (void)cacheNextImage;
- (long long)cacheStatusForFrameIndex:(unsigned long long)arg1;
- (id)cachedImages;
- (bool)cachingEnabled;
- (void)checkCacheSize;
- (id)decodeImageFromSource:(struct CGImageSource { }*)arg1 index:(unsigned long long)arg2;
- (id)decodingQueue;
- (void)decreaseCacheSize;
- (id)delegate;
- (id)imageForFrameIndex:(unsigned long long)arg1;
- (id)indicesToCache;
- (id)init;
- (unsigned long long)lastRequestedIndex;
- (unsigned long long)maxCacheSize;
- (unsigned long long)nearestCachedFrameIndexForFrameIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfCachedImages;
- (void)prepareCache;
- (void)prepareImageForFrameIndex:(unsigned long long)arg1;
- (void)prune;
- (void)restoreCacheSize;
- (id)semaphore;
- (void)setAnimatedImage:(id)arg1;
- (void)setCachingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastRequestedIndex:(unsigned long long)arg1;
- (void)setNumberOfCachedImages:(unsigned long long)arg1;
- (void)setSingleImageByteSize:(long long)arg1;
- (long long)singleImageByteSize;

@end
