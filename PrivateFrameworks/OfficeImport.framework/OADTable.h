/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTable : OADDrawable {
    OADTableGrid * mGrid;
    NSMutableArray * mRows;
}

+ (void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2;

- (id)addRow;
- (id)cellAtPos:(struct OADTMatrixPos { int x1; int x2; })arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)flattenStyle;
- (void)flipTableRTL;
- (id)grid;
- (id)init;
- (id)masterCellOfPos:(struct OADTMatrixPos { int x1; int x2; })arg1;
- (struct OADTMatrixPos { int x1; int x2; })masterPosOfPos:(struct OADTMatrixPos { int x1; int x2; })arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (void)setParentTextListStyle:(id)arg1;
- (id)tableProperties;

@end
