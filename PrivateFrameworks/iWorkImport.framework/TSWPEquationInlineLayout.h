/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPEquationInlineLayout : TSWPEquationLayout {
    bool  _disableXHeightMatching;
    double  _fontSizeAdjustedForXHeight;
}

@property (nonatomic) bool disableXHeightMatching;
@property (nonatomic, readonly) double fontSizeAdjustedForXHeight;

- (id)computeLayoutGeometry;
- (double)descentForInlineLayout;
- (bool)disableXHeightMatching;
- (double)fontSizeAdjustedForXHeight;
- (double)inlineCenteredAlignmentHorizontalOffset;
- (id)layoutGeometryFromInfo;
- (double)p_fontSizeThatMatchesXHeightForFontName:(id)arg1 fontSize:(double)arg2;
- (void)setDisableXHeightMatching:(bool)arg1;
- (bool)wantsRoundedInlinePosition;
- (void)willLayoutInlineWithMaximumSize:(struct CGSize { double x1; double x2; })arg1;

@end
