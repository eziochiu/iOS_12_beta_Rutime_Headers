/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFuture : NSObject <CNFuture, CNPromise> {
    CNFutureCompletionBlocks * _completionBlocks;
    CNFutureResult * _futureResult;
    NSConditionLock * _stateLock;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)chain:(id)arg1;
+ (void)finishPromise:(id)arg1 withFuture:(id)arg2;
+ (id)flatMap:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)future;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)join:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)promiseFuture;
+ (id)recover:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)sequence:(id)arg1;

- (void)_flushCompletionBlocks;
- (bool)_nts_isFinished;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1 scheduler:(id)arg2;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (bool)cancel;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (void)dealloc;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)futureResult;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)nts_isFinished;
- (id)recover:(id /* block */)arg1;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end
