/* made by EzioChiu.
 */

@protocol RCOperationIdentifying <NSObject>

@required

- (NSString *)longOperationDescription;
- (NSString *)shortOperationDescription;

@end
