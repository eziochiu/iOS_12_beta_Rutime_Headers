/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKReportSegmentControl : UIView {
    UIView * _dividerView;
    UIControl * _rightControl;
    UISegmentedControl * _segmentControl;
}

@property (nonatomic, readonly) UIView *dividerView;
@property (nonatomic, readonly) UIControl *rightControl;
@property (nonatomic, readonly) UISegmentedControl *segmentControl;

- (void).cxx_destruct;
- (id)dividerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOpaque;
- (void)layoutSubviews;
- (id)rightControl;
- (id)segmentControl;

@end
