/* made by EzioChiu.
 */

@protocol SXWebContentMessage <NSObject>

@required

- (NSDictionary *)body;
- (NSString *)name;

@end
