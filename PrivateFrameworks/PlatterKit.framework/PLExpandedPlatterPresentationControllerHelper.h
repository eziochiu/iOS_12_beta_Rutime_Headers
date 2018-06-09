/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLExpandedPlatterPresentationControllerHelper : NSObject <PLViewControllerAnimatorObserving> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    double  _additionalHomeAffordanceSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _childPreferredContentSize;
    bool  _didPlayDismissHaptic;
    _UIStatesFeedbackGenerator * _dismissFeedbackBehavior;
    UILabel * _dismissLabel;
    UIView * _dismissLabelContainerView;
    UINotificationFeedbackGenerator * _homeAffordanceFeedbackGenerator;
    UIPanGestureRecognizer * _homeAffordancePanGesture;
    MTLumaDodgePillView * _homeAffordanceView;
    bool  _homeAffordanceVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    <PLKeyboardHomeAffordanceAssertion> * _keyboardHomeAffordance;
    bool  _listenToKeyboardEvents;
    UIPresentationController<PLExpandedPlatterPresentationController> * _presentationController;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewInitialFrame;
}

@property (nonatomic) double additionalHomeAffordanceSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOfPresentedViewInContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (getter=isHomeAffordanceVisible, nonatomic) bool homeAffordanceVisible;
@property (getter=_keyboardFrame, setter=_setKeyboardFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:, nonatomic, retain) <PLKeyboardHomeAffordanceAssertion> *keyboardHomeAffordance;
@property (nonatomic) bool listenToKeyboardEvents;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) UIPresentationController<PLExpandedPlatterPresentationController> *presentationController;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGSize { double x1; double x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 inUseableContainerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })useableContainerViewBoundsInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (bool)_actuateFeedbackForDismissalIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetWithPresentedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForPresentedExpandedPlatterView:(id)arg1;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_expandedPlatterView;
- (void)_fireHomeGesture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_handleHomeAffordancePan:(id)arg1;
- (bool)_isKeyboardHomeAffordanceVisible;
- (bool)_isLocalHomeAffordanceVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyboardFrame;
- (id)_keyboardHomeAffordance;
- (void)_popDismissLabel;
- (id)_previewInteractionManager;
- (id)_previewInteractionPresentableViewController;
- (void)_setHomeAffordanceVisible:(bool)arg1;
- (void)_setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setKeyboardHomeAffordance:(id)arg1;
- (void)_setKeyboardHomeAffordanceVisible:(bool)arg1;
- (void)_setLocalHomeAffordanceVisible:(bool)arg1;
- (void)_settleHomeAffordance;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (double)additionalHomeAffordanceSpacing;
- (void)completeDismissal;
- (id)containerView;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)homeAffordancePanGesture;
- (id)initWithExpandedPlatterPresentationController:(id)arg1 andSourceView:(id)arg2;
- (bool)isHomeAffordanceVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (bool)listenToKeyboardEvents;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentationController;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (id)presentedViewController;
- (id)presentingViewController;
- (void)setAdditionalHomeAffordanceSpacing:(double)arg1;
- (void)setHomeAffordancePanGesture:(id)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setListenToKeyboardEvents:(bool)arg1;
- (void)setPresentationController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2 superBlock:(id /* block */)arg3;

@end
