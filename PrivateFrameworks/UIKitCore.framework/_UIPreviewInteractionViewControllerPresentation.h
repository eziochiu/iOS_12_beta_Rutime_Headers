/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionViewControllerPresentation : NSObject {
    <_UIPreviewInteractionViewControllerTransition> * _appearanceTransition;
    UIView * _customViewForTouchContinuation;
    <_UIPreviewInteractionViewControllerTransition> * _disappearanceTransition;
    UIPreviewPresentationController * _presentationController;
    id /* block */  _privatePresentationBlock;
    id /* block */  _privatePresentationCompletionBlock;
    bool  _shouldFlipFromAndToViewsForDisappearanceTransition;
    bool  _shouldPresentAutomatically;
    bool  _shouldUpdateFromViewBeforePresentation;
    bool  _shouldUseCATransitions;
    UIViewController * _viewController;
}

@property (nonatomic, retain) <_UIPreviewInteractionViewControllerTransition> *appearanceTransition;
@property (nonatomic) UIView *customViewForTouchContinuation;
@property (nonatomic, retain) <_UIPreviewInteractionViewControllerTransition> *disappearanceTransition;
@property (nonatomic, retain) UIPreviewPresentationController *presentationController;
@property (nonatomic, copy) id /* block */ privatePresentationBlock;
@property (nonatomic, copy) id /* block */ privatePresentationCompletionBlock;
@property (nonatomic) bool shouldFlipFromAndToViewsForDisappearanceTransition;
@property (nonatomic) bool shouldPresentAutomatically;
@property (nonatomic) bool shouldUpdateFromViewBeforePresentation;
@property (nonatomic) bool shouldUseCATransitions;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_completeViewControllerPresentationImmediately;
- (id)appearanceTransition;
- (id)customViewForTouchContinuation;
- (id)disappearanceTransition;
- (id)initWithViewController:(id)arg1;
- (void)presentViewController;
- (id)presentationController;
- (id /* block */)privatePresentationBlock;
- (id /* block */)privatePresentationCompletionBlock;
- (void)setAppearanceTransition:(id)arg1;
- (void)setCustomViewForTouchContinuation:(id)arg1;
- (void)setDisappearanceTransition:(id)arg1;
- (void)setPresentationController:(id)arg1;
- (void)setPrivatePresentationBlock:(id /* block */)arg1;
- (void)setPrivatePresentationCompletionBlock:(id /* block */)arg1;
- (void)setShouldFlipFromAndToViewsForDisappearanceTransition:(bool)arg1;
- (void)setShouldPresentAutomatically:(bool)arg1;
- (void)setShouldUpdateFromViewBeforePresentation:(bool)arg1;
- (void)setShouldUseCATransitions:(bool)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldFlipFromAndToViewsForDisappearanceTransition;
- (bool)shouldPresentAutomatically;
- (bool)shouldUpdateFromViewBeforePresentation;
- (bool)shouldUseCATransitions;
- (id)viewController;

@end
