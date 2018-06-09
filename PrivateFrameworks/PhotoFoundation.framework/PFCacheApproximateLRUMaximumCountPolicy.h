/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCacheApproximateLRUMaximumCountPolicy : PFCachePolicy {
    unsigned long long  _considerationCount;
    id * _considerationKeys;
    unsigned long long  _maximumCount;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _seed;
    unsigned long long  _tick;
    unsigned long long  _tickMaximum;
}

+ (id)policyWithMaximumCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_rebuildConsiderationKeys:(id)arg1;
- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;
- (unsigned long long)capacityHint;
- (void)dealloc;
- (id)description;
- (void)didAddCacheEntry:(id)arg1;
- (void)didGetCacheEntry:(id)arg1;
- (void)didRemoveAllCacheEntries;
- (void)didRemoveCacheEntry:(id)arg1;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (id)willAddOrReplaceEntry:(id)arg1 add:(bool)arg2 contents:(id)arg3;

@end
