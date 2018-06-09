/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCardUnsupportedViewController : PKPaymentSetupTableViewController {
    PKLinkedAppView * _appViewCell;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    PKTableHeaderView * _headerView;
    PKPaymentSetupProduct * _product;
}

@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (nonatomic, retain) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_updateViewsWithProduct:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithUnsupportedProduct:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (id)product;
- (void)setDelegate:(id)arg1;
- (void)setProduct:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
