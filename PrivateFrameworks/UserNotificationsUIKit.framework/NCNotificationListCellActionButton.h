/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCellActionButton : UIControl <NCMaterialsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    UIView * _backgroundHighlightView;
    unsigned long long  _backgroundMaterialOptions;
    MTMaterialView * _backgroundOverlayView;
    MTMaterialView * _backgroundView;
    BSUIFontProvider * _fontProvider;
    long long  _materialRecipe;
    NCNotificationAction * _notificationAction;
    unsigned long long  _overlayMaterialOptions;
    NSString * _preferredContentSizeCategory;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, retain) UIView *backgroundHighlightView;
@property (nonatomic) unsigned long long backgroundMaterialOptions;
@property (nonatomic, retain) MTMaterialView *backgroundOverlayView;
@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) BSUIFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long materialRecipe;
@property (nonatomic, retain) NCNotificationAction *notificationAction;
@property (nonatomic) unsigned long long overlayMaterialOptions;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_configureBackgroundHighlightViewIfNecessary;
- (void)_configureBackgroundOverlayViewIfNecessary;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureTitleLabelEffects;
- (void)_configureTitleLabelIfNecessary;
- (id)_fontProvider;
- (void)_highlightButton:(id)arg1;
- (void)_layoutBackgroundHighlightView;
- (void)_layoutBackgroundOverlayView;
- (void)_layoutBackgroundView;
- (void)_layoutTitleLabel;
- (void)_setFontProvider:(id)arg1;
- (void)_unHighlightButton:(id)arg1;
- (void)_updateTitleLabelFont;
- (long long)_wordCountForText:(id)arg1;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)backgroundGroupName;
- (id)backgroundHighlightView;
- (unsigned long long)backgroundMaterialOptions;
- (id)backgroundOverlayView;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)materialRecipe;
- (id)notificationAction;
- (unsigned long long)overlayMaterialOptions;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setBackgroundHighlightView:(id)arg1;
- (void)setBackgroundMaterialOptions:(unsigned long long)arg1;
- (void)setBackgroundOverlayView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setNotificationAction:(id)arg1;
- (void)setOverlayMaterialOptions:(unsigned long long)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
