/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationShortLookView : PLTitledPlatterView <NCAuxiliaryOptionsSupporting, NCNotificationStaticContentAccepting> {
    NCAuxiliaryOptionsView * _auxiliaryOptionsView;
    bool  _banner;
    bool  _defersAnimatedUpdates;
    BSUIFontProvider * _fontProvider;
    NCNotificationGrabberView * _grabberView;
    NCNotificationContentView * _notificationContentView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool auxiliaryOptionsVisible;
@property (getter=_isBanner, setter=_setBanner:, nonatomic) bool banner;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defersAnimatedUpdates;
@property (readonly, copy) NSString *description;
@property (getter=_fontProvider, setter=_setFontProvider:, nonatomic, retain) BSUIFontProvider *fontProvider;
@property (getter=_grabberView, nonatomic, readonly) NCNotificationGrabberView *grabberView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *iconButtons;
@property (nonatomic, copy) NSArray *icons;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (getter=_notificationContentView, nonatomic, readonly) NCNotificationContentView *notificationContentView;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (nonatomic, readonly) NSArray *optionButtons;
@property (nonatomic, copy) NSString *optionsSummaryText;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *summaryText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

+ (unsigned long long)_optionsForMainOverlayForRecipe:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureAuxiliaryOptionsViewIfNecessary;
- (void)_configureCustomContentView;
- (void)_configureHeaderContentView;
- (void)_configureNotificationContentViewIfNecessary;
- (id)_fontProvider;
- (id)_grabberView;
- (bool)_isBanner;
- (void)_layoutAuxiliaryOptionsView;
- (void)_layoutGrabber;
- (void)_layoutMainOverlay;
- (void)_layoutNotificationContentView;
- (id)_newNotificationContentView;
- (id)_notificationContentView;
- (unsigned long long)_optionsForMainOverlay;
- (void)_setBanner:(bool)arg1;
- (void)_setFontProvider:(id)arg1;
- (bool)_shouldShowGrabber;
- (id)accessoryView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (bool)auxiliaryOptionsVisible;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)defersAnimatedUpdates;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (id)interfaceActions;
- (void)layoutSubviews;
- (unsigned long long)messageNumberOfLines;
- (unsigned long long)numberOfOptionButtons;
- (id)optionButtons;
- (id)optionsSummaryText;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setAccessoryView:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDefersAnimatedUpdates:(bool)arg1;
- (void)setInterfaceActions:(id)arg1;
- (void)setMessageNumberOfLines:(unsigned long long)arg1;
- (void)setNumberOfOptionButtons:(unsigned long long)arg1;
- (void)setOptionsSummaryText:(id)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)summaryText;
- (id)thumbnail;

@end
