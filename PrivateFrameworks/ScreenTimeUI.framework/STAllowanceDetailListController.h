/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAllowanceDetailListController : PSListController <STCustomizeDaysListControllerDelegate, STUIDateTimePickerCellDelegate> {
    STAllowance * _allowance;
    PSSpecifier * _appsCategoriesGroupSpecifier;
    PSSpecifier * _customizeDaysSpecifier;
    <STAllowanceDetailListControllerDelegate> * _delegate;
    bool  _didDeleteAllowance;
    bool  _isSetupController;
    PSSpecifier * _selectedTimeSpecifier;
    PSSpecifier * _timeGroupSpecifier;
    PSSpecifier * _timePickerSpecifier;
    PSSpecifier * _timeSpecifier;
}

@property (nonatomic, copy) STAllowance *allowance;
@property (nonatomic, retain) PSSpecifier *appsCategoriesGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *customizeDaysSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STAllowanceDetailListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool didDeleteAllowance;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSetupController;
@property (nonatomic, retain) PSSpecifier *selectedTimeSpecifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSSpecifier *timeGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *timePickerSpecifier;
@property (nonatomic, retain) PSSpecifier *timeSpecifier;

- (void).cxx_destruct;
- (id)allowance;
- (id)appsCategoriesGroupSpecifier;
- (id)budgetTime;
- (id)budgetedItemSpecifiers;
- (void)cancelButtonTapped:(id)arg1;
- (void)confirmDeletion:(id)arg1;
- (void)customizeDaysListController:(id)arg1 didFinishEditingTimeByDay:(id)arg2;
- (id)customizeDaysSpecifier;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (id)delegate;
- (void)deleteAllowance:(id)arg1;
- (bool)didDeleteAllowance;
- (id)emptyGroupSpecifier;
- (bool)hasSetBudgetTime;
- (bool)hasSetBudgetTimeOrCustomSchedule;
- (bool)isSetupController;
- (void)loadView;
- (void)saveButtonTapped:(id)arg1;
- (id)selectedTimeSpecifier;
- (void)setAllowance:(id)arg1;
- (void)setAppsCategoriesGroupSpecifier:(id)arg1;
- (void)setCustomizeDaysSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDeleteAllowance:(bool)arg1;
- (void)setIsSetupController:(bool)arg1;
- (void)setSelectedTimeSpecifier:(id)arg1;
- (void)setTimeGroupSpecifier:(id)arg1;
- (void)setTimePickerSpecifier:(id)arg1;
- (void)setTimeSpecifier:(id)arg1;
- (void)showCustomizeDaysController:(id)arg1;
- (void)showPickerSpecifierForSpecifier:(id)arg1 highlight:(bool)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)timeFooterText;
- (id)timeGroupSpecifier;
- (id)timePickerSpecifier;
- (id)timeSpecifier;
- (void)updateSaveButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
