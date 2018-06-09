/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentIdentityVerificationPickerViewController : PKPaymentSetupTableViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController * _controller;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    NSString * _footerText;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    PKTableHeaderView * _headerView;
    unsigned long long  _identityVerificaionError;
    NSArray * _leftBarButtonItems;
    bool  _navigationEnabled;
    PKPaymentSetupFieldPicker * _pickerField;
    NSArray * _rightBarButtonItems;
    bool  _rightBarButtonItemsEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *headerSubtitle;
@property (nonatomic, retain) NSString *headerTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (void)_processNextViewController;
- (void)_setIdleTimerDisabled:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setRightBarButtonItemsEnabled:(bool)arg1;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_showNavigationBarSpinner:(bool)arg1;
- (void)_terminateFlow;
- (void)_updateNavigationItemAnimated:(bool)arg1;
- (void)_updateRightBarButtonState;
- (id)delegate;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)headerView;
- (void)hideActivitySpinner;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithController:(id)arg1 pickerField:(id)arg2 footerText:(id)arg3;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 pickerField:(id)arg3 footerText:(id)arg4;
- (bool)isComplete;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (id)pkui_navigationBarTintColor;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)setDelegate:(id)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
