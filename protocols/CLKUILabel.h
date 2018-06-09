/* made by EzioChiu.
 */

@protocol CLKUILabel <NSObject>

@required

- (double)_lastLineBaseline;
- (NSAttributedString *)attributedText;
- (UIFont *)font;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (void)setAttributedText:(NSAttributedString *)arg1;
- (void)setFont:(UIFont *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(UIColor *)arg1;
- (NSString *)text;
- (long long)textAlignment;
- (UIColor *)textColor;

@end
