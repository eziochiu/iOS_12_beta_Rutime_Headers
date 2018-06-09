/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

@interface WUIDynamicWeatherBackground : UIView {
    NSCache * _backgroundCache;
    WUIWeatherCondition * _condition;
    CALayer * _currentBackground;
    WUIGradientLayer * _gradientLayer;
    CALayer * _rootLayer;
    NSNumber * _sunHeightOverride;
    CALayer * _transitionBackground;
}

@property (nonatomic, retain) NSCache *backgroundCache;
@property (nonatomic, retain) WUIWeatherCondition *condition;
@property (nonatomic) CALayer *currentBackground;
@property (nonatomic, retain) WUIGradientLayer *gradientLayer;
@property (nonatomic, retain) CALayer *rootLayer;
@property (nonatomic, copy) NSNumber *sunHeightOverride;
@property (nonatomic) CALayer *transitionBackground;

+ (void)beginReuseRestrictionForCity:(id)arg1;
+ (id)dequeueBackgroundForCity:(id)arg1;
+ (void)endReuseRestriction;
+ (void)enqueueBackground:(id)arg1;
+ (void)handleMemoryWarning;
+ (void)initialize;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)animateTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)backgroundCache;
- (void)completeTransitionWithSuccess:(bool)arg1;
- (id)condition;
- (id)currentBackground;
- (void)getTopColor:(id*)arg1 middleColor:(id*)arg2 bottomColor:(id*)arg3 gradientStopPoint:(double*)arg4 forCity:(id)arg5 date:(id)arg6;
- (id)gradientLayer;
- (bool)hasSublayer:(id)arg1;
- (id)imageLayerFromConditon:(long long)arg1 isDay:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct { float x1; float x2; float x3; float x4; })mixedColorsForIndex:(long long)arg1 solarHeight:(float)arg2 condition:(long long)arg3 latitude:(float)arg4;
- (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; })mixedGradientForSunheight:(double)arg1 hourAngle:(double)arg2 condition:(long long)arg3 latitude:(float)arg4;
- (id)rootLayer;
- (void)setBackgroundCache:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCity:(id)arg1 animate:(bool)arg2;
- (void)setCity:(id)arg1 animationDuration:(double)arg2;
- (void)setCondition:(id)arg1;
- (void)setCurrentBackground:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setRootLayer:(id)arg1;
- (void)setSunHeightOverride:(id)arg1;
- (void)setTransitionBackground:(id)arg1;
- (id)springAnimationForKeyPath:(id)arg1 mass:(double)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (id)sunHeightOverride;
- (id)transitionBackground;
- (id)updateFromCity:(id)arg1 toCity:(id)arg2;

@end
