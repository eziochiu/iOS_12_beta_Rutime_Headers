/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTableRowMapper : CMMapper {
    OADTableRow * mRow;
    unsigned long long  mRowIndex;
    OADTable * mTable;
}

- (void).cxx_destruct;
- (unsigned long long)cellCount;
- (float)height;
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
