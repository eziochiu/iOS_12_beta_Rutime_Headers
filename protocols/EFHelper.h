/* made by EzioChiu.
 */

@protocol EFHelper <NSObject>

@required

- (int)columnNumber;
- (bool)isCurrentSheet:(NSString *)arg1;
- (unsigned long long)resolveFile:(NSString *)arg1;
- (unsigned long long)resolveFirstSheet:(NSString *)arg1 lastSheet:(NSString *)arg2;
- (int)resolveFunctionName:(NSString *)arg1;
- (unsigned long long)resolveName:(NSString *)arg1;
- (unsigned long long)resolveSheet:(NSString *)arg1;
- (EDTable *)resolveTable:(NSString *)arg1;
- (unsigned long long)resolveTableColumn:(EDTable *)arg1 columnName:(NSString *)arg2;
- (unsigned long long)resolveTableToSheetId:(NSString *)arg1;
- (int)rowNumber;

@end
