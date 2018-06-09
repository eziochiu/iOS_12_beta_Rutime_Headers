/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {
    <EKRecurrenceChooserControllerDelegate> * _delegate;
    EKRecurrenceMonthDayChooserController * _monthDayChooser;
    UITableViewCell * _onEachCell;
    UITableViewCell * _onTheCell;
    EKRecurrenceOrdinalChooserController * _ordinalChooser;
    long long  _selectedRow;
}

@property (nonatomic) bool prohibitsMultipleDaysInMonthlyRecurrence;

- (void).cxx_destruct;
- (id)_currentChooser;
- (void)_selectRow:(long long)arg1;
- (id)backgroundColor;
- (id)cellForRow:(long long)arg1;
- (bool)drawBackgroundForRow:(long long)arg1;
- (long long)frequency;
- (double)heightForRow:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (long long)numberOfRows;
- (bool)prohibitsMultipleDaysInMonthlyRecurrence;
- (void)rowTapped:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(bool)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
