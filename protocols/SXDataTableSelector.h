/* made by EzioChiu.
 */

@protocol SXDataTableSelector <NSObject>

@required

- (unsigned long long)columnIndex;
- (NSString *)descriptor;
- (unsigned long long)rowIndex;

@end
