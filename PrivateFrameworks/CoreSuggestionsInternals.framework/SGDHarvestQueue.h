/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueue : NSObject {
    NSString * _permafailDirectory;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)defaultQueue;
+ (id)pathForDefaultQueue;
+ (id)queueCachingInMemoryBefore:(id)arg1;
+ (id)queueCachingInMemoryBefore:(id)arg1 limit:(unsigned long long)arg2 ttl:(double)arg3;
+ (id)queueWithLegacyStorage:(id)arg1 highPriority:(bool)arg2;
+ (id)queueWithOnDiskStorage:(id)arg1;
+ (void)swapInEphemeralDefaultQueueForTesting;
+ (void)swapOutEphemeralDefaultQueueForTesting;

- (void).cxx_destruct;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (void)close;
- (unsigned long long)count;
- (void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2;
- (id)permafailDirectory;
- (void)pop:(id /* block */)arg1;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popHighPriority:(id /* block */)arg1;
- (void)setPermafailDirectory:(id)arg1;
- (void)writePermafail:(id)arg1;

@end