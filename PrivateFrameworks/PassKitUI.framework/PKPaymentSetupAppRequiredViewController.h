/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAppRequiredViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView * _headerView;
    PKPaymentSetupProduct * _product;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

- (void).cxx_destruct;
- (void)_doneButtonTapped:(id)arg1;
- (id)initWithSetupContext:(long long)arg1 setupDelegate:(id)arg2 product:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
