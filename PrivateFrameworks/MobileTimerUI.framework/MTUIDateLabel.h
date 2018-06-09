/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUIDateLabel : UIView {
    NSArray * _currentConstraints;
    NSDate * _date;
    UILabel * _dateLabel;
    UIFont * _font;
    bool  _shouldAddLayoutConstraints;
    UIColor * _textColor;
    UIFont * _timeDesignatorFont;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) double lastBaselineFrameOriginY;
@property (nonatomic) bool shouldAddLayoutConstraints;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *timeDesignatorFont;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)_noteLayoutChange;
- (void)_updateDateString;
- (id)currentConstraints;
- (id)date;
- (id)dateLabel;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineFrameOriginY;
- (void)setCurrentConstraints:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLastBaselineFrameOriginY:(double)arg1;
- (void)setShouldAddLayoutConstraints:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeDesignatorFont:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)shouldAddLayoutConstraints;
- (id)textColor;
- (id)timeDesignatorFont;
- (id)timeZone;
- (void)updateConstraints;
- (id)viewForBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
