/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAuxiliaryOptionsView : UIView <NCAuxiliaryOptionsSupporting, NCMaterialsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    bool  _auxiliaryOptionsVisible;
    double  _cachedSummaryLabelHeight;
    unsigned long long  _cachedSummaryLabelNumberOfLines;
    NSStringDrawingContext * _drawingContext;
    BSUIFontProvider * _fontProvider;
    unsigned long long  _materialOptions;
    long long  _materialRecipe;
    NSArray * _optionButtons;
    UILabel * _optionsSummaryLabel;
    double  _widthForCachedLayoutInfo;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool auxiliaryOptionsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BSUIFontProvider *fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long materialOptions;
@property (nonatomic, readonly) long long materialRecipe;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (nonatomic, readonly) NSArray *optionButtons;
@property (nonatomic, copy) NSString *optionsSummaryText;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculateOptionsSummaryLabelLayoutInfoForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_configureOptionsButtonsWithCount:(unsigned long long)arg1;
- (void)_configureOptionsSummaryTextLabelIfNecessary;
- (void)_layoutOptionsButtons;
- (void)_layoutOptionsSummaryTextLabel;
- (id)_newOptionsButton;
- (struct CGSize { double x1; double x2; })_optionsSummaryLabelSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)_preferredFontForOptionButton;
- (id)_preferredFontForOptionsSummaryTextLabel;
- (double)_summaryLabelHeightForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)_summaryLabelNumberOfLinesForBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateTextAttributesForOptionButton:(id)arg1;
- (void)_updateTextAttributesForOptionsSummaryLabel;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (bool)auxiliaryOptionsVisible;
- (id)fontProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)layoutSubviews;
- (unsigned long long)materialOptions;
- (long long)materialRecipe;
- (void)nc_performDeferredActionsIfNeeded;
- (unsigned long long)numberOfOptionButtons;
- (id)optionButtons;
- (id)optionsSummaryText;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;
- (void)setFontProvider:(id)arg1;
- (void)setNumberOfOptionButtons:(unsigned long long)arg1;
- (void)setOptionsSummaryText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
