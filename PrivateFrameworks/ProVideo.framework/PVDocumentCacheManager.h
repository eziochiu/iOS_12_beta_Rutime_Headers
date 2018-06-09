/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVDocumentCacheManager : NSObject <NSCacheDelegate> {
    NSCache * _cache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)releaseSharedInstance;
+ (void)removeAllEffects;
+ (id)sharedInstance;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)cacheOZXDocument:(void*)arg1 forKey:(id)arg2 timeElapsed:(double)arg3 memoryInfo:(unsigned long long)arg4;
- (void)dealloc;
- (id)generateKeyFromFilePathString:(id)arg1;
- (void*)getOZXDocumentForKey:(id)arg1;
- (id)init;
- (void*)newOZXDocumentForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setTotalCostLimit:(unsigned long long)arg1;

@end
