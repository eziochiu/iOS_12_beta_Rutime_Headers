/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncSerializer : NSObject {
    NSOperationQueue * _operationQueue;
    NSOperation * _previousOperation;
    NSObject<OS_dispatch_queue> * _underlyingQueue;
}

@property (readonly) NSOperationQueue *operationQueue;
@property NSOperation *previousOperation;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;

+ (void)addDependentOperation:(id)arg1;
+ (void)addDependentOperationWithBlock:(id /* block */)arg1;
+ (void)addOperation:(id)arg1;
+ (void)addOperationWithBlock:(id /* block */)arg1;
+ (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
+ (void)operationDeallocating:(id)arg1;
+ (void)operationExecuting:(id)arg1;
+ (void)operationFinishing:(id)arg1;
+ (void)operationNotExecuting:(id)arg1;
+ (void)operationStarting:(id)arg1;
+ (void)performAfter:(double)arg1 block:(id /* block */)arg2;
+ (void)performAsyncBlock:(id /* block */)arg1;
+ (void)performSyncBlock:(id /* block */)arg1;
+ (id)sharedInstance;
+ (id)underlyingQueue;

- (void).cxx_destruct;
- (void)addDependentOperation:(id)arg1;
- (void)addDependentOperationWithBlock:(id /* block */)arg1;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationQueue;
- (void)performAfter:(double)arg1 block:(id /* block */)arg2;
- (void)performAsyncBlock:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;
- (id)previousOperation;
- (void)setPreviousOperation:(id)arg1;
- (id)underlyingQueue;

@end
