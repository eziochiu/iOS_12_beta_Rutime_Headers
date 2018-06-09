/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler> {
    NSConditionLock * _lock;
    CNQueue * _queue;
    <CNScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSConditionLock *lock;
@property (nonatomic, readonly) CNQueue *queue;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)resumedSchedulerWithScheduler:(id)arg1;
+ (id)suspendedSchedulerWithScheduler:(id)arg1;

- (void).cxx_destruct;
- (id)_nts_enqueueCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (void)_performFirstQueuedTask;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id)initWithScheduler:(id)arg1;
- (id)lock;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)queue;
- (void)resume;
- (id)scheduler;
- (void)suspend;
- (double)timestamp;

@end
