/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler> {
    double  _coalescingWindow;
    CNStack * _delayedBlocks;
    <CNScheduler> * _scheduler;
    unsigned long long  _state;
}

@property (nonatomic, readonly) double coalescingWindow;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) CNStack *delayedBlocks;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (double)coalescingWindow;
- (id)delayedBlocks;
- (void)flushDelayedBlock;
- (unsigned long long)getAndIncrementState;
- (id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (void)removeDelayedBlock:(id /* block */)arg1;
- (id)scheduler;
- (void)setDelayedBlocks:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (double)timestamp;

@end
