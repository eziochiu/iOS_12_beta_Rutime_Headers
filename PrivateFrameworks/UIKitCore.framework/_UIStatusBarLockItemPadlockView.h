/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate> {
    UIImageView * _bodyView;
    id /* block */  _completionBlock;
    UIStatusBarLockItemView * _owner;
    UIImageView * _shackleView;
}

@property (nonatomic, retain) UIImageView *bodyView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIStatusBarLockItemView *owner;
@property (nonatomic, retain) UIImageView *shackleView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateUnlockCompletionBlock:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)bodyView;
- (id /* block */)completionBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 owner:(id)arg2;
- (void)jiggleCompletionBlock:(id /* block */)arg1;
- (id)owner;
- (void)reset;
- (void)setBodyView:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setOwner:(id)arg1;
- (void)setShackleView:(id)arg1;
- (id)shackleView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
