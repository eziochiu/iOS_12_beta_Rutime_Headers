/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMWorksheetMapper : EMSheetMapper {
    EDWorksheet * edWorksheet;
    double * mColumnGrid;
    ECColumnWidthConvertor * mColumnWidthConvertor;
    int  mHeight;
    long long  mMaxPopulatedColumn;
    long long  mMaxPopulatedRow;
    double * mRowGrid;
    CMStyle * mStyle;
    int  mWidth;
}

- (void).cxx_destruct;
- (void)_initWithState:(id)arg1;
- (unsigned long long)columnCount;
- (double*)columnGrid;
- (id)columnWidthConvertor;
- (void)countRowsAndColumnsWithState:(id)arg1;
- (void)dealloc;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (int)height;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (bool)isVisible;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapWorksheetClassesAtTableNode:(id)arg1;
- (long long)maxRowNumber;
- (struct CGSize { double x1; double x2; })preprocessDrawableSizeWithState:(id)arg1;
- (int)preprocessHeightWithState:(id)arg1;
- (struct CGSize { double x1; double x2; })preprocessSizeWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (void)readHyperlinksWithState:(id)arg1;
- (double*)rowGrid;
- (void)setRowGrid;
- (int)width;
- (double)xlColumnWidthToPoints:(double)arg1;

@end
