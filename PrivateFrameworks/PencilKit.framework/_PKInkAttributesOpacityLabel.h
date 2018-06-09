/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkAttributesOpacityLabel : UIView {
    double  _opacityValue;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}

@property (nonatomic) double opacityValue;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRTLLanguage;
- (void)layoutSubviews;
- (double)opacityValue;
- (void)setOpacityValue:(double)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)valueLabel;

@end
