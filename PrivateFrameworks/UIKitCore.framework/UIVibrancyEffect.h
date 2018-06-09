/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIVibrancyEffect : UIVisualEffect {
    _UIVibrancyEffectImpl * _impl;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_darkVibrantEffectWithLightenColor:(id)arg1 dodgeColor:(id)arg2 compositingColor:(id)arg3;
+ (id)_lightVibrantEffectWithDarkenColor:(id)arg1 burnColor:(id)arg2 compositingColor:(id)arg3;
+ (id)_vibrancyEntryWithType:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 inputReversed:(bool)arg4;
+ (id)darkVibrantEffectWithDodgeColor:(id)arg1 lightenColor:(id)arg2 compositingColor:(id)arg3;
+ (id)effectForBlurEffect:(id)arg1;
+ (id)lightVibrantEffectWithBurnColor:(id)arg1 darkenColor:(id)arg2 compositingColor:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)vibrantEffectWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;

- (void).cxx_destruct;
- (long long)_blurStyle;
- (long long)_expectedUsage;
- (id)_initWithImplementation:(id)arg1;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (bool)_needsUpdateForOption:(id)arg1;
- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (id)_reduceTransparencyEffectConfig;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectConfig;
- (id)effectConfigForOptions:(id)arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

+ (id)notificationCenterVibrancyEffect;
+ (id)widgetPrimaryHighlightVibrancyEffect;
+ (id)widgetPrimaryVibrancyEffect;
+ (id)widgetQuaternaryVibrancyEffect;
+ (id)widgetSecondaryHighlightVibrancyEffect;
+ (id)widgetSecondaryVibrancyEffect;
+ (id)widgetTertiaryVibrancyEffect;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)controlCenterKeyLineOnDarkVibrancyEffect;
+ (id)controlCenterKeyLineOnLightVibrancyEffect;
+ (id)controlCenterPrimaryVibrancyEffect;
+ (id)controlCenterScrollViewDarkeningVibrancyEffect;
+ (id)controlCenterSecondaryVibrancyEffect;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_platterVibrancyEffect;
+ (id)siriui_userUtteranceEditModeVibrancyEffect;

@end
