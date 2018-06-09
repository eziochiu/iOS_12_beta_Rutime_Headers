/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {
    <CNFRegFirstRunDelegate> * _delegate;
    UIButton * _learnMoreButton;
    CNFRegController * _regController;
}

@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (nonatomic, retain) UIBarButtonItem *customLeftButton;
@property (nonatomic, retain) UIBarButtonItem *customRightButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNFRegFirstRunDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNFRegController *regController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getStartedPressed:(id)arg1;
- (void)_learnMorePressed:(id)arg1;
- (long long)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)loadView;
- (id)regController;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegController:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)userInteractionColor;
- (void)viewWillAppear:(bool)arg1;
- (void)willBecomeActive;

@end
