/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBarBackground : UIView {
    UIVisualEffectView * _backgroundEffectView;
    NSArray * _backgroundEffects;
    UIImage * _backgroundImage;
    UIImageView * _backgroundImageView;
    UIColor * _backgroundTintColor;
    UIView * _backgroundTopInsetView;
    UIView * _customBackgroundView;
    bool  _disableTinting;
    UIColor * _shadowColor;
    double  _shadowHeight;
    UIImage * _shadowImage;
    int  _shadowPosition;
    UIImageView * _shadowView;
    double  _topInset;
    long long  _translucence;
}

@property (nonatomic, readonly) NSArray *backgroundEffects;
@property (nonatomic, retain) UIView *customBackgroundView;
@property (nonatomic) bool disableBlur;
@property (nonatomic) bool disableTinting;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, readonly) bool hasBackgroundEffect;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, readonly) UIImage *shim_shadowImage;
@property (nonatomic, readonly) UIImageView *shim_shadowView;
@property (nonatomic) double topInset;

- (void).cxx_destruct;
- (id)_blurWithStyle:(long long)arg1 tint:(id)arg2;
- (id)_colorForStyle:(long long)arg1;
- (id)_encodableSubviews;
- (id)backgroundEffects;
- (void)cleanupBackgroundViews;
- (void)configureAsTransperant;
- (void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(bool)arg3;
- (void)configureColoredShadow:(id)arg1 pixelHeight:(double)arg2 topShadow:(bool)arg3;
- (void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(bool)arg3;
- (void)configureImage:(id)arg1 forceOpaque:(bool)arg2 backgroundTintColor:(id)arg3;
- (void)configureImage:(id)arg1 forceOpaque:(bool)arg2 barStyle:(long long)arg3;
- (void)configureImage:(id)arg1 forceTranslucent:(bool)arg2;
- (void)configureShadowImage:(id)arg1 topShadow:(bool)arg2;
- (void)configureWithEffects:(id)arg1;
- (void)configureWithoutShadow;
- (id)customBackgroundView;
- (bool)disableBlur;
- (bool)disableTinting;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (bool)hasBackgroundEffect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareBackgroundViews;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setDisableBlur:(bool)arg1;
- (void)setDisableTinting:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setTopInset:(double)arg1;
- (double)shadowAlpha;
- (id)shim_shadowImage;
- (id)shim_shadowView;
- (double)topInset;
- (void)transitionBackgroundViews;
- (void)updateBackground;

@end
