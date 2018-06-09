/* made by EzioChiu.
 */

@protocol TSTTableMergeRangeProviding <NSObject>

@required

- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToCoverMergedCells:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (TSTCellRegion *)expandCellRegionToCoverMergedCells:(TSTCellRegion *)arg1;
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
- (TSTMergeListWrapper *)mergesIntersectingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;

@end
