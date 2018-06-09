/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIStackView {
    HKSelectedRangeLabel * _keyLabel;
    UIColor * _textColor;
    HKSelectedRangeLabel * _valueLabel;
}

@property (nonatomic, readonly) HKSelectedRangeLabel *keyLabel;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) HKSelectedRangeLabel *valueLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyLabel;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (id)valueLabel;

@end
