/* made by EzioChiu.
 */

@protocol SXActionActivity <NSObject>

@required

- (void)invokeWithAction:(SXAction *)arg1 invocationMethod:(unsigned long long)arg2;
- (NSString *)label;
- (unsigned long long)type;

@end
