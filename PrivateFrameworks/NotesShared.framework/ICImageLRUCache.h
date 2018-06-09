/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICImageLRUCache : NSObject {
    ICLRUCache * _bigImageCache;
    unsigned long long  _bigImageCacheCount;
    unsigned long long  _imagePixelThreshold;
    NSObject<OS_dispatch_source> * _memoryWarningEventSource;
    ICLRUCache * _smallImageCache;
    unsigned long long  _smallImageCacheCount;
    NSMapTable * _weakImageMap;
}

@property (readonly) ICLRUCache *bigImageCache;
@property (nonatomic, readonly) unsigned long long bigImageCacheCount;
@property (nonatomic, readonly) unsigned long long imagePixelThreshold;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryWarningEventSource;
@property (readonly) ICLRUCache *smallImageCache;
@property (nonatomic, readonly) unsigned long long smallImageCacheCount;
@property (readonly) NSMapTable *weakImageMap;

- (void).cxx_destruct;
- (id)bigImageCache;
- (unsigned long long)bigImageCacheCount;
- (void)dealloc;
- (unsigned long long)imagePixelThreshold;
- (id)initWithBigImageCount:(unsigned long long)arg1 smallImageCount:(unsigned long long)arg2 pixelThreshold:(unsigned long long)arg3;
- (id)memoryWarningEventSource;
- (struct UIImage { Class x1; }*)objectForKey:(id)arg1;
- (void)receivedMemoryWarning;
- (void)registerForMemoryWarnings;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setMemoryWarningEventSource:(id)arg1;
- (void)setObject:(struct UIImage { Class x1; }*)arg1 forKey:(id)arg2;
- (id)smallImageCache;
- (unsigned long long)smallImageCacheCount;
- (void)unregisterForMemoryWarnings;
- (id)weakImageMap;

@end
