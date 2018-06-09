/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLimitedConcurrencySlotQueue : NSObject {
    unsigned long long  _blockCount;
    PFLimitedConcurrencyQueueClass * _concurrentQueue;
    unsigned long long  _slotIndex;
    NSObject<OS_dispatch_queue> * _slotQueue;
}

@property (readonly) PFLimitedConcurrencyQueueClass *concurrentQueue;
@property (readonly) unsigned long long slotIndex;

+ (id)currentSlotQueue;

- (void).cxx_destruct;
- (id)concurrentQueue;
- (unsigned long long)decrementSlotUseCount;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (unsigned long long)incrementSlotUseCount;
- (id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3;
- (const char *)label;
- (void)resume;
- (unsigned long long)slotIndex;
- (unsigned long long)slotUseCount;
- (void)suspend;

@end
