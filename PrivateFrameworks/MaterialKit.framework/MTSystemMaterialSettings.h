/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTSystemMaterialSettings : _UISettings <MTMaterialSettings, MTMaterialSettingsObservable> {
    double  _blurRadius;
    double  _brightness;
    double  _luminanceAlpha;
    double  _saturation;
    double  _tintAlpha;
    bool  _usesLuminanceMap;
    MTVibrantStylingProvider * _vibrantStylingProvider;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminanceAlpha;
@property (nonatomic) double saturation;
@property (readonly) Class superclass;
@property (nonatomic) double tintAlpha;
@property (nonatomic) bool usesLuminanceMap;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;

+ (id)_backdropRows;
+ (id)_lightOverlayRows;
+ (id)_luminanceRow;
+ (id)_luminanceRows;
+ (id)settingsControllerModule;
+ (id)sharedMaterialSettings;

- (void).cxx_destruct;
- (void)addKeyObserver:(id)arg1;
- (id)archiveValueForKey:(id)arg1;
- (double)blurRadius;
- (double)brightness;
- (double)luminanceAlpha;
- (void)restoreDefaultValues;
- (double)saturation;
- (void)setBlurRadius:(double)arg1;
- (void)setBrightness:(double)arg1;
- (void)setDefaultValues;
- (void)setLuminanceAlpha:(double)arg1;
- (void)setSaturation:(double)arg1;
- (void)setTintAlpha:(double)arg1;
- (void)setUsesLuminanceMap:(bool)arg1;
- (double)tintAlpha;
- (void)updateWithSettingsFromArchive:(id)arg1;
- (bool)usesLuminanceMap;
- (id)vibrantStylingProvider;
- (Class)vibrantStylingProviderClass;

@end
