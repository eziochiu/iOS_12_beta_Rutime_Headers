/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell {
    UIDatePicker * _datePicker;
    UIButton * _neverButton;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (nonatomic, readonly) UIButton *neverButton;

- (void).cxx_destruct;
- (id)date;
- (id)datePicker;
- (id)init;
- (void)layoutSubviews;
- (id)neverButton;
- (void)setDate:(id)arg1;

@end
