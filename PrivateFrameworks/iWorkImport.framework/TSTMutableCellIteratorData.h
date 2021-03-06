/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData> {
    TSTCell * _cell;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _cellID;
    bool  _cellIDIsValid;
    bool  _cellIsValid;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  _mergeRange;
    bool  _mergeRangeIsValid;
}

@property (nonatomic, retain) TSTCell *cell;
@property (nonatomic, readonly) bool cellHasCommentStorage;
@property (nonatomic, readonly) bool cellHasConditionalStyle;
@property (nonatomic, readonly) bool cellHasCustomFormat;
@property (nonatomic, readonly) bool cellHasFormula;
@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } cellID;
@property (nonatomic) bool cellIDIsValid;
@property (nonatomic, readonly) bool cellIsEmpty;
@property (nonatomic) bool cellIsValid;
@property (nonatomic, readonly) int cellValueType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } mergeRange;
@property (nonatomic) bool mergeRangeIsValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cell;
- (bool)cellHasCommentStorage;
- (bool)cellHasConditionalStyle;
- (bool)cellHasCustomFormat;
- (bool)cellHasFormula;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cellID;
- (bool)cellIDIsValid;
- (bool)cellIsEmpty;
- (bool)cellIsValid;
- (int)cellValueType;
- (id)init;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergeRange;
- (bool)mergeRangeIsValid;
- (void)reset;
- (void)setCell:(id)arg1;
- (void)setCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCellIDIsValid:(bool)arg1;
- (void)setCellIsValid:(bool)arg1;
- (void)setMergeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setMergeRangeIsValid:(bool)arg1;

@end
