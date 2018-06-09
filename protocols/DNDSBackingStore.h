/* made by EzioChiu.
 */

@protocol DNDSBackingStore <NSObject>

@required

- (NSArray *)readAllRecordsWithError:(id*)arg1;
- (bool)writeAllRecords:(NSArray *)arg1 withError:(id*)arg2;

@end
