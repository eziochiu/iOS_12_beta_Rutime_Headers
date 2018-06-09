/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTableBlock : NSTextBlock {
    long long  _colNum;
    long long  _colSpan;
    long long  _rowNum;
    long long  _rowSpan;
    NSTextTable * _table;
    void * _tableBlockPrimary;
    void * _tableBlockSecondary;
}

+ (void)initialize;

- (void)_setColumnSpan:(long long)arg1;
- (void)_setRowSpan:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (long long)columnSpan;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 layoutManager:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTable:(id)arg1 startingRow:(long long)arg2 rowSpan:(long long)arg3 startingColumn:(long long)arg4 columnSpan:(long long)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForLayoutAtPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (long long)rowSpan;
- (long long)startingColumn;
- (long long)startingRow;
- (id)table;

@end