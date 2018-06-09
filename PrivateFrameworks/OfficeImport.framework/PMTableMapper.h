/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTableMapper : CMMapper {
    OADOrientedBounds * mBounds;
    CMTableGridInfo * mGrid;
    CMDrawableStyle * mStyle;
    OADTable * mTable;
}

- (void).cxx_destruct;
- (id)cellStyle;
- (float)columnWidthAtIndex:(unsigned long long)arg1 state:(id)arg2;
- (id)defaultCellFillForRow:(unsigned long long)arg1 withState:(id)arg2;
- (id)defaultCellFillWithState:(id)arg1;
- (id)grid;
- (id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapColumnGridAt:(id)arg1 withState:(id)arg2;
- (void)mapTablePropertiesWithState:(id)arg1;
- (unsigned long long)rowCount;
- (id)tableBorderStyle;

@end
