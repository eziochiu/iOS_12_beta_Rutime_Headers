/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableSelection : TSKSelection <NSCopying, TSDTextSelection> {
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mAnchorCellID;
    TSTCellRegion * mBaseRegion;
    TSTCellRegion * mCellRegion;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mCursorCellID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mSearchReferenceRange;
    int  mSelectionType;
}

@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } anchorCellID;
@property (nonatomic, readonly) TSTCellRegion *baseRegion;
@property (nonatomic, readonly) TSTCellRegion *cellRegion;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } cursorCellID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAtEndOfLine;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } searchReferenceRange;
@property (nonatomic, readonly) int selectionType;
@property (readonly) Class superclass;

- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })anchorCellID;
- (bool)areCellsInTheSameRegionInTable:(id)arg1;
- (id)baseRegion;
- (id)cellRegion;
- (bool)containsCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)containsSelection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cursorCellID;
- (void)dealloc;
- (id)description;
- (void)enumerateSelectedCellsInTable:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSelectedCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithTableModel:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)initWithTableModel:(id)arg1 andCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(struct { int x1; int x2; })arg3;
- (id)initWithTableModel:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 selectionType:(int)arg3;
- (id)initWithTableModel:(id)arg1 cellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 type:(int)arg3 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 baseRegion:(id)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 baseRegion:(id)arg5 selectionType:(int)arg6;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(int)arg5;
- (id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableModel:(id)arg1 selectionType:(int)arg2;
- (id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3;
- (void)insert:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (bool)intersectsPartialMergeRangeInTable:(id)arg1;
- (bool)isAtEndOfLine;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)remove:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })searchReferenceRange;
- (id)selectionByAddingCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(int)arg5;
- (id)selectionByExtendingWithCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(bool)arg4;
- (id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(bool)arg4 suppressWrap:(bool)arg5;
- (id)selectionByRemovingCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursor:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(int)arg5;
- (int)selectionType;
- (void)setSearchReferenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
