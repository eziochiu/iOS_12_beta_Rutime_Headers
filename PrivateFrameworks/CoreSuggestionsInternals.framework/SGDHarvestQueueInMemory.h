/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueInMemory : SGDHarvestQueue {
    long long  _itemIdCounter;
    NSMutableArray * _items;
    unsigned long long  _limit;
    SGDHarvestQueue * _other;
    NSObject<OS_dispatch_queue> * _queue;
    double  _ttl;
}

@property (nonatomic, readonly) SGDHarvestQueue *other;

- (void).cxx_destruct;
- (void)_deleteWithItemId:(long long)arg1 completion:(id /* block */)arg2;
- (void)_flushWithIndexLockedAsync:(unsigned long long)arg1;
- (void)_flushWithItemIdLockedAsync:(long long)arg1;
- (long long)_indexOfItemWithIdLocked:(long long)arg1;
- (void)_popCallback:(id /* block */)arg1 where:(id /* block */)arg2 or:(id /* block */)arg3;
- (void)_sortLocked;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (void)close;
- (unsigned long long)count;
- (void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2;
- (void)deleteAllItemsDangerously;
- (id)initWithLimit:(unsigned long long)arg1 ttl:(double)arg2 flushingToQueue:(id)arg3;
- (id)other;
- (void)pop:(id /* block */)arg1;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popHighPriority:(id /* block */)arg1;
- (void)writePermafail:(id)arg1;

@end
