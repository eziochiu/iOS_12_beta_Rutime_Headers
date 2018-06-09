/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPasswordStrengthIndicatorView : UIView {
    double  _strength;
    UIView * _strengthIndicator;
}

@property (nonatomic) double strength;

- (void).cxx_destruct;
- (id)_colorForStrengthIndicator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForStrengthIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStrength:(double)arg1;
- (void)setStrength:(double)arg1 animated:(bool)arg2;
- (double)strength;

@end
