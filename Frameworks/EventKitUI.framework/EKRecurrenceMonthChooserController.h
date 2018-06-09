/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {
    NSMutableSet * _monthsOfTheYearSet;
    bool  _prohibitsMultipleMonthsInYearlyRecurrence;
}

@property (nonatomic, retain) NSArray *monthsOfTheYear;
@property (nonatomic) bool prohibitsMultipleMonthsInYearlyRecurrence;

- (void).cxx_destruct;
- (id)cellLabels;
- (long long)frequency;
- (long long)gridViewType;
- (id)initWithDate:(id)arg1;
- (id)monthsOfTheYear;
- (void)prepareForDisplay;
- (bool)prohibitsMultipleMonthsInYearlyRecurrence;
- (void)refreshCells;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setProhibitsMultipleMonthsInYearlyRecurrence:(bool)arg1;
- (id)tableViewCell;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end
