/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAsyncOnceOperation : NSObject {
    NSObject<OS_dispatch_group> * _activeGroup;
    <FCOperationCanceling><FCOperationPrioritizing> * _activeOperation;
    bool  _finished;
    unsigned long long  _interest;
    NFMutexLock * _lock;
    long long  _relativePriority;
    bool  _succeeded;
    id /* block */  _workBlock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *activeGroup;
@property (nonatomic, retain) <FCOperationCanceling><FCOperationPrioritizing> *activeOperation;
@property (nonatomic) bool finished;
@property (nonatomic, readonly) bool finishedExecuting;
@property (nonatomic, readonly) bool finishedExecutingWithFailure;
@property (nonatomic) unsigned long long interest;
@property (nonatomic, retain) NFMutexLock *lock;
@property (nonatomic) long long relativePriority;
@property (nonatomic) bool succeeded;
@property (nonatomic, copy) id /* block */ workBlock;

- (void).cxx_destruct;
- (id)activeGroup;
- (id)activeOperation;
- (id)executeWithCompletionHandler:(id /* block */)arg1;
- (bool)finished;
- (bool)finishedExecuting;
- (bool)finishedExecutingWithFailure;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (unsigned long long)interest;
- (id)lock;
- (long long)relativePriority;
- (void)setActiveGroup:(id)arg1;
- (void)setActiveOperation:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setInterest:(unsigned long long)arg1;
- (void)setLock:(id)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setSucceeded:(bool)arg1;
- (void)setWorkBlock:(id /* block */)arg1;
- (bool)succeeded;
- (id /* block */)workBlock;

@end
