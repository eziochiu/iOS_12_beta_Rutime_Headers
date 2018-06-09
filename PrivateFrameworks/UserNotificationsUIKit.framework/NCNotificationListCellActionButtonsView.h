/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCellActionButtonsView : UIView <NCMaterialsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    unsigned long long  _backgroundMaterialOptions;
    UIStackView * _buttonsStackView;
    UIView * _clippingView;
    NCNotificationListCellActionButton * _defaultActionButton;
    _UIStatesFeedbackGenerator * _defaultActionFeedbackGenerator;
    double  _defaultWidth;
    bool  _didPlayHaptic;
    bool  _highlightDefaultActionButton;
    long long  _materialRecipe;
    unsigned long long  _overlayMaterialOptions;
    double  _stretchedWidth;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic) unsigned long long backgroundMaterialOptions;
@property (nonatomic, retain) UIStackView *buttonsStackView;
@property (nonatomic, retain) UIView *clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NCNotificationListCellActionButton *defaultActionButton;
@property (nonatomic, retain) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator;
@property (nonatomic, readonly) double defaultWidth;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPlayHaptic;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightDefaultActionButton;
@property (nonatomic) long long materialRecipe;
@property (nonatomic) unsigned long long overlayMaterialOptions;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) bool shouldPerformDefaultAction;
@property (nonatomic) double stretchedWidth;
@property (readonly) Class superclass;

+ (id)_actionButtonDescriptionsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
+ (id)_openButtonDescriptionForNotificationRequest:(id)arg1 cell:(id)arg2;

- (void).cxx_destruct;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_configureActionButtonsForActionButtonDescriptions:(id)arg1 cell:(id)arg2;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_configureClippingViewIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;
- (void)_configureDefaultWidth;
- (void)_hideNonDefaultActionButtons;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (double)_maxAllowedButtonWidth;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(id /* block */)arg1;
- (void)_revealNonDefaultActionButtons;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)backgroundGroupName;
- (unsigned long long)backgroundMaterialOptions;
- (id)buttonsStackView;
- (id)clippingView;
- (void)configureCellActionButtonsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
- (void)configureOpenActionButtonForNotificationRequest:(id)arg1 cell:(id)arg2;
- (id)defaultActionButton;
- (id)defaultActionFeedbackGenerator;
- (double)defaultWidth;
- (bool)didPlayHaptic;
- (bool)highlightDefaultActionButton;
- (void)layoutSubviews;
- (long long)materialRecipe;
- (unsigned long long)overlayMaterialOptions;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setBackgroundMaterialOptions:(unsigned long long)arg1;
- (void)setButtonsStackView:(id)arg1;
- (void)setClippingView:(id)arg1;
- (void)setDefaultActionButton:(id)arg1;
- (void)setDefaultActionFeedbackGenerator:(id)arg1;
- (void)setDidPlayHaptic:(bool)arg1;
- (void)setHighlightDefaultActionButton:(bool)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setOverlayMaterialOptions:(unsigned long long)arg1;
- (void)setStretchedWidth:(double)arg1;
- (bool)shouldPerformDefaultAction;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)stretchedWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
