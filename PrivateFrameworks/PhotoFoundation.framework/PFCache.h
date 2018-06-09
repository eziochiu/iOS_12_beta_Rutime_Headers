/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCache : NSObject {
    NSMapTable * _contents;
    PFCachePolicy * _policy;
    NSObject<OS_dispatch_queue> * _queue;
    PFCacheStatistics * _statistics;
    id /* block */  _willBeRemovedFromCacheHandler;
}

@property (copy) id /* block */ willBeRemovedFromCacheHandler;

- (void).cxx_destruct;
- (void)_removeObjectForKey:(id)arg1 notify:(bool)arg2;
- (void)_setEntry:(id)arg1 forKey:(id)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithPolicy:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKeyWithoutNotification:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2;
- (void)setWillBeRemovedFromCacheHandler:(id /* block */)arg1;
- (id)statistics;
- (id /* block */)willBeRemovedFromCacheHandler;

@end
