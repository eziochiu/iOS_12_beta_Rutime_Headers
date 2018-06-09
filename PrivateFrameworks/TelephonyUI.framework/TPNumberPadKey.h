/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPadKey : UIView {
    UILabel * _digit;
    NSLayoutConstraint * _digitBaseline;
    NSLayoutConstraint * _letterBaseline;
    UILabel * _letters;
    NSLayoutConstraint * _secondaryLetterBaseline;
    UILabel * _secondaryLetters;
}

@property (getter=isAsterisk, nonatomic, readonly) bool asterisk;
@property (nonatomic, retain) UILabel *digit;
@property (nonatomic, retain) NSLayoutConstraint *digitBaseline;
@property (nonatomic, retain) NSLayoutConstraint *letterBaseline;
@property (nonatomic, retain) UILabel *letters;
@property (getter=isPound, nonatomic, readonly) bool pound;
@property (nonatomic, retain) NSLayoutConstraint *secondaryLetterBaseline;
@property (nonatomic, retain) UILabel *secondaryLetters;

+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (id)digit;
- (id)digitBaseline;
- (void)doLayoutNow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAsterisk;
- (bool)isPound;
- (id)letterBaseline;
- (id)letters;
- (id)secondaryLetterBaseline;
- (id)secondaryLetters;
- (void)setDigit:(id)arg1;
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;
- (void)setDigitBaseline:(id)arg1;
- (void)setFontStylesForHighlightState:(bool)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(bool)arg3 shouldCenterDigit:(bool)arg4 fontColor:(bool)arg5 circleDiameter:(double)arg6;
- (void)setLetterBaseline:(id)arg1;
- (void)setLetters:(id)arg1;
- (void)setSecondaryLetterBaseline:(id)arg1;
- (void)setSecondaryLetters:(id)arg1;

@end
