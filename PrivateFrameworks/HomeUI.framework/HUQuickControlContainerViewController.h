/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlContainerViewController : UIViewController <HUItemPresentationContainer, HUPresentationDelegate, HUPresentationDelegateHost, HUQuickControlContainerViewDelegate, HUQuickControlContentHosting, HUQuickControlViewControllerCoordinatorDelegate, HUViewControllerCustomDissmissing> {
    HUQuickControlViewController * _activeControlViewController;
    HUQuickControlContainerView * _controlContainerView;
    <HUQuickControlContainerViewControllerDelegate> * _delegate;
    <HUOpenURLHandling> * _detailViewURLHandler;
    UITapGestureRecognizer * _dismissGestureRecognizer;
    HMHome * _home;
    HFItem<NSCopying> * _item;
    HUAnimationApplier * _presentationApplier;
    unsigned long long  _presentationState;
    bool  _presentedDetailView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    HUQuickControlViewControllerCoordinator * _viewControllerCoordinator;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (nonatomic, retain) HUQuickControlViewController *activeControlViewController;
@property (nonatomic, retain) HUQuickControlContainerView *controlContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HUOpenURLHandling> *detailViewURLHandler;
@property (nonatomic, retain) UITapGestureRecognizer *dismissGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (nonatomic, readonly) HFItem<NSCopying> *item;
@property (nonatomic, retain) HUAnimationApplier *presentationApplier;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic) bool presentedDetailView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUQuickControlViewControllerCoordinator *viewControllerCoordinator;

+ (id)_blurAnimationSettingsForPresenting:(bool)arg1;
+ (id)_controlAlphaAnimationSettingsForPresenting:(bool)arg1;
+ (id)_controlScaleAnimationSettingsForPresenting:(bool)arg1;
+ (id)_detailChromeAnimationSettingsForPresenting:(bool)arg1;
+ (id)_easeOutTimingFunction;
+ (id)_sourceViewTransitionAnimationSettingsForPresenting:(bool)arg1;
+ (id)_statusBarHidingAnimationSettingsForPresenting:(bool)arg1;

- (void).cxx_destruct;
- (void)_controlDidDismiss;
- (void)_createControlContainerViewWithSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_dismissDetailsViewControllerAnimated:(bool)arg1 dismissControl:(bool)arg2;
- (void)_handleDismissGesture:(id)arg1;
- (void)_performTransitionToPresentationState:(unsigned long long)arg1 animated:(bool)arg2 initialProgress:(double)arg3 completion:(id /* block */)arg4;
- (id)_prepareDetailViewController;
- (id)_presentControlOfType:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updateActiveControlViewController;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptorAnimated:(bool)arg1;
- (void)_updateReachabilityStateForActiveControl;
- (void)_updateUserInteractionEnabledForActiveControl;
- (id)activeControlViewController;
- (void)alternateControlButtonPressedInContainerView:(id)arg1;
- (void)beginReceivingTouchesWithGestureRecognizer:(id)arg1;
- (id)controlContainerView;
- (void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(bool)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateReachability:(bool)arg2;
- (void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (id)delegate;
- (id)detailViewURLHandler;
- (void)detailsButtonPressedInContainerView:(id)arg1;
- (id)dismissControlAnimated:(bool)arg1;
- (id)dismissGestureRecognizer;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (void)hideAuxiliaryViewForQuickControlContent:(id)arg1;
- (id)home;
- (id)hu_prepareForDismissalAnimated:(bool)arg1;
- (id)hu_presentedItem;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3;
- (bool)isControlDismissedOrDismissing;
- (bool)isControlPresentedOrPresenting;
- (id)item;
- (id)presentAlternateActionViewControllerAnimated:(bool)arg1;
- (void)presentControlFromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (id)presentDetailViewControllerAnimated:(bool)arg1;
- (id)presentationApplier;
- (id)presentationDelegate;
- (unsigned long long)presentationState;
- (bool)presentedDetailView;
- (void)quickControlContent:(id)arg1 requestDismissalOfType:(unsigned long long)arg2;
- (void)quickControlContent:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)setActiveControlViewController:(id)arg1;
- (void)setControlContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailViewURLHandler:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setPresentationApplier:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPresentationState:(unsigned long long)arg1;
- (void)setPresentedDetailView:(bool)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewControllerCoordinator:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceViewTransformForPresentationProgress:(double)arg1;
- (id)viewControllerCoordinator;
- (void)viewDidLoad;

@end
