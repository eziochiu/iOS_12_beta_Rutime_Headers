/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueCombo : SGDHarvestQueue {
    NSArray * _backends;
    SGDHarvestQueueInMemory * _inMemory;
    SGDHarvestQueueLegacy * _legacyHighPriority;
    SGDHarvestQueueLegacy * _legacyLowPriority;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    SGDHarvestQueueOnDisk * _onDisk;
}

@property (nonatomic, readonly) SGDHarvestQueueInMemory *inMemory;
@property (nonatomic, readonly) SGDHarvestQueueLegacy *legacyHighPriority;
@property (nonatomic, readonly) SGDHarvestQueueLegacy *legacyLowPriority;
@property (nonatomic, readonly) SGDHarvestQueueOnDisk *onDisk;

- (void).cxx_destruct;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (id)backends;
- (void)close;
- (unsigned long long)count;
- (void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2;
- (void)dealloc;
- (id)inMemory;
- (id)initWithOnDiskQueue:(id)arg1 legacyHighPriority:(id)arg2 legacyLowPriority:(id)arg3 inMemoryCache:(id)arg4;
- (id)legacyHighPriority;
- (id)legacyLowPriority;
- (id)onDisk;
- (void)pop:(id /* block */)arg1;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popHighPriority:(id /* block */)arg1;

@end
