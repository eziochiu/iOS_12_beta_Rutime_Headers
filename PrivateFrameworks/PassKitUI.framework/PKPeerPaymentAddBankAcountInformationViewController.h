/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentAddBankAcountInformationViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {
    NSString * _accountCountryCode;
    PKPeerPaymentBankAccountInformation * _bankInformation;
    NSArray * _cellPlaceholderText;
    NSArray * _cellText;
    NSMutableDictionary * _cells;
    <PKPeerPaymentAddBankAcountInformationViewControllerDelegate> * _delegate;
    UIButton * _deleteBankInformationButton;
    PKPeerPaymentFindBankAccountInformationFooterView * _footerView;
    bool  _hasInteractedWithCell;
    bool  _isEditingBankInformation;
    unsigned long long  _state;
    PKTableHeaderView * _tableHeader;
    NSMutableDictionary * _userEnteredValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentAddBankAcountInformationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bankInformationTextForRow:(unsigned long long)arg1;
- (bool)_cellValuesAreValid;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 minDigits:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 numberOfDigits:(unsigned long long)arg2;
- (void)_deleteBankInformation;
- (id)_footerView;
- (id)_headerSubTitle;
- (id)_headerTitle;
- (void)_hideHeaderActivitySpinner;
- (bool)_isAccountNumberCellValid;
- (bool)_isCellValidAtRow:(unsigned long long)arg1;
- (bool)_isRoutingNumberCellValid;
- (unsigned long long)_maxTextLengthForRow:(unsigned long long)arg1;
- (unsigned long long)_minTextLengthForRow:(unsigned long long)arg1;
- (double)_minimumRequiredWidthForCellText:(id)arg1 withFont:(id)arg2;
- (id)_placeholderTextForRow:(unsigned long long)arg1;
- (void)_reloadTableSection;
- (unsigned long long)_rowWithTextField:(id)arg1;
- (void)_setIdleTimerDisabled:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setNavigationBarItemsHidden:(bool)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)_setTableFooterView;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setText:(id)arg1 forForCellAtRow:(unsigned long long)arg2;
- (void)_showHeaderActivitySpinner;
- (void)_showHowToFindAccountInformationViewController:(id)arg1;
- (id)_textForRow:(unsigned long long)arg1;
- (void)_updateBankAccountInformationWithValues:(id)arg1 completion:(id /* block */)arg2;
- (id)_userEnteredTextForCellAtRow:(unsigned long long)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3;
- (id)initWithState:(unsigned long long)arg1 delegate:(id)arg2 bankInformation:(id)arg3 accountCountryCode:(id)arg4;
- (void)loadView;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pkui_navigationBarTintColor;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
