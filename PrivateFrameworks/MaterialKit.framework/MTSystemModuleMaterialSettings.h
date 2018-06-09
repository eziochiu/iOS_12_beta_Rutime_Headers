/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTSystemModuleMaterialSettings : MTSystemMaterialSettings <MTMaterialLuminanceOverlaySettings, MTZooming> {
    double  _auxiliaryOverlayBlurRadius;
    double  _baseOverlayBlurRadius;
    double  _baseOverlayBrightness;
    double  _baseOverlaySaturation;
    double  _baseOverlayTintAlpha;
    double  _primaryOverlayBrightness;
    double  _primaryOverlaySaturation;
    double  _primaryOverlayTintAlpha;
    double  _secondaryOverlayBrightness;
    double  _secondaryOverlaySaturation;
    double  _secondaryOverlayTintAlpha;
}

@property (nonatomic) double auxiliaryOverlayBlurRadius;
@property (nonatomic) double baseOverlayBlurRadius;
@property (nonatomic) double baseOverlayBrightness;
@property (nonatomic, readonly, copy) UIColor *baseOverlayColor;
@property (nonatomic) double baseOverlaySaturation;
@property (nonatomic) double baseOverlayTintAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double primaryOverlayBrightness;
@property (nonatomic) double primaryOverlaySaturation;
@property (nonatomic) double primaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *primaryOverlayTintColor;
@property (nonatomic) double secondaryOverlayBrightness;
@property (nonatomic) double secondaryOverlaySaturation;
@property (nonatomic) double secondaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *secondaryOverlayTintColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double zoom;

+ (id)sharedMaterialSettings;

- (double)auxiliaryOverlayBlurRadius;
- (double)baseOverlayBlurRadius;
- (double)baseOverlayBrightness;
- (id)baseOverlayColor;
- (double)baseOverlaySaturation;
- (double)baseOverlayTintAlpha;
- (double)primaryOverlayBrightness;
- (double)primaryOverlaySaturation;
- (double)primaryOverlayTintAlpha;
- (id)primaryOverlayTintColor;
- (double)secondaryOverlayBrightness;
- (double)secondaryOverlaySaturation;
- (double)secondaryOverlayTintAlpha;
- (id)secondaryOverlayTintColor;
- (void)setAuxiliaryOverlayBlurRadius:(double)arg1;
- (void)setBaseOverlayBlurRadius:(double)arg1;
- (void)setBaseOverlayBrightness:(double)arg1;
- (void)setBaseOverlaySaturation:(double)arg1;
- (void)setBaseOverlayTintAlpha:(double)arg1;
- (void)setDefaultValues;
- (void)setPrimaryOverlayBrightness:(double)arg1;
- (void)setPrimaryOverlaySaturation:(double)arg1;
- (void)setPrimaryOverlayTintAlpha:(double)arg1;
- (void)setSecondaryOverlayBrightness:(double)arg1;
- (void)setSecondaryOverlaySaturation:(double)arg1;
- (void)setSecondaryOverlayTintAlpha:(double)arg1;
- (void)setUsesLuminanceMap:(bool)arg1;
- (bool)usesLuminanceMap;
- (Class)vibrantStylingProviderClass;
- (double)zoom;

@end
