/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
    unsigned long long  mColumnCount;
    bool  mHasArrows;
    bool  mIsHorizontal;
    bool  mIsLinear;
    bool  mIsSnake;
    float  mRectHeight;
    float  mRectWidth;
    unsigned long long  mRowCount;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circumscribedBounds;
- (unsigned long long)columnCount;
- (double)gapRatio;
- (struct CGSize { double x1; double x2; })gapSize;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)setColumnsAndRowsCount;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;

@end
