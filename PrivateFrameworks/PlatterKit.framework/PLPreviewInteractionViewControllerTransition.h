/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLPreviewInteractionViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    PLViewControllerAnimator * _animator;
    id /* block */  _completion;
    bool  _presenting;
    _UIViewControllerOneToOneTransitionContext * _transitionContext;
    <UIViewControllerTransitioningDelegate> * _transitionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initForPresentation:(bool)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 transitionDelegate:(id)arg4 completion:(id /* block */)arg5;
- (id)initForDismissingViewController:(id)arg1 toViewController:(id)arg2 WithTransitionDelegate:(id)arg3 completion:(id /* block */)arg4;
- (id)initForPresentingViewController:(id)arg1 fromViewController:(id)arg2 withTransitionDelegate:(id)arg3 completion:(id /* block */)arg4;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(bool)arg1;

@end
