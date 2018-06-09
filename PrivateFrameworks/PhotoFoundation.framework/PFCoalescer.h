/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCoalescer : NSObject {
    id /* block */  _action;
    id  _buffer;
    PFCoalescerContext * _context;
    long long  _fireSequenceNumber;
    double  _initialDelay;
    bool  _initialDelayTimerIsArmed;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSString * _label;
    long long  _lastUpdateResetSequenceNumber;
    long long  _mode;
    long long  _queueType;
    long long  _resetSequenceNumber;
    long long  _sequenceNumber;
    id /* block */  _snapshotAndDrainHandler;
    NSObject<OS_dispatch_source> * _source;
    NSObject<OS_dispatch_queue> * _sourceQueue;
    long long  _state;
    unsigned long long  _stateCaptureHandlerHandle;
    id  _target;
    id  _targetQueue;
    NSObject<OS_os_transaction> * _transaction;
    bool  _usesTarget;
}

@property (copy) id /* block */ action;
@property (retain) id buffer;
@property (retain) PFCoalescerContext *context;
@property double initialDelay;
@property bool initialDelayTimerIsArmed;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSString *label;
@property long long mode;
@property long long queueType;
@property (copy) id /* block */ snapshotAndDrainHandler;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property long long state;
@property unsigned long long stateCaptureHandlerHandle;
@property id target;
@property (retain) id targetQueue;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property bool usesTarget;

+ (id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(id /* block */)arg5 action:(id /* block */)arg6;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id /* block */)mutableCollectionBufferDrainer;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(id /* block */)arg5;
+ (id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(id /* block */)arg3;
+ (id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)buffer;
- (id)context;
- (void)dealloc;
- (void)dispatch_after:(unsigned long long)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)init;
- (id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(id /* block */)arg5 action:(id /* block */)arg6;
- (double)initialDelay;
- (bool)initialDelayTimerIsArmed;
- (id)isolationQueue;
- (id)label;
- (long long)mode;
- (long long)queueType;
- (void)reset;
- (void)setAction:(id /* block */)arg1;
- (void)setBuffer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setInitialDelay:(double)arg1;
- (void)setInitialDelayTimerIsArmed:(bool)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setQueueType:(long long)arg1;
- (void)setSnapshotAndDrainHandler:(id /* block */)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateCaptureHandlerHandle:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUsesTarget:(bool)arg1;
- (void)setupStateCaptureHandler;
- (id /* block */)snapshotAndDrainHandler;
- (id)source;
- (id)sourceQueue;
- (long long)state;
- (unsigned long long)stateCaptureHandlerHandle;
- (id)stateInformation;
- (id)target;
- (id)targetQueue;
- (id)transaction;
- (void)update;
- (void)update:(id /* block */)arg1;
- (bool)usesTarget;

@end
