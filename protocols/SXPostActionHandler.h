/* made by EzioChiu.
 */

@protocol SXPostActionHandler <NSObject>

@required

- (void)handledAction:(SXAction *)arg1 state:(unsigned long long)arg2;

@end
