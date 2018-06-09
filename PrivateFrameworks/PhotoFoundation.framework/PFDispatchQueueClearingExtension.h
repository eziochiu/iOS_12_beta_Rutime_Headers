/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueClearingExtension : PFDispatchQueueExtension <PFDispatchQueueExtending> {
    NSCountedSet * _activeOnQueues;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)alloc;
+ (unsigned long long)countOfPurgingQueues;
+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)countOfPurgingQueues;
- (void)doPurge:(id)arg1 wait:(bool)arg2;
- (id)init;
- (id)initInternal;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(id /* block */)arg2;

@end
