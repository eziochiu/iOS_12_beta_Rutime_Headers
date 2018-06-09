/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlPresentationCoordinator : NSObject <HUPresentationDelegate, HUQuickControlContainerViewControllerDelegate, UIGestureRecognizerDelegate, UITraitEnvironment> {
    <HUQuickControlPresentationCoordinatorDelegate> * _delegate;
    NSMutableSet * _mutuallyExclusiveGestureRecognizers;
    HUQuickControlPresentationContext * _presentationContext;
    <NACancelable> * _pressGestureActiveTimerCancellationToken;
    HUForceInterpolatedPressGestureRecognizer * _pressGestureRecognizer;
    NSMapTable * _pressedItemContexts;
    HUQuickControlContainerViewController * _quickControlViewController;
    UIView * _targetView;
}

@property (nonatomic, readonly) HUPressedItemContext *activePressedItemContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlPresentationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *mutuallyExclusiveGestureRecognizers;
@property (nonatomic, retain) HUQuickControlPresentationContext *presentationContext;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, retain) <NACancelable> *pressGestureActiveTimerCancellationToken;
@property (nonatomic, retain) HUForceInterpolatedPressGestureRecognizer *pressGestureRecognizer;
@property (nonatomic, readonly) NSMapTable *pressedItemContexts;
@property (getter=isQuickControlPresented, nonatomic, readonly) bool quickControlIsPresented;
@property (nonatomic, retain) HUQuickControlContainerViewController *quickControlViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *targetView;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)_actuateTapticFeedbackIfAvailable;
- (id)_beginControlPresentationAnimated:(bool)arg1;
- (void)_cleanupForQuickControlDismissal;
- (void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(bool)arg2;
- (id)_createPressedContextForItem:(id)arg1 userInitiated:(bool)arg2;
- (id)_dismissQuickControlViewControllerAnimated:(bool)arg1;
- (void)_endUsingTapticFeedbackIfAvailable;
- (id)_gestureInstallationView;
- (void)_handleMutuallyExclusiveGesture:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_installGestureRecognizer;
- (void)_logUserMetricsAfterPress;
- (void)_prepareForTapticFeedbackIfAvailable;
- (void)_preparePressedItemContextForPresentationContext:(id)arg1 startApplier:(bool)arg2;
- (void)_pressGestureDidBecomeActive;
- (void)_pressGestureDidBeginWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_pressGestureDidEnd:(bool)arg1;
- (void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(bool)arg2;
- (void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2;
- (void)_updateOverrideAttributesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 alpha:(double)arg2 forItem:(id)arg3;
- (void)_validatePresentationContext:(id)arg1;
- (id)activePressedItemContext;
- (void)addMutuallyExclusiveGestureRecognizer:(id)arg1;
- (id)delegate;
- (id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
- (id)dismissQuickControlAnimated:(bool)arg1;
- (id)dismissQuickControlAnimated:(bool)arg1 wasDismissed:(bool*)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
- (id)initWithTargetView:(id)arg1 delegate:(id)arg2;
- (bool)isQuickControlPresented;
- (id)mutuallyExclusiveGestureRecognizers;
- (void)playBounceForItem:(id)arg1;
- (id)presentQuickControlWithContext:(id)arg1 animated:(bool)arg2;
- (id)presentationContext;
- (id)presentingViewController;
- (id)pressGestureActiveTimerCancellationToken;
- (id)pressGestureRecognizer;
- (id)pressedItemContexts;
- (id)quickControlViewController;
- (id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(bool)arg3;
- (double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(bool)arg2;
- (void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(bool)arg2;
- (void)removeMutuallyExclusiveGestureRecognizer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setPressGestureActiveTimerCancellationToken:(id)arg1;
- (void)setPressGestureRecognizer:(id)arg1;
- (void)setQuickControlViewController:(id)arg1;
- (id)targetView;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;

@end