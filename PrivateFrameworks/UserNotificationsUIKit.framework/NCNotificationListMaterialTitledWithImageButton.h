/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListMaterialTitledWithImageButton : NCNotificationListMaterialButton {
    bool  _adjustsFontForContentSizeCategory;
    unsigned long long  _buttonOption;
    BSUIFontProvider * _fontProvider;
    long long  _fontStyle;
    UIImage * _image;
    UIImageView * _imageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumEdgeInsets;
    NSString * _preferredContentSizeCategory;
    NSString * _textStyle;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) unsigned long long buttonOption;
@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) BSUIFontProvider *fontProvider;
@property (nonatomic) long long fontStyle;
@property (nonatomic, retain) UIImage *image;
@property (getter=isImageInButtonOption, nonatomic, readonly) bool imageInButtonOption;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumEdgeInsets;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic, copy) NSString *title;
@property (getter=isTitleInButtonOption, nonatomic, readonly) bool titleInButtonOption;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_configureImageViewEffects;
- (void)_configureImageViewIfNecessary;
- (void)_configureTitleLabelEffects;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (struct CGSize { double x1; double x2; })_imageViewSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutImageView;
- (void)_layoutTitleLabel;
- (void)_setFontProvider:(id)arg1;
- (double)_titleImageSpacing;
- (struct CGSize { double x1; double x2; })_titleLabelSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateTitleLabelFont;
- (void)_updateViewAlphas;
- (void)_updateViewsForMaterialChanges;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (unsigned long long)buttonOption;
- (long long)fontStyle;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 title:(id)arg3 image:(id)arg4 buttonOption:(unsigned long long)arg5 textStyle:(id)arg6 fontStyle:(long long)arg7 minimumEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg8;
- (bool)isImageInButtonOption;
- (bool)isTitleInButtonOption;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumEdgeInsets;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setButtonOption:(unsigned long long)arg1;
- (void)setButtonOption:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setFontStyle:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMinimumEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textStyle;
- (id)title;
- (id)titleLabel;

@end
