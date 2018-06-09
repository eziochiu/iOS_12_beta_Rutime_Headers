/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLPreviewInteractionManager : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate> {
    <PLPreviewInteractionManagerDelegate> * _delegate;
    bool  _didPresent;
    id /* block */  _dismissalCompletion;
    id /* block */  _presentationCompletion;
    UIViewController<PLPreviewInteractionPresentable> * _presentedViewController;
    UIViewController<PLPreviewInteractionPresenting> * _presentingViewController;
    UIPreviewInteraction * _previewInteraction;
    _UIPreviewInteractionViewControllerPresentation * _previewInteractionPresentation;
    bool  _willPresent;
}

@property (getter=hasCommittedToPresentation, nonatomic, readonly) bool committedToPresentation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLPreviewInteractionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController<PLPreviewInteractionPresentable> *presentedViewController;
@property (readonly) Class superclass;
@property (getter=_willPresent, setter=_setWillPresent:, nonatomic) bool willPresent;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_dismissIfPossibleWithTrigger:(long long)arg1;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)_previewInteractionViewControllerTransitionDidDismiss:(bool)arg1;
- (void)_previewInteractionViewControllerTransitionDidPresent:(bool)arg1;
- (void)_setWillPresent:(bool)arg1;
- (bool)_willPresent;
- (void)completeTransitionImmediately;
- (id)delegate;
- (bool)dismissIfPossible:(id /* block */)arg1;
- (bool)hasCommittedToPresentation;
- (id)initWithPresentingViewController:(id)arg1;
- (bool)presentIfPossible:(id /* block */)arg1;
- (id)presentedViewController;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)resetForInitialInteraction;
- (void)setDelegate:(id)arg1;

@end