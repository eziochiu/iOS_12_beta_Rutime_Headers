/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCKeyedOperationQueue : NSObject {
    NSMutableDictionary * _cancelHandlersByKey;
    <FCKeyedOperationQueueDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSMutableSet * _keysForExecutingOperations;
    long long  _maxConcurrentOperationCount;
    NSMutableOrderedSet * _mutableKeyQueue;
    NSObject<OS_dispatch_group> * _operationExecutionGroup;
    bool  _suspended;
}

@property (nonatomic, retain) NSMutableDictionary *cancelHandlersByKey;
@property (nonatomic) <FCKeyedOperationQueueDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, copy) NSOrderedSet *keyQueue;
@property (nonatomic, retain) NSMutableSet *keysForExecutingOperations;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (nonatomic, retain) NSMutableOrderedSet *mutableKeyQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *operationExecutionGroup;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)_cancelOperationsIfNeeded;
- (void)_enqueueOperationIfNeeded;
- (id)cancelHandlersByKey;
- (id)delegate;
- (id)executionQueue;
- (id)init;
- (id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2;
- (bool)isSuspended;
- (id)keyQueue;
- (id)keysForExecutingOperations;
- (long long)maxConcurrentOperationCount;
- (id)mutableKeyQueue;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(id /* block */)arg1;
- (id)operationExecutionGroup;
- (void)setCancelHandlersByKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)setKeyQueue:(id)arg1;
- (void)setKeysForExecutingOperations:(id)arg1;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setMutableKeyQueue:(id)arg1;
- (void)setOperationExecutionGroup:(id)arg1;
- (void)setSuspended:(bool)arg1;

@end
