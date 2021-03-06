/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCachePolicy : NSObject

- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;
- (unsigned long long)capacityHint;
- (void)didAddCacheEntry:(id)arg1;
- (void)didGetCacheEntry:(id)arg1;
- (void)didRemoveAllCacheEntries;
- (void)didRemoveCacheEntry:(id)arg1;
- (id)willAddOrReplaceEntry:(id)arg1 add:(bool)arg2 contents:(id)arg3;

@end
