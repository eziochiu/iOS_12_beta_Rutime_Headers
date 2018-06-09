/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUITodayCirclePulseView : UIView {
    HKUITodayCirclePulseBackground * _background;
    UIView * _backgroundContainer;
    double  _circleDiameter;
    CALayer * _dayLabel;
}

@property (nonatomic) double circleDiameter;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (double)circleDiameter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pulse:(id /* block */)arg1;
- (void)setCircleDiameter:(double)arg1;
- (void)setDayLabelContent:(id)arg1;

@end
