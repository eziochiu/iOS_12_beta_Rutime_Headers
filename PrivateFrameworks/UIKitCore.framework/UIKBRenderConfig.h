/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBRenderConfig : NSObject <NSCopying> {
    double  _blurRadius;
    double  _blurSaturation;
    long long  _forceQuality;
    double  _keycapOpacity;
    bool  _lightKeyboard;
    double  _lightKeycapOpacity;
    bool  _useEmojiStyles;
}

@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, readonly) long long blurEffectStyle;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurSaturation;
@property (nonatomic) long long forceQuality;
@property (nonatomic) double keycapOpacity;
@property (nonatomic) bool lightKeyboard;
@property (nonatomic) double lightKeycapOpacity;
@property (nonatomic, readonly) bool whiteText;

+ (long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2;
+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (id)defaultEmojiConfig;
+ (id)lowQualityDarkConfig;

- (long long)backdropStyle;
- (long long)blurEffectStyle;
- (double)blurRadius;
- (double)blurSaturation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)forceQuality;
- (bool)isEqual:(id)arg1;
- (double)keycapOpacity;
- (bool)lightKeyboard;
- (double)lightKeycapOpacity;
- (void)setBlurRadius:(double)arg1;
- (void)setBlurSaturation:(double)arg1;
- (void)setForceQuality:(long long)arg1;
- (void)setKeycapOpacity:(double)arg1;
- (void)setLightKeyboard:(bool)arg1;
- (void)setLightKeycapOpacity:(double)arg1;
- (bool)whiteText;

@end
