/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNavigationBarTitleContainerView : UIView {
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) double titleAlpha;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setTitleAlpha:(double)arg1;
- (void)setTitleTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (double)titleAlpha;
- (id)titleTextColor;
- (id)viewForBaselineLayout;

@end
