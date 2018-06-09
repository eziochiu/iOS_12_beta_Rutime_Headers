/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewInteractionHighlighter : NSObject {
    NSArray * _accessoryHighlightEffects;
    bool  _animatesBackgroundEffects;
    bool  _animatesContentEffects;
    id /* block */  _backgroundEffectApplyBlock;
    bool  _cancelsInteractionWhenScrolling;
    UIControl * _compatibilityHighlightView;
    id /* block */  _completionBlock;
    NSUUID * _contentAnimationIdentifier;
    UIView * _customBackgroundEffectView;
    UIView * _customContainerView;
    <UIInteraction> * _interaction;
    _UIInteractiveHighlightEffect * _interactiveHighlightEffect;
    <_UIInteractiveHighlighting> * _interactiveHighlightView;
    long long  _preferredAnimationStyle;
    double  _preferredMaximumScale;
    double  _preferredMinimumScale;
    _UIInteractiveHighlightEffect * _presentationControllerHighlightEffect;
    id /* block */  _privateCompletionBlock;
    bool  _shouldApplyBackgroundEffects;
    bool  _shouldApplyContentEffects;
    bool  _shouldApplyEffectsOnProxyView;
    bool  _shouldEndWithCancelAnimation;
    bool  _shouldTransferViewOwnership;
    UIView * _view;
}

@property (nonatomic, copy) id /* block */ backgroundEffectApplyBlock;
@property (nonatomic) bool cancelsInteractionWhenScrolling;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UIView *customBackgroundEffectView;
@property (nonatomic) UIView *customContainerView;
@property (nonatomic, readonly) _UIInteractiveHighlightEffect *interactiveHighlightEffect;
@property (nonatomic, copy) id /* block */ privateCompletionBlock;
@property (nonatomic) bool shouldApplyBackgroundEffects;
@property (nonatomic) bool shouldApplyContentEffects;
@property (nonatomic) bool shouldApplyEffectsOnProxyView;
@property (nonatomic) bool shouldEndWithCancelAnimation;
@property (nonatomic) bool shouldTransferViewOwnership;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_animateAlongsideViewControllerPresentationDismiss;
- (void)_animateForDelayedViewControllerPresentation;
- (void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)arg1;
- (void)_delayedViewControllerPresentationDidCancel;
- (void)_finalizeAfterInteraction;
- (void)_finalizeAfterInteractionIfNeeded;
- (void)_prepareAccessoryViewsForScrollView:(id)arg1 environment:(id)arg2;
- (void)_prepareContentEffectsForInteraction:(id)arg1;
- (void)_prepareForInteraction:(id)arg1;
- (void)_prepareForViewControllerPresentation:(id)arg1;
- (void)_setHighlighted:(bool)arg1 forViewIfNeeded:(id)arg2;
- (void)_updateFromInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(bool)arg3;
- (void)_viewControllerPresentationDidEnd;
- (id /* block */)backgroundEffectApplyBlock;
- (bool)cancelsInteractionWhenScrolling;
- (id /* block */)completionBlock;
- (id)customBackgroundEffectView;
- (id)customContainerView;
- (id)initWithView:(id)arg1;
- (id)interactiveHighlightEffect;
- (id /* block */)privateCompletionBlock;
- (void)setBackgroundEffectApplyBlock:(id /* block */)arg1;
- (void)setCancelsInteractionWhenScrolling:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCustomBackgroundEffectView:(id)arg1;
- (void)setCustomContainerView:(id)arg1;
- (void)setPrivateCompletionBlock:(id /* block */)arg1;
- (void)setShouldApplyBackgroundEffects:(bool)arg1;
- (void)setShouldApplyContentEffects:(bool)arg1;
- (void)setShouldApplyEffectsOnProxyView:(bool)arg1;
- (void)setShouldEndWithCancelAnimation:(bool)arg1;
- (void)setShouldTransferViewOwnership:(bool)arg1;
- (bool)shouldApplyBackgroundEffects;
- (bool)shouldApplyContentEffects;
- (bool)shouldApplyEffectsOnProxyView;
- (bool)shouldEndWithCancelAnimation;
- (bool)shouldTransferViewOwnership;
- (id)view;

@end
