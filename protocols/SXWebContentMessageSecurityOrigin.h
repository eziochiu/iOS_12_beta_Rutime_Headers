/* made by EzioChiu.
 */

@protocol SXWebContentMessageSecurityOrigin <NSObject>

@required

- (NSString *)host;
- (NSString *)protocol;
- (NSURLRequest *)request;

@end
