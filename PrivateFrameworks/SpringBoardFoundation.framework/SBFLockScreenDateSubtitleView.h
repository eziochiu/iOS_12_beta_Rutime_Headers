/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateSubtitleView : UIView {
    UIView * _accessoryView;
    UIView * _backgroundView;
    double  _customInterItemSpacing;
    SBUILegibilityLabel * _label;
    _UILegibilitySettings * _legibilitySettings;
    double  _strength;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) double baselineOffsetFromOrigin;
@property (nonatomic) double customInterItemSpacing;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (nonatomic, retain) NSString *string;

+ (id)labelFont;
+ (struct { double x1; double x2; double x3; double x4; })labelFontMetrics;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)accessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryViewFrame;
- (id)backgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundViewFrame;
- (double)baselineOffsetFromBottom;
- (double)baselineOffsetFromOrigin;
- (double)customInterItemSpacing;
- (void)dealloc;
- (id)font;
- (id)init;
- (id)initWithString:(id)arg1 accessoryView:(id)arg2;
- (double)interItemSpacing;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCustomInterItemSpacing:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (id)string;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })subtitleLabelFrame;

@end
