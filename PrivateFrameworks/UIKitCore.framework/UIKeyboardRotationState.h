/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardRotationState : NSObject {
    UIInputViewAnimationStyle * _animationStyle;
    int  _postRotationState;
    bool  _requiresNewState;
    int  _state;
    long long  _targetOrientation;
}

@property (nonatomic, retain) UIInputViewAnimationStyle *animationStyle;
@property (nonatomic) int postRotationState;
@property (nonatomic) bool requiresNewState;
@property (nonatomic) int state;
@property (nonatomic) long long targetOrientation;

+ (id)stateWithState:(int)arg1 targetOrientation:(long long)arg2;

- (id)animationStyle;
- (void)dealloc;
- (int)postRotationState;
- (bool)requiresNewState;
- (void)setAnimationStyle:(id)arg1;
- (void)setPostRotationState:(int)arg1;
- (void)setPostRotationState:(int)arg1 animationStyle:(id)arg2;
- (void)setRequiresNewState:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTargetOrientation:(long long)arg1;
- (int)state;
- (long long)targetOrientation;

@end
