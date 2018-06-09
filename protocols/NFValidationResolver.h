/* made by EzioChiu.
 */

@protocol NFValidationResolver <NSObject>

@required

- (void)ensureClass:(Class)arg1;
- (void)ensureClass:(Class)arg1 name:(NSString *)arg2;
- (void)ensureProtocol:(Protocol *)arg1;
- (void)ensureProtocol:(Protocol *)arg1 name:(NSString *)arg2;

@end
