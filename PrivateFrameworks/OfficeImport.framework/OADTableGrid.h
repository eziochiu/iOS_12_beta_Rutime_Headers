/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableGrid : NSObject {
    NSMutableArray * mColumns;
}

- (id)addColumn;
- (id)columnAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (void)dealloc;
- (id)description;
- (void)flipColumnsRTL;
- (id)init;

@end
