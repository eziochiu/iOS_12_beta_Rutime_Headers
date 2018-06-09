/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCoalescerContext : NSObject {
    unsigned long long  _coalescedUpdatesCount;
    PFCoalescer * _coalescer;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSHashTable * _pendingActivityTokens;
}

@property unsigned long long coalescedUpdatesCount;
@property PFCoalescer *coalescer;
@property (retain) NSObject<OS_dispatch_group> *group;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSHashTable *pendingActivityTokens;
@property (readonly) NSArray *pendingActivityTokensSnapshot;

- (void).cxx_destruct;
- (id)activityToken;
- (id)activityTokenWithReason:(id)arg1;
- (void)cancelPendingActivityTokens;
- (unsigned long long)coalescedUpdatesCount;
- (id)coalescer;
- (void)delayNextInvocationByTimeInterval:(double)arg1;
- (id)group;
- (id)initWithCoalescer:(id)arg1;
- (id)isolationQueue;
- (void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)pendingActivityTokens;
- (id)pendingActivityTokensSnapshot;
- (void)pushBack:(id /* block */)arg1;
- (void)setCoalescedUpdatesCount:(unsigned long long)arg1;
- (void)setCoalescer:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setPendingActivityTokens:(id)arg1;

@end
