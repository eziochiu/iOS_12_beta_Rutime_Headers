/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableFilterColumn : NSObject {
    unsigned long long  mColumnIndex;
    NSMutableArray * mFilters;
    int  mFiltersRelation;
}

- (void)addFilter:(id)arg1;
- (unsigned long long)columnIndex;
- (void)dealloc;
- (id)description;
- (id)filterAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (int)filtersRelation;
- (id)init;
- (void)setColumnIndex:(unsigned long long)arg1;
- (void)setFiltersRelation:(int)arg1;

@end
