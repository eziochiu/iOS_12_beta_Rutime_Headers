/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFLazyFuture : MFFuture {
    id /* block */  _block;
    MFPromise * _promise;
    <MFScheduler> * _scheduler;
    NSConditionLock * _stateLock;
}

- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)initWithScheduler:(id)arg1 block:(id /* block */)arg2;
- (bool)isCancelled;
- (bool)isFinished;
- (void)onScheduler:(id)arg1 addFailureBlock:(id /* block */)arg2;
- (void)onScheduler:(id)arg1 addSuccessBlock:(id /* block */)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (bool)run;
- (bool)tryCancel;

@end
