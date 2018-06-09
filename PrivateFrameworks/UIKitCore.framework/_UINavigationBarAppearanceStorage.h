/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {
    NSString * _backdropViewGroupName;
    bool  _deferShadowToSearchBar;
    long long  activeBarMetrics;
    UIImage * backIndicatorImage;
    NSNumber * backIndicatorLeftMargin;
    UIImage * backIndicatorTransitionMaskImage;
    long long  barMetrics;
    _UIBarButtonItemAppearanceStorage * buttonAppearanceStorage;
    long long  defaultBarMetrics;
    bool  hidesShadow;
    bool  reversesShadowOffset;
    UIImage * shadowImage;
    NSDictionary * textAttributes;
    NSMutableDictionary * titleVerticalAdjustmentsForBarMetrics;
}

@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
@property (nonatomic) long long activeBarMetrics;
@property (nonatomic, retain) UIImage *backIndicatorImage;
@property (nonatomic, retain) NSNumber *backIndicatorLeftMargin;
@property (nonatomic, retain) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, retain) NSString *backdropViewGroupName;
@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property (nonatomic) long long defaultBarMetrics;
@property (nonatomic) bool deferShadowToSearchBar;
@property (nonatomic) bool hidesShadow;
@property (nonatomic, readonly) UIImage *miniBackgroundImage;
@property (nonatomic, readonly) UIImage *miniPromptBackgroundImage;
@property (nonatomic, readonly) UIImage *promptBackgroundImage;
@property (nonatomic) bool reversesShadowOffset;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, copy) NSDictionary *textAttributes;

+ (long long)typicalBarPosition;

- (void).cxx_destruct;
- (id)_barButtonAppearanceStorage;
- (long long)activeBarMetrics;
- (id)backIndicatorImage;
- (id)backIndicatorLeftMargin;
- (id)backIndicatorTransitionMaskImage;
- (id)backdropViewGroupName;
- (id)backgroundImage;
- (id)barButtonAppearanceStorage;
- (long long)defaultBarMetrics;
- (bool)deferShadowToSearchBar;
- (bool)hidesShadow;
- (id)miniBackgroundImage;
- (id)miniPromptBackgroundImage;
- (id)promptBackgroundImage;
- (id)representativeImageForIdiom:(long long)arg1;
- (bool)reversesShadowOffset;
- (void)setActiveBarMetrics:(long long)arg1;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBackIndicatorLeftMargin:(id)arg1;
- (void)setBackIndicatorTransitionMaskImage:(id)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setDefaultBarMetrics:(long long)arg1;
- (void)setDeferShadowToSearchBar:(bool)arg1;
- (void)setHidesShadow:(bool)arg1;
- (void)setReversesShadowOffset:(bool)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)shadowImage;
- (id)textAttributes;
- (double)titleVerticalAdjustmentForBarMetrics:(long long)arg1;

@end
