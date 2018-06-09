/* made by EzioChiu.
 */

@protocol ASRuntimeFixProtocol <NSObject>

@required

- (void)accountsHaveBeenSaved:(bool)arg1;
- (int)fixBasicAccountIfNeeded:(BasicAccount *)arg1 loggingMessage:(NSString *)arg2;
- (NSSet *)supportedAccountTypes;

@end
