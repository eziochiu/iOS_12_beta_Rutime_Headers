/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface _MTBackdropView : UIView {
    UIColor * _colorAddColor;
    UIColor * _colorMatrixColor;
    NSString * _luminanceColorMapName;
    bool  _preservesFiltersAtZero;
    double  _zoom;
}

@property (nonatomic, copy) NSString *blurInputQuality;
@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (nonatomic, copy) UIColor *colorAddColor;
@property (nonatomic, copy) UIColor *colorMatrixColor;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) double luminanceAlpha;
@property (getter=_preservesFiltersAtZero, setter=_setPreservesFiltersAtZero:, nonatomic) bool preservesFiltersAtZero;
@property (nonatomic) double rasterizationScale;
@property (nonatomic) double saturation;
@property (nonatomic) double zoom;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_backdropLayer;
- (void)_configureFilterOfTypeIfNecessary:(id)arg1 withConfigurationBlock:(id /* block */)arg2;
- (id)_luminanceColorMapName;
- (bool)_preservesFiltersAtZero;
- (void)_removeFilterOfTypeIfNecessary:(id)arg1;
- (void)_setFloatValue:(double)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(id /* block */)arg4;
- (void)_setLuminanceColorMapName:(id)arg1;
- (void)_setPreservesFiltersAtZero:(bool)arg1;
- (void)_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 configurationBlock:(id /* block */)arg4;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)blurInputQuality;
- (double)blurRadius;
- (double)brightness;
- (id)colorAddColor;
- (id)colorMatrixColor;
- (id)groupName;
- (double)luminanceAlpha;
- (double)rasterizationScale;
- (double)saturation;
- (void)setBlurInputQuality:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBrightness:(double)arg1;
- (void)setColorAddColor:(id)arg1;
- (void)setColorMatrixColor:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setLuminanceAlpha:(double)arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)setSaturation:(double)arg1;
- (void)setZoom:(double)arg1;
- (double)zoom;

@end