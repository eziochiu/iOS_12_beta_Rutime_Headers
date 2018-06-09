/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDatePickerCell : UITableViewCell {
    UIDatePicker * _datePicker;
    <HUDatePickerCellDelegate> * _delegate;
}

@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic) <HUDatePickerCellDelegate> *delegate;
@property (nonatomic, retain) NSDateComponents *timeComponents;

- (void).cxx_destruct;
- (void)_valueChanged:(id)arg1;
- (id)datePicker;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDatePicker:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimeComponents:(id)arg1;
- (id)timeComponents;

@end
