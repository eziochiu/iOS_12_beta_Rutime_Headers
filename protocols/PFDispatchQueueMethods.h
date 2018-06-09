/* made by EzioChiu.
 */

@protocol PFDispatchQueueMethods

@required

- (bool)assertNotOnQueue;
- (bool)assertOnQueue;
- (bool)assertQueueBarrier;
- (void)dispatchAfter:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchAfterDelay:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchAfterInterval:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchAsync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchAsyncWithCurrentQOS:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchAsyncWithQOS:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchBarrierAsync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchBarrierAsyncWithCurrentQOS:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchBarrierAsyncWithQOS:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchBarrierSync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (PFBlockControl *)dispatchCancellable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (PFBlockControl *)dispatchCancellableAfterDelay:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (PFBlockControl *)dispatchCancellableAfterInterval:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (PFBlockControl *)dispatchCancellableGroup:(void *)arg1 notify:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_group> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchGroup:(void *)arg1 async:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_group> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchGroup:(void *)arg1 notify:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_group> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dispatchSync:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<PFDispatchQueueExtending> *)extensionMatching:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <PFDispatchQueueExtending> *, void*
- (void*)getSpecific:(void*)arg1;
- (const char *)label;
- (unsigned int)qualityOfService;
- (void)resume;
- (void)setSpecific:(void*)arg1 forKey:(void*)arg2;
- (void)suspend;

@end
