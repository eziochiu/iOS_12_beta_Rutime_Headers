/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAlarmEditView : UIView {
    UITableView * _settingsTable;
    UIDatePicker * _timePicker;
}

@property (nonatomic, readonly) UITableView *settingsTable;
@property (nonatomic, readonly) UIDatePicker *timePicker;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)settingsTable;
- (id)timePicker;

@end
