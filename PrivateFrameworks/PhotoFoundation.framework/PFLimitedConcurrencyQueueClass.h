/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {
    NSMutableArray * _availableSlots;
    unsigned long long  _concurrencyLimit;
    PFSerialQueue * _serializer;
    NSMutableArray * _slotQueues;
    unsigned long long  _suspendCount;
    bool  _usesBarrierBlocks;
}

- (void).cxx_destruct;
- (void)_allocateAllSlotQueues;
- (id)_allocateOneSlotQueue;
- (id)_extensionsForTargetingQueue;
- (void)_setupConcurrencyLimit:(unsigned long long)arg1;
- (id)checkoutAvailableSlot;
- (unsigned long long)concurrencyLimit;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchBarrierAsync:(id /* block */)arg1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchBarrierSync:(id /* block */)arg1;
- (void)dispatchGroup:(id)arg1 async:(id /* block */)arg2;
- (void)dispatchGroup:(id)arg1 notify:(id /* block */)arg2;
- (void)dispatchSync:(id /* block */)arg1;
- (void)dropOneSlotQueue;
- (void)enqueueDelayedDrop;
- (void)resume;
- (void)slotQueueMightBeUnused:(id)arg1;
- (void)suspend;

@end