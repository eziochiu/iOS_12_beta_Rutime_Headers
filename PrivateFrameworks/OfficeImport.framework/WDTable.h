/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTable : WDBlock {
    WDTableProperties * mProperties;
    NSMutableArray * mRows;
}

- (id)addRow;
- (int)blockType;
- (id)cellIterator;
- (void)clearProperties;
- (void)clearRows;
- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1;
- (id)insertRowAtIndex:(unsigned long long)arg1;
- (int)nestingLevel;
- (id)newCellIterator;
- (id)newRowIterator;
- (id)newRunIterator;
- (id)properties;
- (id)rowAt:(unsigned long long)arg1;
- (unsigned long long)rowCount;
- (id)rowIterator;
- (id)runIterator;

@end
