/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STCustomizeDaysListController : PSListController <STUIDateTimePickerCellDelegate> {
    <STCustomizeDaysListControllerDelegate> * _delegate;
    PSSpecifier * _selectedDaySpecifier;
    NSDictionary * _timeByDay;
    PSSpecifier * _timePickerSpecifier;
    NSArray * _weekdaySymbols;
}

@property (nonatomic) <STCustomizeDaysListControllerDelegate> *delegate;
@property (nonatomic, retain) PSSpecifier *selectedDaySpecifier;
@property (nonatomic, copy) NSDictionary *timeByDay;
@property (nonatomic, retain) PSSpecifier *timePickerSpecifier;
@property (nonatomic, retain) NSArray *weekdaySymbols;

- (void).cxx_destruct;
- (id)budgetTime:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (id)delegate;
- (id)init;
- (id)selectedDaySpecifier;
- (void)setDelegate:(id)arg1;
- (void)setSelectedDaySpecifier:(id)arg1;
- (void)setTimeByDay:(id)arg1;
- (void)setTimePickerSpecifier:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)timeByDay;
- (id)timePickerSpecifier;
- (void)viewWillDisappear:(bool)arg1;
- (id)weekdaySymbols;

@end
