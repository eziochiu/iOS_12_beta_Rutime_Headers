/* made by EzioChiu.
 */

@protocol SXDataTableDataSource <NSObject>

@required

- (UIColor *)backgroundColorForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (UIColor *)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
- (UIColor *)backgroundColorForRowAtIndex:(unsigned long long)arg1;
- (SXDataTableBorderSides *)cellBorderForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (SXDataTableBorder *)columnDividerAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataOrientation;
- (double)heightForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)heightForCellndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1 forWidth:(double)arg2;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)minimumWidthForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (struct { double x1; double x2; double x3; double x4; })paddingForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (SXDataTableBorder *)rowDividerAtIndex:(unsigned long long)arg1;
- (SXDataTableBorderSides *)tableBorder;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)widthForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;

@end
