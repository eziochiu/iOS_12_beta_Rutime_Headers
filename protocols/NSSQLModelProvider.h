/* made by EzioChiu.
 */

@protocol NSSQLModelProvider

@required

- (NSDictionary *)ancillaryModels;
- (NSDictionary *)ancillarySQLModels;
- (NSSQLModel *)model;

@end
