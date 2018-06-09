/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKObjectFromMOCache : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _cacheHits;
    NSMutableDictionary * _cacheMisses;
}

@property (retain) NSMutableDictionary *cache;
@property (retain) NSMutableDictionary *cacheHits;
@property (retain) NSMutableDictionary *cacheMisses;

- (void).cxx_destruct;
- (id)cache;
- (id)cacheHits;
- (id)cacheMisses;
- (id)deduplicateString:(id)arg1;
- (id)init;
- (id)initWithReporting;
- (id)objectForKey:(id)arg1 type:(id)arg2;
- (id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(id /* block */)arg3;
- (void)removeObjectForKey:(id)arg1 type:(id)arg2;
- (void)reportMetrics;
- (void)setCache:(id)arg1;
- (void)setCacheHits:(id)arg1;
- (void)setCacheMisses:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3;

@end