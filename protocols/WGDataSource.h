/* made by EzioChiu.
 */

@protocol WGDataSource <NSObject>

@required

- (NSString *)dataSourceIdentifier;
- (NSString *)parentDataSourceIdentifier;

@end
