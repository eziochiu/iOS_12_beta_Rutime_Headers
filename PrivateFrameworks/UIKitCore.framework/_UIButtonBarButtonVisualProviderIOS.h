/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    <_UIButtonBarAppearanceDelegate><NSObject> * _appearanceDelegate;
    NSLayoutConstraint * _backButtonContentLeadingConstraint;
    NSLayoutConstraint * _backButtonContentTrailingContraint;
    NSLayoutConstraint * _backButtonTitleMaxWidthConstraint;
    UIButton * _backIndicatorButton;
    UIImageView * _backgroundImage;
    NSMutableDictionary * _backgroundImages;
    long long  _barButtonStyle;
    NSMutableArray * _constraints;
    _UIModernBarButton * _imageButton;
    UIImageView * _selectedImage;
    bool  _skipAttributedTitle;
    NSArray * _titleAttributes;
    _UIModernBarButton * _titleButton;
    _UIBackButtonContainerView * _titleContainer;
    NSArray * _titleContent;
    NSMutableDictionary * _titleLookup;
}

@property (nonatomic) bool backButtonMaskEnabled;
@property (nonatomic, readonly) UIImageView *backgroundImageView;
@property (nonatomic, readonly) UIButton *imageButton;
@property (nonatomic, readonly) UIButton *textButton;

- (void).cxx_destruct;
- (void)_addConstraintsForBackgroundImageWithOffset:(double)arg1 isBackButton:(bool)arg2;
- (void)_addHorizontalConstraintsForBackButton:(id)arg1 contentButton:(id)arg2 withOffset:(double)arg3;
- (void)_addHorizontalConstraintsForImageButton:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 paddingEdges:(unsigned long long)arg3 additionalPadding:(double)arg4;
- (void)_addHorizontalConstraintsForTextButton:(id)arg1 withOffset:(double)arg2 additionalPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_addVerticalConstraintsForBackIndicatorInButton:(id)arg1 withOffset:(double)arg2;
- (void)_addVerticalConstraintsForImageButton:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_addVerticalConstraintsForTextButton:(id)arg1 withOffset:(double)arg2;
- (id)_appearanceStorage;
- (struct UIOffset { double x1; double x2; })_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_backIndicatorImageForBarMetrics:(long long)arg1;
- (id)_backIndicatorMask;
- (void)_computeTextAttributesForBarButtonItem:(id)arg1;
- (void)_configureBackButtonButton:(id)arg1;
- (void)_configureBackgroundForButton:(id)arg1 fromBarButtonItem:(id)arg2 isBackButton:(bool)arg3;
- (void)_configureImageBackButtonButton:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_configureImageButton:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 paddingEdges:(unsigned long long)arg3 additionalPadding:(double)arg4;
- (void)_configureImageOrTitleFromBarButtonItem:(id)arg1 forMetrics:(long long)arg2;
- (void)_configureTextBackButtonButton:(id)arg1 withOffset:(struct UIOffset { double x1; double x2; })arg2;
- (void)_configureTextButton:(id)arg1 withOffset:(struct UIOffset { double x1; double x2; })arg2 additionalPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_defaultTitleAttributesForState:(unsigned long long)arg1 style:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsetsForBarButtonItem:(id)arg1 barMetrics:(long long)arg2 isBackButton:(bool)arg3;
- (id)_imageWithActiveStylesFromImage:(id)arg1;
- (id)_imageWithActiveStylesFromImage:(id)arg1 tintColor:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForBarMetrics:(long long)arg1;
- (void)_invalidateTextAttributes;
- (double)_offsetBelowBaselineForBackIndicatorForMetrics:(long long)arg1;
- (double)_offsetFromBackIndicatorToContentButton;
- (void)_removeTitleButton;
- (void)_setTitle:(id)arg1;
- (void)_setupAlternateTitlesFromBarButtonItem:(id)arg1;
- (id)_titleAttributesForState:(unsigned long long)arg1;
- (id)_titleContentForTitle:(id)arg1;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (bool)backButtonConstraintsActive;
- (bool)backButtonMaskEnabled;
- (id)backIndicatorView;
- (id)backgroundImageView;
- (void)button:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(id /* block */)arg2;
- (bool)buttonSelectionState:(id)arg1 forRequestedState:(bool)arg2;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentView;
- (id)imageButton;
- (void)setBackButtonConstraintsActive:(bool)arg1;
- (void)setBackButtonMaskEnabled:(bool)arg1;
- (bool)supportsBackButtons;
- (id)textButton;
- (void)updateButton:(id)arg1 forEnabledState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;

@end
