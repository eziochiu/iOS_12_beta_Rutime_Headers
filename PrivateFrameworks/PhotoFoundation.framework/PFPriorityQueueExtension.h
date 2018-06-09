/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing> {
    NSMutableArray * _emptyNotifications;
    PFDispatchQueue * _executionQueue;
    unsigned long long  _lastScheduledPriority;
    bool  _performsConcurrentScheduling;
    NSArray * _priorityLevels;
    unsigned long long  _qosBlockCount;
    bool  _queueSuspended;
    unsigned long long * _scheduledCount;
    PFSerialQueue * _schedulingQueue;
    unsigned long long  _schedulingSuspendCount;
    PFDispatchQueue * _serializer;
}

- (void).cxx_destruct;
- (void)_scheduleBlock:(id)arg1;
- (void)_scheduleNextBlock;
- (void)dealloc;
- (void)enqueueEmptyNotification:(id /* block */)arg1;
- (void)enqueueWithPriority:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)initWithPriorityLevels:(unsigned long long)arg1 concurrentScheduling:(bool)arg2;
- (void)installOnQueue:(id)arg1;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(id /* block */)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queueDidSuspend:(id)arg1;
- (void)queueWillResume:(id)arg1;
- (void)resumeScheduling;
- (unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
- (void)suspendScheduling;

@end
