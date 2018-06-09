/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject {
    TSCEFormulaRewrite_RegionInfo * _mergeRegion;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _mergeSource;
}

@property (nonatomic, readonly) TSCEFormulaRewrite_RegionInfo *mergeRegion;
@property (nonatomic) const struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }*mergeSource;

- (void)dealloc;
- (id)description;
- (id)initWithMergeRegion:(id)arg1 mergeSource:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)mergeRegion;
- (const struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }*)mergeSource;
- (void)setMergeSource:(const struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg1;

@end
