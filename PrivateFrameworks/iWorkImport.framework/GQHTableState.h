/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTableState : NSObject {
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { unsigned short *x1; unsigned short *x2; struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { unsigned short *x_3_1_1; } x3; } * mCellCountInColumns;
    double  mCurrentTablePosition;
    int  mGroupLevel;
    double  mLastAttachmentPosition;
    double  mOriginalTableHeight;
    int  mPrevColumnIndex;
    int  mPrevRowIndex;
    bool  mSplitTable;
    long long  mSplitTableIndex;
    GQDTTable * mTable;
}

- (void)addRowHeight:(float)arg1;
- (struct vector<unsigned short, std::__1::allocator<unsigned short> > { unsigned short *x1; unsigned short *x2; struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { unsigned short *x_3_1_1; } x3; }*)cellCountInColumns;
- (double)currentTablePosition;
- (void)dealloc;
- (int)groupLevel;
- (id)init;
- (double)lastAttachmentPosition;
- (long long)nextSplitTableIndex;
- (double)originalTableHeight;
- (int)prevColumnIndex;
- (int)prevRowIndex;
- (void)setGroupLevel:(int)arg1;
- (void)setLastAttachmentPosition:(double)arg1;
- (void)setOriginalTableHeight:(double)arg1;
- (void)setPrevRowIndex:(int)arg1 columnIndex:(int)arg2;
- (void)setSplitTable:(bool)arg1;
- (void)setSplitTableIndex:(long long)arg1;
- (void)setTable:(id)arg1;
- (bool)splitTable;
- (id)table;

@end
