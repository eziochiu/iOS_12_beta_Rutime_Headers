/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl {
    UIVibrancyEffect * _effect;
    bool  _invertAutomaticStyle;
    long long  _style;
}

@property (nonatomic) UIVibrancyEffect *effect;

- (bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)appendDescriptionTo:(id)arg1;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(bool)arg2;
- (bool)invertAutomaticStyle;
- (void)setEffect:(id)arg1;
- (long long)style;

@end