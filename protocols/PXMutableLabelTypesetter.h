/* made by EzioChiu.
 */

@protocol PXMutableLabelTypesetter

@required

- (bool)adjustsFontSizeToFitWidth;
- (bool)allowTruncation;
- (NSAttributedString *)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumScaleFactor;
- (double)minimumTruncatedScaleFactor;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowTruncation:(bool)arg1;
- (void)setAttributedString:(NSAttributedString *)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTruncatedScaleFactor:(double)arg1;
- (void)setTypesettingMode:(long long)arg1;
- (long long)typesettingMode;

@end
