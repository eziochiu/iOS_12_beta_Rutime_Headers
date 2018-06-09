/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRReadWriteConcurrentQueue : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _nextReader;
    NSMutableArray * _readerQueues;
    bool  _suspended;
    NSMutableArray * _suspendedReadRequests;
    NSMutableArray * _suspendedWriteRequests;
    NSObject<OS_dispatch_queue> * _writerQueue;
}

- (void).cxx_destruct;
- (void)_resumeReaders;
- (void)_suspendReadersAndWaitForDrain;
- (void)enqueueReadWithBlock:(id /* block */)arg1 bypassSuspend:(bool)arg2;
- (void)enqueueReadWithBlock:(id /* block */)arg1 bypassSuspend:(bool)arg2 async:(bool)arg3;
- (void)enqueueReadWithBlockAsync:(id /* block */)arg1 bypassSuspend:(bool)arg2;
- (void)enqueueWriteWithBlockAsync:(id /* block */)arg1 bypassSuspend:(bool)arg2;
- (id)initWithNumberOfReaders:(unsigned long long)arg1;
- (void)invalidate;
- (void)resume;
- (void)suspend;

@end
