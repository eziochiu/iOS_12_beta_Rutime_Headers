/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIContextActionsViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIInterfaceActionHandlerInvocationDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    bool  _appliedSystemRecognizer;
    UIVisualEffectView * _backgroundView;
    SKUIContextActionsConfiguration * _configuration;
    NSMutableArray * _constraints;
    UIInterfaceActionGroupView * _contextActionView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureRecognizerInitialLocation;
    bool  _orbPresentation;
    UIInterfaceActionGroupView * _scrollableActionGroupView;
    UIStackView * _stackView;
    UIGestureRecognizer * _systemProvidedGestureRecognzier;
    SKUIContextActionsPresentationController * _transitionPresentationController;
}

@property (getter=hasAppliedSystemRecognizer, nonatomic) bool appliedSystemRecognizer;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, retain) SKUIContextActionsConfiguration *configuration;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) UIInterfaceActionGroupView *contextActionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } gestureRecognizerInitialLocation;
@property (readonly) unsigned long long hash;
@property (getter=isOrbPresentation, nonatomic) bool orbPresentation;
@property (nonatomic, retain) UIInterfaceActionGroupView *scrollableActionGroupView;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIGestureRecognizer *systemProvidedGestureRecognzier;
@property (nonatomic, retain) SKUIContextActionsPresentationController *transitionPresentationController;

- (void).cxx_destruct;
- (void)_applySystemRecognizer;
- (void)_reloadViewsConfiguration;
- (id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)backgroundView;
- (id)configuration;
- (id)constraints;
- (id)contextActionView;
- (struct CGPoint { double x1; double x2; })gestureRecognizerInitialLocation;
- (bool)hasAppliedSystemRecognizer;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)isOrbPresentation;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)scrollableActionGroupView;
- (void)setAppliedSystemRecognizer:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContextActionView:(id)arg1;
- (void)setGestureRecognizerInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOrbPresentation:(bool)arg1;
- (void)setScrollableActionGroupView:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setSystemProvidedGestureRecognzier:(id)arg1;
- (void)setTransitionPresentationController:(id)arg1;
- (id)stackView;
- (id)systemProvidedGestureRecognzier;
- (void)systemProvidedGestureRecognzierTriggered:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)transitionPresentationController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewTapped:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
