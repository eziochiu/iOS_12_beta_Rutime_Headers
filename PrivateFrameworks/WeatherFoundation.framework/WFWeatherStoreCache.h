/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherStoreCache : NSObject {
    NSURL * _URL;
    NSObject<OS_dispatch_queue> * _cacheConcurrentQueue;
    NSMutableDictionary * _cacheForDomain;
    NSTimer * _cacheStoreTimer;
    NSMutableSet * _dirtyCacheDomains;
}

@property (nonatomic, copy) NSURL *URL;
@property (retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue;
@property (retain) NSMutableDictionary *cacheForDomain;
@property (nonatomic, retain) NSTimer *cacheStoreTimer;
@property (retain) NSMutableSet *dirtyCacheDomains;

+ (id)createCacheIfNecessary:(id)arg1 error:(id*)arg2;
+ (bool)removeObjectsFromCache:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)wf_masterDomains;

- (void).cxx_destruct;
- (id)URL;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (bool)_concurrentQueue_barrier_loadDomain:(id)arg1;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)_concurrentQueue_barrier_shrinkDomain:(id)arg1;
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
- (id)_dirtyCacheDomains;
- (void)_ensureDomainIsLoaded:(id)arg1;
- (bool)_loadDomain:(id)arg1;
- (id)_loadedCacheDomains;
- (void)_markDomainDirty:(id)arg1;
- (void)_shrinkDomain:(id)arg1;
- (void)_startCacheStoreTimer;
- (void)_stopCacheStoreTimer;
- (void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(bool)arg6;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4;
- (id)cacheConcurrentQueue;
- (id)cacheForDomain;
- (id)cacheStoreTimer;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3;
- (void)dealloc;
- (void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (id)dirtyCacheDomains;
- (void)executeTransaction:(id /* block */)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)setCacheConcurrentQueue:(id)arg1;
- (void)setCacheForDomain:(id)arg1;
- (void)setCacheStoreTimer:(id)arg1;
- (void)setDirtyCacheDomains:(id)arg1;
- (void)setURL:(id)arg1;
- (void)writeCacheDictionaryToFile;

@end
