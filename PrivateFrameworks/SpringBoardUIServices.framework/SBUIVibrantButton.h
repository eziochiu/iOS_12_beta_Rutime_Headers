/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIVibrantButton : UIControl <SBUILegibility, _SBFVibrantView> {
    UIImage * _glyphImage;
    _UILegibilitySettings * _legibilitySettings;
    long long  _lineBreakMode;
    double  _minimumTitleScaleFactor;
    UIView * _nonVibrantGlyph;
    SBUILegibilityView * _nonVibrantGlyphLegibilityView;
    SBUILegibilityLabel * _nonVibrantLegibilityLabel;
    long long  _numberOfLines;
    double  _strength;
    long long  _textAlignment;
    NSString * _title;
    bool  _vibrancyAllowed;
    UIView * _vibrantGlyph;
    UIView * _vibrantGlyphBackgroundView;
    UIView * _vibrantGlyphTintView;
    UIImageView * _vibrantMaskGlyphView;
    UILabel * _vibrantMaskLabel;
    UIView * _vibrantMaskView;
    _SBFVibrantSettings * _vibrantSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *glyphImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumTitleScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double strength;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, copy) NSString *title;
@property (getter=isVibrancyAllowed, nonatomic) bool vibrancyAllowed;
@property (nonatomic, retain) _SBFVibrantSettings *vibrantSettings;

+ (id)_labelFont;

- (void).cxx_destruct;
- (double)_alphaForState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_glyphFrameForSize:(struct CGSize { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrameForSize:(struct CGSize { double x1; double x2; })arg1 baselineOffset:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutNonVibrantSubviews;
- (void)_layoutVibrantSubviews;
- (id)_lazyGlyphLegibilityView;
- (void)_setUpForCurrentVibrancy;
- (bool)_shouldUseVibrancy;
- (struct CGSize { double x1; double x2; })_sizeThatFitsForLabelView:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeThatFitsWithVibrancy;
- (struct CGSize { double x1; double x2; })_sizeThatFitsWithoutVibrancy;
- (void)_updateForState;
- (id)backgroundColor;
- (id)glyphImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVibrancyAllowed;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (long long)lineBreakMode;
- (double)minimumTitleScaleFactor;
- (long long)numberOfLines;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumTitleScaleFactor:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setStrength:(double)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrancyAllowed:(bool)arg1;
- (void)setVibrantSettings:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (long long)textAlignment;
- (id)title;
- (id)vibrantSettings;

@end
