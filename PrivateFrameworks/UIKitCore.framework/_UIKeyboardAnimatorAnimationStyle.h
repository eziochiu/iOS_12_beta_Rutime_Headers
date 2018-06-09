/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle {
    _UIKeyboardAnimator * _animator;
    bool  _currentFromPosition;
    <UIInputViewAnimationHost> * _currentHost;
}

+ (id)animationStyleWithAnimator:(id)arg1;

- (void).cxx_destruct;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (void)defaultLaunchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)launchAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 completion:(id /* block */)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;

@end
