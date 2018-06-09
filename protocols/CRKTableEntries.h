/* made by EzioChiu.
 */

@protocol CRKTableEntries <NSObject>

@required

- (unsigned long long)columnCount;
- (<CRKTableEntry> *)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)rowCount;

@end
