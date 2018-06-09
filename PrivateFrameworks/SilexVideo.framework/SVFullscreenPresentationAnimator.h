/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVFullscreenPresentationAnimator : NSObject <SVFullscreenTransitionCoordinator> {
    UIViewPropertyAnimator * _animator;
    id /* block */  _completionBlock;
    <SVFullscreenTransitionContext> * _context;
    UIView * _fromView;
}

@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic, readonly) id /* block */ completionBlock;
@property (nonatomic, retain) <SVFullscreenTransitionContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *fromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithContext:(id)arg1;
- (id)animator;
- (void)completeTransition:(bool)arg1;
- (id /* block */)completionBlock;
- (id)context;
- (id)fromView;
- (id)initWithCompletionBlock:(id /* block */)arg1;
- (void)setAnimator:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFromView:(id)arg1;

@end
