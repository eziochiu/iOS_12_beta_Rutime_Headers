/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTSystemPlatterMaterialSettings : MTSystemMaterialSettings <MTMaterialOverlaySettings, MTMaterialSettings_v2, _MTMaterialPerformanceConfiguring> {
    double  _primaryOverlayTintAlpha;
    double  _secondaryOverlayTintAlpha;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminanceAlpha;
@property (nonatomic) double primaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *primaryOverlayTintColor;
@property (nonatomic) double saturation;
@property (nonatomic) double secondaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *secondaryOverlayTintColor;
@property (readonly) Class superclass;
@property (nonatomic) double tintAlpha;
@property (nonatomic, readonly, copy) UIColor *tintColor;
@property (nonatomic) bool usesLuminanceMap;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;

+ (id)sharedMaterialSettings;

- (double)_backdropScaleForOptions:(unsigned long long)arg1;
- (id)_blurInputQualityForOptions:(unsigned long long)arg1;
- (double)primaryOverlayTintAlpha;
- (id)primaryOverlayTintColor;
- (double)secondaryOverlayTintAlpha;
- (id)secondaryOverlayTintColor;
- (void)setPrimaryOverlayTintAlpha:(double)arg1;
- (void)setSecondaryOverlayTintAlpha:(double)arg1;
- (id)tintColor;
- (Class)vibrantStylingProviderClass;

@end
