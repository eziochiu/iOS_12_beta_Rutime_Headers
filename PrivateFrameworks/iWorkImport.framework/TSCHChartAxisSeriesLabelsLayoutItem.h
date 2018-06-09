/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem

- (struct CGSize { double x1; double x2; })calcMinSize;
- (id)initWithParent:(id)arg1;
- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)numberOfLabelsForAxis:(id)arg1;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2;
- (id)selectionPathLabelType;
- (bool)showLabelsForAxis:(id)arg1;
- (unsigned long long)strideInLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;

@end
