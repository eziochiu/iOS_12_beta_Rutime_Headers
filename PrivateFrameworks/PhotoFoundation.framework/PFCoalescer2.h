/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCoalescer2 : NSObject {
    unsigned long long  _activityDelay;
    unsigned long long  _coalesceStart;
    unsigned long long  _coalescingInterval;
    <PFCoalescerDelegate> * _delegate;
    bool  _delegateProcessingInProgress;
    bool  _finished;
    unsigned long long  _fireDelay;
    id /* block */  _leaveBlock;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _maxActivityDelay;
    NSObject<OS_dispatch_group> * _postGroup;
    id /* block */  _postNotice;
    unsigned long long  _processingDelay;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebase;
}

@property (nonatomic) unsigned long long activityDelay;
@property (nonatomic) unsigned long long coalescingInterval;
@property (readonly) <PFCoalescerDelegate> *delegate;
@property (nonatomic) unsigned long long maxActivityDelay;
@property (nonatomic) unsigned long long processingDelay;

- (void).cxx_destruct;
- (unsigned long long)activityDelay;
- (void)coalesce:(id /* block */)arg1;
- (unsigned long long)coalescingInterval;
- (void)delayPostBy:(unsigned long long)arg1;
- (id)delegate;
- (void)finish:(id /* block */)arg1;
- (id)initUIControlRefreshCoalescerWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 activityDelay:(unsigned long long)arg2 maxActivityDelay:(unsigned long long)arg3 coalescingInterval:(unsigned long long)arg4 processingDelay:(unsigned long long)arg5;
- (id)initWithDelegate:(id)arg1 updateFrequency:(unsigned long long)arg2;
- (unsigned long long)maxActivityDelay;
- (void)mutate:(id /* block */)arg1;
- (void)postFinishedNotice;
- (void)postNotice;
- (void)processingComplete;
- (unsigned long long)processingDelay;
- (void)setActivityDelay:(unsigned long long)arg1;
- (void)setCoalescingInterval:(unsigned long long)arg1;
- (void)setMaxActivityDelay:(unsigned long long)arg1;
- (void)setProcessingDelay:(unsigned long long)arg1;

@end
