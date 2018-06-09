/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAServiceCancelableOperation : NSObject {
    bool  _cancelRequested;
    id /* block */  _cancellationBlock;
    NSObject<OS_dispatch_group> * _completionGroup;
    NSInvocation * _invocation;
    long long  _operationId;
}

+ (id)currentOperation;
+ (id)operationNotFoundError:(long long)arg1;

- (void).cxx_destruct;
- (void)_startWork;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)beginAsyncWork;
- (bool)cancel;
- (id)description;
- (void)endAsyncWork;
- (void)enqueueOnQueue:(id)arg1;
- (id)initWithOperationId:(long long)arg1 invocation:(id)arg2;
- (bool)isCancelled;
- (id)operationCanceledError:(bool)arg1;
- (long long)operationId;
- (void)setCancellationBlock:(id /* block */)arg1;

@end
