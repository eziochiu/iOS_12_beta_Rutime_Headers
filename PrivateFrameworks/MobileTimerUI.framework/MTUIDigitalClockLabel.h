/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUIDigitalClockLabel : MTUIDateLabel {
    NSDate * _baseDate;
    NSCalendar * _calendar;
    long long  _hour;
    long long  _minute;
}

- (void).cxx_destruct;
- (void)forceSetHour:(long long)arg1 minute:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)refreshUI;
- (void)resetFontSizes;
- (bool)setHour:(long long)arg1 minute:(long long)arg2;
- (void)significantTimeChange:(id)arg1;

@end
