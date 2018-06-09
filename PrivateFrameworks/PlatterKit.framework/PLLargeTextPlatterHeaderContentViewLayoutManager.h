/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {
    NSStringDrawingContext * _drawingContext;
    NSMutableDictionary * _widthToStringToMeasuredNumLines;
}

- (void).cxx_destruct;
- (double)_dateLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dateLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_dateLabelFont;
- (void)_invalidateNumberOfLinesCache;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextUtilityLabelBaselineOffset;
- (long long)_measuredNumberOfLinesForLabel:(id)arg1 withWidth:(double)arg2;
- (long long)_numberOfLinesForLabel:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_titleLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_utilityButtonTitleLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(double)arg2;
- (double)contentBaseline;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithPlatterHeaderContentView:(id)arg1;
- (void)layoutDateLabelWithScale:(double)arg1;
- (void)layoutIconButtonsWithScale:(double)arg1;
- (void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2;
- (void)layoutUtilityButtonWithScale:(double)arg1;

@end
