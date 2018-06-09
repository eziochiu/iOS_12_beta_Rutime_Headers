/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListMaterialTitledButton : NCNotificationListMaterialButton {
    bool  _adjustsFontForContentSizeCategory;
    BSUIFontProvider * _fontProvider;
    double  _minimumSidePadding;
    NSString * _preferredContentSizeCategory;
    NSString * _textStyle;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) BSUIFontProvider *fontProvider;
@property (nonatomic) double minimumSidePadding;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_configureTitleLabelEffects;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (void)_layoutTitleLabel;
- (void)_setFontProvider:(id)arg1;
- (void)_updateTitleLabelFont;
- (void)_updateViewsForMaterialChanges;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 title:(id)arg3 textStyle:(id)arg4 minimumSidePadding:(double)arg5;
- (void)layoutSubviews;
- (double)minimumSidePadding;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setMinimumSidePadding:(double)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textStyle;
- (id)title;
- (id)titleLabel;

@end
