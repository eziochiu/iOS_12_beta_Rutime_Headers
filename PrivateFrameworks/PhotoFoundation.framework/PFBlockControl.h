/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlDirectExecution, PFBlockControlQueueing> {
    id /* block */  _block;
    bool  _executeOnDealloc;
    PFDispatchQueue * _queue;
    unsigned long long  _status;
    NSObject<OS_dispatch_group> * _workGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool executeOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_execute;
- (unsigned long long)_shouldEnqueue;
- (bool)blockHasFinished;
- (bool)blockHasStarted;
- (bool)blockWasCanceled;
- (bool)cancelBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)dequeue;
- (id)description;
- (bool)enqueue;
- (bool)enqueueWithDelay:(unsigned long long)arg1;
- (bool)executeBlock;
- (bool)executeOnDealloc;
- (bool)groupNotify:(id)arg1;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)invoke:(unsigned long long)arg1;
- (void)notifyOnQueue:(id)arg1 whenFinished:(id /* block */)arg2;
- (void)setExecuteOnDealloc:(bool)arg1;
- (bool)tryCancelBlock;
- (void)waitForBlock;

@end