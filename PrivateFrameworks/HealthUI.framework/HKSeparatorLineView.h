/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSeparatorLineView : UIView {
    UIColor * _color;
    long long  _dashStyle;
    double  _leadingMargin;
    double  _separatorThickness;
    double  _trailingMargin;
}

@property (nonatomic, copy) UIColor *color;
@property (nonatomic) long long dashStyle;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double separatorThickness;
@property (nonatomic) double trailingMargin;

- (void).cxx_destruct;
- (void)_applyStyleToContext:(struct CGContext { }*)arg1;
- (bool)_isVertical;
- (id)color;
- (long long)dashStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOpaque;
- (double)leadingMargin;
- (double)separatorThickness;
- (void)setColor:(id)arg1;
- (void)setDashStyle:(long long)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setSeparatorThickness:(double)arg1;
- (void)setTrailingMargin:(double)arg1;
- (double)trailingMargin;

@end
