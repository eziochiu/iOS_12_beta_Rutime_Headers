/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIContextActionsPresentationRegistration : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {
    UIViewPropertyAnimator * _commitPhasePropertyAnimator;
    id /* block */  _handler;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    SKUIContextActionsViewController * _orbContextActionsViewController;
    UIPreviewInteraction * _previewInteraction;
    bool  _previewInteractionDidEnd;
    NSTimer * _previewInteractionTimeout;
    UIViewPropertyAnimator * _previewPhasePropertyAnimator;
    UIViewController * _viewController;
}

@property (nonatomic, retain) UIViewPropertyAnimator *commitPhasePropertyAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) SKUIContextActionsViewController *orbContextActionsViewController;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic) bool previewInteractionDidEnd;
@property (nonatomic, retain) NSTimer *previewInteractionTimeout;
@property (nonatomic, retain) UIViewPropertyAnimator *previewPhasePropertyAnimator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_presentFromGestureRecognizer:(id)arg1;
- (void)cleanupPreviewInteraction:(id)arg1;
- (id)commitPhasePropertyAnimator;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithViewController:(id)arg1 handler:(id /* block */)arg2;
- (id)longPressGestureRecognizer;
- (void)longPressGestureRecognizerTriggered:(id)arg1;
- (id)orbContextActionsViewController;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionDidEnd;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)previewInteractionTimeout;
- (id)previewPhasePropertyAnimator;
- (void)setCommitPhasePropertyAnimator:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setOrbContextActionsViewController:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setPreviewInteractionDidEnd:(bool)arg1;
- (void)setPreviewInteractionTimeout:(id)arg1;
- (void)setPreviewPhasePropertyAnimator:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
