/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableBlueprint : NSObject {
    SXDataTableDictionary * _blueprint;
    SXDataTableDictionary * _columnDividers;
    SXDataTableDictionary * _contentBlueprint;
    unsigned long long  _dataOrientation;
    unsigned long long  _layoutType;
    unsigned long long  _numberOfColumns;
    unsigned long long  _numberOfRows;
    SXDataTableDictionary * _rowDividers;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tableInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _tableSize;
}

@property (nonatomic, readonly) SXDataTableDictionary *blueprint;
@property (nonatomic, readonly) SXDataTableDictionary *columnDividers;
@property (nonatomic, readonly) SXDataTableDictionary *contentBlueprint;
@property (nonatomic) unsigned long long dataOrientation;
@property (nonatomic, readonly) unsigned long long layoutType;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) SXDataTableDictionary *rowDividers;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tableInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } tableSize;

- (void).cxx_destruct;
- (void)addCellContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addCellRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addColumnDividerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addRowDividerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (id)blueprint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellContentRectForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cellRectForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)columnDividers;
- (id)contentBlueprint;
- (unsigned long long)dataOrientation;
- (id)description;
- (id)initWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2 withTableInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)isRectValid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)layoutType;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForColumnAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForColumnDividerAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRowAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRowDividerAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)rowDividers;
- (void)setDataOrientation:(unsigned long long)arg1;
- (void)setTableSize:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tableInsets;
- (struct CGSize { double x1; double x2; })tableSize;

@end
