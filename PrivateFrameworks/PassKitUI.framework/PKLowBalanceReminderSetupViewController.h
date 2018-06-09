/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLowBalanceReminderSetupViewController : UITableViewController {
    PKPaymentPassAction * _action;
    NSNumberFormatter * _currencyAmountFormatter;
    NSArray * _currencyAmountOptions;
    NSString * _currencyCode;
    <PKLowBalanceReminderSetupViewControllerDelegate> * _delegate;
    PKPassPreferencesManager * _passPreferencesManager;
    PKPaymentPass * _paymentPass;
    NSDecimalNumber * _selectedCurrencyAmount;
    PKEnteredValueActionItem * _topUpActionItem;
}

@property (nonatomic, retain) PKPaymentPassAction *action;
@property (nonatomic, retain) NSNumberFormatter *currencyAmountFormatter;
@property (nonatomic, retain) NSArray *currencyAmountOptions;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) <PKLowBalanceReminderSetupViewControllerDelegate> *delegate;
@property (nonatomic, retain) PKPassPreferencesManager *passPreferencesManager;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) NSDecimalNumber *selectedCurrencyAmount;
@property (nonatomic, retain) PKEnteredValueActionItem *topUpActionItem;

- (void).cxx_destruct;
- (id)_currencyAmountAtIndexPath:(id)arg1;
- (id)_indexPathOfCurrencyAmount:(id)arg1;
- (id)action;
- (id)currencyAmountFormatter;
- (id)currencyAmountOptions;
- (id)currencyCode;
- (id)delegate;
- (id)initWithAction:(id)arg1 forPass:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passPreferencesManager;
- (id)paymentPass;
- (id)selectedCurrencyAmount;
- (void)setAction:(id)arg1;
- (void)setCurrencyAmountFormatter:(id)arg1;
- (void)setCurrencyAmountOptions:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPassPreferencesManager:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setSelectedCurrencyAmount:(id)arg1;
- (void)setTopUpActionItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)topUpActionItem;
- (void)updateCheckmarkForSelectedCellAtIndexPath:(id)arg1;
- (void)viewDidLoad;

@end