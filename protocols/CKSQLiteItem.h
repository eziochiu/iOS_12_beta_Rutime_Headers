/* made by EzioChiu.
 */

@protocol CKSQLiteItem <NSObject>

@required

- (id)initWithSqliteRepresentation:(NSString *)arg1;
- (NSString *)sqliteRepresentation;

@end
