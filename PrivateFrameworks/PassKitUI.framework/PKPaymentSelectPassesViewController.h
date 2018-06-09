/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController {
    NSString * _buttonText;
    bool  _canSelectMultiplePasses;
    <PKPaymentSelectPassesViewControllerDelegate> * _delegate;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    PKTableHeaderView * _headerView;
    NSArray * _passes;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSMutableArray * _selectedIndexPaths;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic) bool canSelectMultiplePasses;
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, copy) NSString *headerTitle;

- (void).cxx_destruct;
- (void)_continousButtonPressed;
- (void)_setContinousButtonEnabledState;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setViewEnabledState:(bool)arg1;
- (id)buttonText;
- (bool)canSelectMultiplePasses;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)headerView;
- (id)initWithPaymentPasses:(id)arg1 context:(long long)arg2 delegate:(id)arg3 peerPaymentAccount:(id)arg4;
- (id)initWithStyle:(long long)arg1 context:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pkui_navigationBarTintColor;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)setButtonText:(id)arg1;
- (void)setCanSelectMultiplePasses:(bool)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
