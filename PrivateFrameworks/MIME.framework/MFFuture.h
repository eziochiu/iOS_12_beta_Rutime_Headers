/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFFuture : NSObject <MFFuture, MFPromisePrivate> {
    NSMutableArray * _completionBlocks;
    NSError * _error;
    id  _result;
    NSConditionLock * _stateLock;
}

@property (readonly) id /* block */ boolErrorCompletionHandlerAdapter;
@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly) id /* block */ completionHandlerAdapter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id /* block */ errorOnlyCompletionHandlerAdapter;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_join:(id)arg1 ignoreFailures:(bool)arg2;
+ (id)_recover:(id)arg1 withBlock:(id /* block */)arg2 scheduler:(id)arg3;
+ (id)_then:(id)arg1 withBlock:(id /* block */)arg2 scheduler:(id)arg3;
+ (id)chain:(id)arg1;
+ (id)combine:(id)arg1;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)join:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)nullFuture;
+ (id)onScheduler:(id)arg1 futureWithBlock:(id /* block */)arg2;
+ (id)onScheduler:(id)arg1 lazyFutureWithBlock:(id /* block */)arg2;
+ (id)sequence:(id)arg1;

- (void)_addCompletionBlock:(id /* block */)arg1;
- (void)_finishWithFuture:(id)arg1;
- (void)_flushCompletionBlocks;
- (bool)_nts_isFinished;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (void)cancel;
- (id /* block */)completionHandlerAdapter;
- (void)dealloc;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (id)map:(id /* block */)arg1;
- (void)onScheduler:(id)arg1 addFailureBlock:(id /* block */)arg2;
- (void)onScheduler:(id)arg1 addSuccessBlock:(id /* block */)arg2;
- (id)onScheduler:(id)arg1 map:(id /* block */)arg2;
- (id)onScheduler:(id)arg1 recover:(id /* block */)arg2;
- (id)onScheduler:(id)arg1 then:(id /* block */)arg2;
- (id)recover:(id /* block */)arg1;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (id)then:(id /* block */)arg1;
- (bool)tryCancel;

@end
