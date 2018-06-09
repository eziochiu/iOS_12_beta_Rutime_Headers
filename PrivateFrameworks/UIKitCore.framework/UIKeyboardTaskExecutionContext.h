/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardTaskExecutionContext : NSObject {
    id /* block */  _continuation;
    UIKeyboardTaskQueue * _executionQueue;
    id  _info;
    UIKeyboardTaskExecutionContext * _parentExecutionContext;
    id /* block */  _pendingCompletionBlock;
}

@property (nonatomic, readonly) UIKeyboardTaskQueue *executionQueue;
@property (nonatomic, retain) id info;
@property (nonatomic, copy) id /* block */ pendingCompletionBlock;

- (id)childWithContinuation:(id /* block */)arg1;
- (void)dealloc;
- (id)executionQueue;
- (id)info;
- (id)init;
- (id)initWithExecutionQueue:(id)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(id /* block */)arg2;
- (id /* block */)pendingCompletionBlock;
- (void)returnExecutionToParent;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setPendingCompletionBlock:(id /* block */)arg1;
- (void)transferExecutionToMainThreadWithTask:(id /* block */)arg1;

@end
