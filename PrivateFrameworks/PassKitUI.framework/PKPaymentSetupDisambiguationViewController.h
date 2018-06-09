/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate> {
    <PKPaymentSetupDisambiguationViewControllerDelegate> * _delegate;
    NSString * _enteredCardNumber;
    PKDisambiguationFooterView * _footerView;
    PKTableHeaderView * _headerView;
    UIBarButtonItem * _nextBarButtonItem;
    NSArray * _products;
    PKPaymentSetupProduct * _selectedProduct;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupDisambiguationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *enteredCardNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *products;
@property (nonatomic, readonly, retain) PKPaymentSetupProduct *selectedProduct;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_nextTapped:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1;
- (void)_popToCameraCapture:(id)arg1;
- (id)_productAtIndexPath:(id)arg1;
- (void)_setupLater:(id)arg1;
- (void)_updateSelectedProduct:(id)arg1;
- (void)clearSelectedProduct;
- (void)dealloc;
- (id)delegate;
- (id)enteredCardNumber;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)products;
- (id)selectedProduct;
- (void)setDelegate:(id)arg1;
- (void)setEnteredCardNumber:(id)arg1;
- (void)setProducts:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
