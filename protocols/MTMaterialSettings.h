/* made by EzioChiu.
 */

@protocol MTMaterialSettings <NSObject>

@required

+ (id)sharedMaterialSettings;

- (double)blurRadius;
- (double)brightness;
- (double)luminanceAlpha;
- (double)saturation;
- (void)setBlurRadius:(double)arg1;
- (void)setBrightness:(double)arg1;
- (void)setLuminanceAlpha:(double)arg1;
- (void)setSaturation:(double)arg1;
- (void)setTintAlpha:(double)arg1;
- (void)setUsesLuminanceMap:(bool)arg1;
- (double)tintAlpha;
- (void)updateWithSettingsFromArchive:(NSDictionary *)arg1;
- (bool)usesLuminanceMap;
- (MTVibrantStylingProvider *)vibrantStylingProvider;

@end