/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTSystemModuleSheerMaterialSettings : MTSystemModuleMaterialSettings <MTMaterialSettings_v2, _MTMaterialPerformanceConfiguring>

@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminanceAlpha;
@property (nonatomic) double saturation;
@property (readonly) Class superclass;
@property (nonatomic) double tintAlpha;
@property (nonatomic, readonly, copy) UIColor *tintColor;
@property (nonatomic) bool usesLuminanceMap;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;

+ (id)sharedMaterialSettings;

- (double)_backdropScaleForOptions:(unsigned long long)arg1;
- (id)_blurInputQualityForOptions:(unsigned long long)arg1;
- (void)setDefaultValues;
- (id)tintColor;
- (double)zoom;

@end
