/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationItemButtonView : _UINavigationItemView <UIGestureRecognizerDelegate> {
    unsigned long long  _abbreviatedTitleIndex;
    UIColor * _accessibilityBackgroundTintColor;
    _UIBarButtonItemAppearanceStorage * _appearanceStorage;
    UIImageView * _backgroundImageView;
    bool  _customBackgroundImageChangedToOrFromNil;
    UIImageView * _imageView;
    bool  _pressed;
    long long  _style;
    bool  _wantsBlendModeForAccessibilityBackgrounds;
}

@property (setter=_setAbbreviatedTitleIndex:, nonatomic) unsigned long long _abbreviatedTitleIndex;
@property (setter=_setAccessibilityBackgroundTintColor:, nonatomic, retain) UIColor *_accessibilityBackgroundTintColor;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (setter=_setWantsBlendModeForAccessibilityBackgrounds:, nonatomic) bool _wantsBlendModeForAccessibilityBackgrounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (unsigned long long)_abbreviatedTitleIndex;
- (id)_accessibilityBackgroundTintColor;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (Class)_appearanceGuideClass;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct UIOffset { double x1; double x2; })_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)_backSelectGestureChanged:(id)arg1;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_currentCustomBackgroundNeedsDarkening:(bool*)arg1;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_defaultFont;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_installBackSelectGestureRecognizer;
- (void)_resetRenderingModesForAccessibilityBackgrounds;
- (void)_setAbbreviatedTitleIndex:(unsigned long long)arg1;
- (void)_setAccessibilityBackgroundTintColor:(id)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1;
- (bool)_showsAccessibilityBackgroundWhenEnabled;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (bool)_suppressesBackIndicatorView;
- (id)_tintColor;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (double)_titleYAdjustmentCustomization;
- (void)_uninstallBackSelectGestureRecognizer;
- (bool)_useSilverLookForBarStyle:(long long)arg1;
- (bool)_wantsAccessibilityButtonShapes;
- (bool)_wantsBlendModeForAccessibilityBackgrounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (id)backgroundImageView;
- (bool)canBecomeFocused;
- (bool)customBackgroundImageChangedToOrFromNil;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasCustomBackgroundImage;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pressed;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 initialPress:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
