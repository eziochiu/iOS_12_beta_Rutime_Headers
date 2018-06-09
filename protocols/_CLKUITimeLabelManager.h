/* made by EzioChiu.
 */

@protocol _CLKUITimeLabelManager

@required

- (double)_lastLineBaseline;
- (bool)animationsPaused;
- (NSAttributedString *)effectiveAttributedText;
- (CLKFont *)effectiveFont;
- (void)enumerateUnderlyingLabelsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UILabel *, bool, void*
- (id)initWithForDevice:(void *)arg1 timeFormatter:(void *)arg2 options:(void *)arg3 labelFactory:(void *)arg4; // needs 4 arg types, found 9: CLKDevice *, CLKTimeFormatter *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UILabel *, id /* block */, bool, void*
- (struct CGSize { double x1; double x2; })intrinsicSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (void)setAnimationsPaused:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShowSeconds:(bool)arg1;
- (void)setShowsDesignator:(bool)arg1;
- (void)setStyle:(CLKUITimeLabelStyle *)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (bool)showSeconds;
- (struct CGSize { double x1; double x2; })sizeThatFits;
- (void)sizeViewToFit;
- (UIColor *)textColor;
- (void)updateTimeText;
- (UIView *)view;
- (UIView *)viewForLastBaselineLayout;

@end
