/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLCache : NSObject {
    NSURLCache * _cache;
    ISURLCacheConfiguration * _configuration;
}

@property (nonatomic, readonly) unsigned long long currentDiskUsage;
@property (nonatomic, readonly) unsigned long long currentMemoryUsage;
@property (nonatomic, readonly) unsigned long long diskCapacity;
@property (nonatomic, readonly) unsigned long long memoryCapacity;
@property (readonly) NSString *persistentIdentifier;

+ (id)cacheDirectoryPath;

- (id)cachedResponseForRequest:(id)arg1;
- (unsigned long long)currentDiskUsage;
- (unsigned long long)currentMemoryUsage;
- (void)dealloc;
- (unsigned long long)diskCapacity;
- (id)init;
- (id)initWithCacheConfiguration:(id)arg1;
- (unsigned long long)memoryCapacity;
- (id)persistentIdentifier;
- (void)purgeMemoryCache;
- (void)reloadWithCacheConfiguration:(id)arg1;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)saveMemoryCacheToDisk;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;

@end
