/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsDatePicker : UIDatePicker {
    id /* block */  _dateUpdateHandler;
}

@property (nonatomic, copy) id /* block */ dateUpdateHandler;

- (void).cxx_destruct;
- (void)_dateDidChange:(id)arg1;
- (id /* block */)dateUpdateHandler;
- (void)forceUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDateUpdateHandler:(id /* block */)arg1;

@end
