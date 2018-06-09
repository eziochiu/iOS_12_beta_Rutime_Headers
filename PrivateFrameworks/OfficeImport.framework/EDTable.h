/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTable : NSObject {
    EDCollection * mColumnFilters;
    unsigned long long  mDataAreaBorderDxfIndex;
    unsigned long long  mDataAreaDxfIndex;
    NSString * mDisplayName;
    unsigned long long  mHeaderRowBorderDxfIndex;
    unsigned long long  mHeaderRowCount;
    unsigned long long  mHeaderRowDxfIndex;
    NSString * mName;
    EDResources * mResources;
    bool  mShowColumnStripes;
    bool  mShowFirstColumn;
    bool  mShowLastColumn;
    bool  mShowRowStripes;
    unsigned long long  mStyleIndex;
    NSString * mStyleName;
    unsigned long long  mTableBorderDxfIndex;
    EDCollection * mTableColumns;
    EDReference * mTableRange;
    unsigned long long  mTotalsRowBorderDxfIndex;
    unsigned long long  mTotalsRowCount;
    unsigned long long  mTotalsRowDxfIndex;
}

+ (id)tableWithResources:(id)arg1;

- (id)columnFilters;
- (id)dataAreaBorderDxf;
- (unsigned long long)dataAreaBorderDxfIndex;
- (id)dataAreaDxf;
- (unsigned long long)dataAreaDxfIndex;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)headerRowBorderDxf;
- (unsigned long long)headerRowBorderDxfIndex;
- (unsigned long long)headerRowCount;
- (id)headerRowDxf;
- (unsigned long long)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaBorderDxf:(id)arg1;
- (void)setDataAreaBorderDxfIndex:(unsigned long long)arg1;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1;
- (void)setHeaderRowCount:(unsigned long long)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setShowColumnStripes:(bool)arg1;
- (void)setShowFirstColumn:(bool)arg1;
- (void)setShowLastColumn:(bool)arg1;
- (void)setShowRowStripes:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setStyleName:(id)arg1;
- (void)setTableBorderDxf:(id)arg1;
- (void)setTableBorderDxfIndex:(unsigned long long)arg1;
- (void)setTableRange:(id)arg1;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1;
- (void)setTotalsRowCount:(unsigned long long)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (bool)showColumnStripes;
- (bool)showFirstColumn;
- (bool)showLastColumn;
- (bool)showRowStripes;
- (id)style;
- (unsigned long long)styleIndex;
- (id)styleName;
- (id)tableBorderDxf;
- (unsigned long long)tableBorderDxfIndex;
- (id)tableColumns;
- (id)tableRange;
- (id)totalsRowBorderDxf;
- (unsigned long long)totalsRowBorderDxfIndex;
- (unsigned long long)totalsRowCount;
- (id)totalsRowDxf;
- (unsigned long long)totalsRowDxfIndex;

@end
