/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDeviceBedtimeListController : PSListController <STUIDateTimePickerCellDelegate> {
    STDeviceBedtime * _bedtime;
    <STDeviceBedtimeListControllerDelegate> * _delegate;
    PSSpecifier * _deviceBedtimeSpecifier;
    PSSpecifier * _endTimePickerSpecifier;
    PSSpecifier * _endTimeSpecifier;
    PSSpecifier * _informativeTextGroupSpecifier;
    PSSpecifier * _selectedTimeSpecifier;
    PSSpecifier * _startTimePickerSpecifier;
    PSSpecifier * _startTimeSpecifier;
    PSSpecifier * _timeGroupSpecifier;
}

@property (nonatomic, copy) STDeviceBedtime *bedtime;
@property (nonatomic) <STDeviceBedtimeListControllerDelegate> *delegate;
@property (nonatomic, retain) PSSpecifier *deviceBedtimeSpecifier;
@property (nonatomic, retain) PSSpecifier *endTimePickerSpecifier;
@property (nonatomic, retain) PSSpecifier *endTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *informativeTextGroupSpecifier;
@property (nonatomic, retain) PSSpecifier *selectedTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *startTimePickerSpecifier;
@property (nonatomic, retain) PSSpecifier *startTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *timeGroupSpecifier;

- (void).cxx_destruct;
- (id)bedtime;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (id)delegate;
- (id)deviceBedtimeEnabled:(id)arg1;
- (id)deviceBedtimeSpecifier;
- (id)emptyGroupSpecifier;
- (id)endTime;
- (id)endTimePickerSpecifier;
- (id)endTimeSpecifier;
- (id)informativeTextGroupSpecifier;
- (id)init;
- (id)selectedTimeSpecifier;
- (void)setBedtime:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDeviceBedtimeSpecifier:(id)arg1;
- (void)setEndTimePickerSpecifier:(id)arg1;
- (void)setEndTimeSpecifier:(id)arg1;
- (void)setInformativeTextGroupSpecifier:(id)arg1;
- (void)setSelectedTimeSpecifier:(id)arg1;
- (void)setStartTimePickerSpecifier:(id)arg1;
- (void)setStartTimeSpecifier:(id)arg1;
- (void)setTimeGroupSpecifier:(id)arg1;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (id)specifiers;
- (id)startTime;
- (id)startTimePickerSpecifier;
- (id)startTimeSpecifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)timeGroupSpecifier;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
