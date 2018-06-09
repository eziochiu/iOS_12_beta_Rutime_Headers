/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STStandaloneTextLayout : STContainerLayout <TSWPColumnMetrics, TSWPLayoutParent> {
    <STStandaloneTextLayoutDelegate> * _delegate;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } adjustedInsets;
@property (nonatomic, readonly) bool alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) bool columnsAreLeftToRight;
@property (nonatomic) <STStandaloneTextLayoutDelegate> *delegate;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) bool shrinkTextToFit;
@property (nonatomic, readonly) double textScaleFactor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })adjustedInsets;
- (bool)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { double x1; double x2; })arg2;
- (id)childInfosForLayout;
- (unsigned long long)columnCount;
- (bool)columnsAreLeftToRight;
- (id)computeLayoutGeometry;
- (id)delegate;
- (id)dependentsOfTextLayout:(id)arg1;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (id)layoutMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (id)p_wpLayoutParent;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4;
- (Class)repClassForTextLayout:(id)arg1;
- (Class)repClassOverride;
- (void)setDelegate:(id)arg1;
- (bool)shrinkTextToFit;
- (id)styleProviderForLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

@end
