/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAppCACommitFuture : NSObject {
    id /* block */  _block;
    bool  _finished;
    bool  _invalidated;
}

@property (getter=_isFinished, nonatomic, readonly) bool finished;
@property (getter=_isInvalidated, nonatomic, readonly) bool invalidated;

+ (id)scheduledPostCommitFuture:(id /* block */)arg1;
+ (id)scheduledPreCommitFuture:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_invoke;
- (bool)_isFinished;
- (bool)_isInvalidated;
- (id)initWithPhase:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)invalidate;

@end
