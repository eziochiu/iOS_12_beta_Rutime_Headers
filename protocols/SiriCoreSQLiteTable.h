/* made by EzioChiu.
 */

@protocol SiriCoreSQLiteTable <NSObject>

@required

- (NSArray *)columns;
- (NSString *)name;

@end
