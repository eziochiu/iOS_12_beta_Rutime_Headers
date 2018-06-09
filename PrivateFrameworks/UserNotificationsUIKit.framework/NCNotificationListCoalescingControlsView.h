/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCoalescingControlsView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    NCNotificationListMaterialTitledWithImageButton * _clearButton;
    <NCNotificationListCoalescingControlsViewDelegate> * _delegate;
    double  _effectiveButtonHeight;
    double  _effectiveHorizontalPadding;
    double  _effectiveVerticalPadding;
    _UILegibilitySettings * _legibilitySettings;
    NCNotificationListMaterialTitledWithImageButton * _restackButton;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, retain) NCNotificationListMaterialTitledWithImageButton *clearButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListCoalescingControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_effectiveButtonHeight, nonatomic) double effectiveButtonHeight;
@property (getter=_effectiveHorizontalPadding, nonatomic) double effectiveHorizontalPadding;
@property (getter=_effectiveVerticalPadding, nonatomic) double effectiveVerticalPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, retain) NCNotificationListMaterialTitledWithImageButton *restackButton;
@property (readonly) Class superclass;

+ (id)labelTextStyle;

- (void).cxx_destruct;
- (void)_animateClearButtonStateChange;
- (void)_clearButtonAction:(id)arg1;
- (id)_clearButtonTitle;
- (void)_collapseClearButtonAnimated:(bool)arg1;
- (void)_configureClearButtonIfNecessary;
- (void)_configureMaterialButton:(id)arg1 withAction:(SEL)arg2;
- (void)_configureRestackButtonIfNecessary;
- (double)_cornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsets;
- (double)_effectiveButtonHeight;
- (double)_effectiveHorizontalPadding;
- (double)_effectiveValue:(double)arg1;
- (double)_effectiveVerticalPadding;
- (void)_expandClearButtonAnimated:(bool)arg1;
- (double)_imageDimension;
- (bool)_isClearButtonExpanded;
- (void)_layoutClearButton;
- (void)_layoutRestackButton;
- (long long)_materialRecipe;
- (id)_newTitledWithImageButtonForTitle:(id)arg1 image:(id)arg2 buttonOption:(unsigned long long)arg3;
- (void)_restackButtonAction:(id)arg1;
- (id)_restackButtonTitle;
- (void)_updateMaterialsView:(id)arg1 forLegiblitySettings:(id)arg2;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)backgroundGroupName;
- (id)clearButton;
- (id)delegate;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (id)restackButton;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setClearButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectiveButtonHeight:(double)arg1;
- (void)setEffectiveHorizontalPadding:(double)arg1;
- (void)setEffectiveVerticalPadding:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRestackButton:(id)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
