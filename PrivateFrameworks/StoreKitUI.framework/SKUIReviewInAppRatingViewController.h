/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewInAppRatingViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIViewControllerTransitioningDelegate> {
    UIVisualEffectView * _backgroundView;
    id /* block */  _completion;
    NSMutableArray * _constraints;
    bool  _disableSubmit;
    SKUIReviewInAppRatingHeaderView * _headerView;
    SKUIStarRatingControl * _ratingControl;
    UIInterfaceAction * _ratingControlAction;
    id /* block */  _ratingHandler;
    UIStackView * _stackView;
    unsigned long long  _state;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableSubmit;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIReviewInAppRatingHeaderView *headerView;
@property (nonatomic, retain) SKUIStarRatingControl *ratingControl;
@property (nonatomic, retain) UIInterfaceAction *ratingControlAction;
@property (nonatomic, copy) id /* block */ ratingHandler;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actions;
- (id)_actionsLayoutAxesForCurrentState;
- (id)_buttonActionWithTitle:(id)arg1 style:(unsigned long long)arg2;
- (void)_ratingControlChanged:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)backgroundView;
- (id /* block */)completion;
- (id)constraints;
- (bool)disableSubmit;
- (id)headerView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)ratingControl;
- (id)ratingControlAction;
- (id /* block */)ratingHandler;
- (void)reloadViewsConfiguration;
- (void)setBackgroundView:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDisableSubmit:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setRatingControl:(id)arg1;
- (void)setRatingControlAction:(id)arg1;
- (void)setRatingHandler:(id /* block */)arg1;
- (void)setStackView:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)stackView;
- (unsigned long long)state;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
