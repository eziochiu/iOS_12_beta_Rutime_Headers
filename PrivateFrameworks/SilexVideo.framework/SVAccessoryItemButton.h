/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVAccessoryItemButton : SVButton {
    NSString * _subtitle;
    SVAutoLayoutLabel * _subtitleLabel;
    NSString * _title;
    SVAutoLayoutLabel * _titleLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) SVAutoLayoutLabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) SVAutoLayoutLabel *titleLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)preferredContentSizeCategoryDidChange:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 animated:(bool)arg2;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateFontScale;

@end
