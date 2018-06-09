/* made by EzioChiu.
 */

@protocol SiriCoreSQLiteIndex <NSObject>

@required

- (NSArray *)columns;
- (NSString *)name;

@end
