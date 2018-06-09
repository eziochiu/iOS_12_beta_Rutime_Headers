/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASQueueLock : NSObject {
    id  _guardedData;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)guardedDataAssertingLockContext;
- (id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2;
- (void)runAsyncWithLockAcquired:(id /* block */)arg1;
- (void)runWithLockAcquired:(id /* block */)arg1;
- (id)unsafeGuardedData;

@end
