/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardKeyplaneTransition : NSObject {
    id /* block */  _completionBlock;
    double  _currentProgress;
    CADisplayLink * _displayLink;
    UIKBTree * _end;
    UIView * _endView;
    double  _finalTransitionStartTime;
    double  _finishDuration;
    double  _finishProgress;
    bool  _initiallyAtEnd;
    UIKBKeyViewAnimator * _keyViewAnimator;
    UIKBTree * _keyboard;
    double  _liftOffProgress;
    UIKBTree * _start;
    UIView * _startView;
    <UIKeyboardKeyplaneTransitionDelegate> * _transitionDelegate;
    NSMutableArray * _transitionViews;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic, readonly) double endHeight;
@property (nonatomic) bool initiallyAtEnd;
@property (nonatomic, retain) UIKBKeyViewAnimator *keyViewAnimator;
@property (nonatomic, retain) UIKBTree *keyboard;
@property (nonatomic, readonly) double nonInteractiveDuration;
@property (nonatomic, readonly) double startHeight;
@property (nonatomic) <UIKeyboardKeyplaneTransitionDelegate> *transitionDelegate;

- (void)addTransitionView:(id)arg1 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 endFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)cancelNonInteractiveAnimation;
- (void)commitTransitionRebuild;
- (id /* block */)completionBlock;
- (void)dealloc;
- (double)endHeight;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(id /* block */)arg2;
- (bool)initiallyAtEnd;
- (id)keyViewAnimator;
- (id)keyboard;
- (double)nonInteractiveDuration;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)runNonInteractivelyWithCompletion:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInitiallyAtEnd:(bool)arg1;
- (void)setKeyViewAnimator:(id)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setTransitionDelegate:(id)arg1;
- (double)startHeight;
- (id)transitionDelegate;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;

@end