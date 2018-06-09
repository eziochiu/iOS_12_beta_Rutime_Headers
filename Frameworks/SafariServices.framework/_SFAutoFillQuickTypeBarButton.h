/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillQuickTypeBarButton : UIButton {
    long long  _barSizeClass;
    UILayoutGuide * _contentLayoutGuide;
    NSMutableArray * _dynamicConstraints;
    UIView * _highlightBackgroundView;
    UIView * _leadingDividerView;
    UIView * _trailingDividerView;
}

@property (nonatomic) long long barSizeClass;
@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;
@property (nonatomic) UIView *leadingDividerView;
@property (nonatomic) UIView *trailingDividerView;

- (void).cxx_destruct;
- (id)_constraintsMatchingFrameOfView:(id)arg1 withFrameOfView:(id)arg2 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (long long)barSizeClass;
- (id)contentLayoutGuide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leadingDividerView;
- (void)setBarSizeClass:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLeadingDividerView:(id)arg1;
- (void)setTrailingDividerView:(id)arg1;
- (id)trailingDividerView;
- (void)updateConstraints;

@end
