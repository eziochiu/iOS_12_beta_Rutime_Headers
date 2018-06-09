/* made by EzioChiu.
 */

@protocol AFSiriActivationContextMutating <NSObject>

@required

- (void)setDeviceID:(NSString *)arg1;
- (void)setEvent:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;

@end
