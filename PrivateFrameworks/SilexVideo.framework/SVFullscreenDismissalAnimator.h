/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVFullscreenDismissalAnimator : NSObject <SVFullscreenTransitionCoordinator> {
    UIViewPropertyAnimator * _animator;
    id /* block */  _completionBlock;
    <SVFullscreenTransitionContext> * _context;
    UIView * _toView;
}

@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic, readonly) id /* block */ completionBlock;
@property (nonatomic, retain) <SVFullscreenTransitionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *toView;

- (void).cxx_destruct;
- (void)animateWithContext:(id)arg1;
- (id)animator;
- (void)completeTransition:(bool)arg1;
- (id /* block */)completionBlock;
- (id)context;
- (id)initWithCompletionBlock:(id /* block */)arg1;
- (void)setAnimator:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setToView:(id)arg1;
- (id)toView;

@end
