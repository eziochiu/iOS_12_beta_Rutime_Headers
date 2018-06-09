/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitsView : UIView {
    long long  _appearance;
    CLKDevice * _device;
    bool  _dimIsUpper;
    CAGradientLayer * _dimmingOverlay;
    bool  _hasSetAppearance;
    bool  _lastDigitIs7;
    _AdjustableLabel * _mainLabel;
    _AdjustableLabel * _outlineBackgroundLabel;
    double  _scale;
}

@property (nonatomic) long long appearance;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *digitText;
@property (nonatomic) double scale;

+ (id)_cachedFontForAppearance:(long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_makeLabel;
- (void)_updateFonts;
- (long long)appearance;
- (id)color;
- (id)digitText;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (void)prepareAppearance:(long long)arg1;
- (double)scale;
- (void)setAppearance:(long long)arg1;
- (void)setColor:(id)arg1;
- (void)setDigitText:(id)arg1;
- (void)setDimmingFactor:(double)arg1 isUpper:(bool)arg2;
- (void)setScale:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
