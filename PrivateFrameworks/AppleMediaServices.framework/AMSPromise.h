/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPromise : NSObject {
    AMSPromiseCompletionBlocks * _completionBlocks;
    AMSPromiseResult * _promiseResult;
    NSConditionLock * _stateLock;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, retain) AMSPromiseCompletionBlocks *completionBlocks;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, retain) AMSPromiseResult *promiseResult;
@property (nonatomic, retain) NSConditionLock *stateLock;

+ (void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(unsigned long long)arg4;
+ (void)_configureAnyPromise:(id)arg1 withPomises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3;
+ (bool)_errorIsCanceledError:(id)arg1;
+ (void)_finishPromise:(id)arg1 withPromise:(id)arg2;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithResult:(id)arg1;

- (void).cxx_destruct;
- (void)_addBlock:(id /* block */)arg1 orCallWithResult:(id /* block */)arg2;
- (bool)_isFinished;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)boolCompletionHandlerAdapter;
- (bool)cancel;
- (id)catchWithBlock:(id /* block */)arg1;
- (id)completionBlocks;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (id)promiseResult;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithError:(id*)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setCompletionBlocks:(id)arg1;
- (void)setPromiseResult:(id)arg1;
- (void)setStateLock:(id)arg1;
- (id)stateLock;
- (id)thenWithBlock:(id /* block */)arg1;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithTimeout:(double)arg1;

@end
