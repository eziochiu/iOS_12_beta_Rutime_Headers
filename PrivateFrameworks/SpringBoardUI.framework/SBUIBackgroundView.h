/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBackgroundView : UIView <SBUIBackgroundStyleTransitioning, SBUIWallpaperOverlay> {
    BSUIBackdropView * _backdropView;
    UIView * _darkenSourceOverView;
    UIView * _lightenSourceOverView;
    MTMaterialView * _luminanceView;
    double  _progress;
    UIView * _reduceTransparencyView;
    UIView * _sourceOverView;
    long long  _style;
    UIView * _tintView;
    long long  _transitionStyle;
    bool  _transitioning;
}

@property (nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isTransitioningBackgroundStyle, nonatomic, readonly) bool transitioningBackgroundStyle;

- (void).cxx_destruct;
- (id)_backgroundColorForDarkenAlpha:(double)arg1 andProgress:(double)arg2;
- (double)_darkenValueForBackgroundStyle:(long long)arg1;
- (void)_darkenWithProgress:(double)arg1;
- (double)_lightenSourceOverValueForBackgroundStyle:(long long)arg1;
- (void)_lightenSourceOverWithProgress:(double)arg1;
- (double)_luminanceValueForBackgroundStyle:(long long)arg1;
- (void)_luminanceWithProgress:(double)arg1;
- (void)_reduceTransparencyWithProgress:(double)arg1;
- (double)_reducedTransparencyValueForBackgroundStyle:(long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_tintColorAlphaForBackgroundStyle:(long long)arg1;
- (double)_tintValueForBackgroundStyle:(long long)arg1;
- (void)_tintWithProgress:(double)arg1 backgroundColorAlpha:(double)arg2;
- (void)_updateAppearanceForBackgroundStyle:(long long)arg1 transitionToSettings:(bool)arg2;
- (void)_updateAppearanceForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 withProgress:(double)arg3;
- (double)_valueFromStart:(double)arg1 toEnd:(double)arg2 withFraction:(double)arg3;
- (id)backdropView;
- (long long)backgroundStyle;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransitioningBackgroundStyle;
- (void)layoutSubviews;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setGroupName:(id)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;

@end
