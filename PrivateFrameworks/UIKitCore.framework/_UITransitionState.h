/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITransitionState : NSObject {
    NSDate * _beginDate;
    id /* block */  _completion;
    long long  _transitionDirection;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, readonly) long long effectiveTransitionDirection;
@property (nonatomic, readonly) long long transitionDirection;

- (void).cxx_destruct;
- (id)beginDate;
- (void)cleanupWithFinishedState:(bool)arg1 completedState:(bool)arg2;
- (id)description;
- (long long)effectiveTransitionDirection;
- (id)initWithTransitionDirection:(long long)arg1 completion:(id /* block */)arg2;
- (bool)isActive;
- (bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (void)markBeginDate;
- (long long)transitionDirection;

@end
