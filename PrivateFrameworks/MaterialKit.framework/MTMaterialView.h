/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTMaterialView : UIView <MTMaterialSettingsObserving> {
    UIViewFloatAnimatableProperty * _backdropFloatAnimatableProperty;
    id /* block */  _backdropScaleAdjustment;
    _MTBackdropView * _backdropView;
    UIView * _baseOverlayView;
    bool  _cornerRadiusIsContinuous;
    bool  _forceCrossfadeIfNecessary;
    NSString * _groupName;
    bool  _highlighted;
    bool  _isConfiguredAsOverlay;
    UIView * _primaryOverlayView;
    UIView * _secondaryOverlayView;
    MTMaterialSettingsInterpolator * _settingsInterpolator;
    bool  _shouldCrossfadeIfNecessary;
    bool  _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
}

@property (nonatomic) bool allowsInPlaceFiltering;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty;
@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCrossfadeIfNecessary;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) <MTMaterialSettings><MTMaterialSettingsObservable> *materialSettings;
@property (nonatomic) bool shouldCrossfadeIfNecessary;
@property (readonly) Class superclass;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;
@property (nonatomic) double weighting;

+ (void)_validateRecipe:(long long*)arg1 andOptions:(unsigned long long*)arg2;
+ (void)initialize;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialViewWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)_adjustScaleOfBackdropView:(id)arg1 ifNecessaryWithSettingsInterpolator:(id)arg2;
- (id)_backdropLayer;
- (void)_configureBackdropView:(id)arg1 withSettingsInterpolator:(id)arg2;
- (void)_configureBackdropViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureBaseOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureOverlayView:(id*)arg1 forOverlayOption:(unsigned long long)arg2 withSettingsInterpolator:(id)arg3 colorBlock:(id /* block */)arg4;
- (id)_configureOverlayView:(id*)arg1 ofClass:(Class)arg2 withSettingsInterpolator:(id)arg3 color:(id)arg4;
- (void)_configurePrimaryOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureSecondaryOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (double)_continuousCornerRadius;
- (bool)_isCrossfadeNecessary;
- (id)_observableSettings;
- (void)_reduceMotionStatusDidChange;
- (void)_reduceTransparencyStatusDidChange;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setupOrInvalidateTransformer;
- (bool)_supportsVariableWeighting;
- (bool)allowsInPlaceFiltering;
- (id)backdropFloatAnimatableProperty;
- (id /* block */)backdropScaleAdjustment;
- (double)cornerRadius;
- (void)dealloc;
- (bool)forceCrossfadeIfNecessary;
- (id)groupName;
- (id)initWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
- (bool)isHighlighted;
- (id)materialSettings;
- (void)prune;
- (void)setAllowsInPlaceFiltering:(bool)arg1;
- (void)setBackdropFloatAnimatableProperty:(id)arg1;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setFinalRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)setFinalSettings:(id)arg1 options:(unsigned long long)arg2;
- (void)setForceCrossfadeIfNecessary:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldCrossfadeIfNecessary:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(bool)arg1;
- (void)setWeighting:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldCrossfadeIfNecessary;
- (void)transitionToRecipe:(long long)arg1 options:(unsigned long long)arg2 weighting:(double)arg3;
- (void)transitionToSettings:(id)arg1 options:(unsigned long long)arg2 weighting:(double)arg3;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (id)vibrantStylingProvider;
- (double)weighting;

@end
