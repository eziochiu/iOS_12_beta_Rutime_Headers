/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCanvasBackButtonView : UIControl {
    UIImageView * _backButtonView;
    bool  _shouldShowTitlePaddingView;
    UILabel * _titleLabel;
    UIColor * _titleLabelColor;
    UIView * _titlePaddingView;
}

@property (nonatomic, retain) UIImageView *backButtonView;
@property (nonatomic) bool shouldShowTitlePaddingView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIColor *titleLabelColor;
@property (nonatomic, retain) UIView *titlePaddingView;

- (void).cxx_destruct;
- (void)_setVisuallyHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })_titlePaddingViewSizeForTitle;
- (id)backButtonView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showPaddingTitleView:(bool)arg2;
- (void)layoutSubviews;
- (void)setBackButtonTitle:(id)arg1;
- (void)setBackButtonView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldShowTitlePaddingView:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelColor:(id)arg1;
- (void)setTitlePaddingView:(id)arg1;
- (bool)shouldShowTitlePaddingView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (id)titleLabel;
- (id)titleLabelColor;
- (id)titlePaddingView;

@end
