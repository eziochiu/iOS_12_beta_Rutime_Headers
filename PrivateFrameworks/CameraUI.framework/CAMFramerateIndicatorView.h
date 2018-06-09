/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFramerateIndicatorView : UIView {
    UIImageView * __borderImageView;
    UILabel * __label;
    long long  _layoutStyle;
    long long  _style;
}

@property (nonatomic, readonly) UIImageView *_borderImageView;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)_borderImageView;
- (void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1;
- (long long)_framesPerSecond;
- (id)_label;
- (void)_updateAppearance;
- (void)_updateForAppearanceChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)setLayoutStyle:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end