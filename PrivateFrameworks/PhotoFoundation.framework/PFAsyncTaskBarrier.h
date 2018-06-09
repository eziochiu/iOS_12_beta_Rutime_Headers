/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFAsyncTaskBarrier : NSObject {
    id /* block */  _completionBlock;
    NSCondition * _conditionLock;
    NSArray * _errors;
    NSString * _label;
    long long  _remainingTaskCount;
}

@property (readonly) id /* block */ completionBlock;
@property (readonly) NSCondition *conditionLock;
@property (retain) NSArray *errors;
@property (readonly) NSString *label;
@property (readonly) long long remainingTaskCount;

- (void).cxx_destruct;
- (void)changeRemainingTaskCount:(long long)arg1;
- (id /* block */)completionBlock;
- (id)conditionLock;
- (id)description;
- (id)errors;
- (void)executeCriticalBlock:(id /* block */)arg1;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2;
- (id)initWithLabel:(id)arg1 taskCount:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)label;
- (long long)remainingTaskCount;
- (void)setErrors:(id)arg1;
- (void)setRemainingTaskCount:(long long)arg1;
- (void)taskCompleted;
- (void)taskCompletedWithCriticalBlock:(id /* block */)arg1;
- (void)taskCompletedWithError:(id)arg1;
- (void)taskCompletedWithError:(id)arg1 criticalBlock:(id /* block */)arg2;
- (void)taskCompletedWithErrors:(id)arg1;
- (void)taskCompletedWithErrors:(id)arg1 criticalBlock:(id /* block */)arg2;
- (void)waitUntilCompleted;
- (void)waitUntilCompletedOrError;

@end
