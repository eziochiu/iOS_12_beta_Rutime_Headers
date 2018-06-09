/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_dispatchQueueForSetTargetQueue;
- (id)_extensionManager;
- (id)_extensionsForTargetingQueue;
- (bool)assertNotOnQueue;
- (bool)assertOnQueue;
- (bool)assertQueueBarrier;
- (id)description;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchAfterInterval:(double)arg1 block:(id /* block */)arg2;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchBarrierAsync:(id /* block */)arg1;
- (void)dispatchBarrierSync:(id /* block */)arg1;
- (id)dispatchCancellable:(id /* block */)arg1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(id /* block */)arg2;
- (id)dispatchCancellableGroup:(id)arg1 notify:(id /* block */)arg2;
- (void)dispatchGroup:(id)arg1 async:(id /* block */)arg2;
- (void)dispatchGroup:(id)arg1 notify:(id /* block */)arg2;
- (void)dispatchSync:(id /* block */)arg1;
- (id)extensionMatching:(id /* block */)arg1;
- (void*)getSpecific:(void*)arg1;
- (id)initWithQueue:(id)arg1;
- (const char *)label;
- (unsigned int)qualityOfService;
- (void)resume;
- (void)setSpecific:(void*)arg1 forKey:(void*)arg2;
- (void)setTargetQueue:(id)arg1;
- (void)suspend;

@end
