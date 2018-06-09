/* made by EzioChiu.
 */

@protocol IMUserDefaults <NSObject>

@required

- (bool)appBoolByHostForKey:(NSString *)arg1;
- (bool)appBoolForKey:(NSString *)arg1;
- (id)appValueForKey:(NSString *)arg1;
- (NSArray *)copyKeyListForAppID:(NSString *)arg1;
- (NSArray *)copyKeyListForApplicationID:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 hostName:(struct __CFString { }*)arg3;
- (NSDictionary *)copyMultipleForCurrentKeys:(NSArray *)arg1 appID:(NSString *)arg2;
- (NSDictionary *)copyMultipleForCurrentKeys:(NSArray *)arg1 applicationID:(struct __CFString { }*)arg2 userName:(struct __CFString { }*)arg3 hostName:(struct __CFString { }*)arg4;
- (id)copyValueForKey:(NSString *)arg1 appID:(NSString *)arg2;
- (id)copyValueForKey:(NSString *)arg1 applicationID:(struct __CFString { }*)arg2 userName:(struct __CFString { }*)arg3 hostName:(struct __CFString { }*)arg4;
- (void)removeAppValueForKey:(NSString *)arg1;
- (void)setAppBool:(bool)arg1 byHostForKey:(NSString *)arg2;
- (void)setAppBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)setAppValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setMultiple:(NSDictionary *)arg1 remove:(NSArray *)arg2 appID:(NSString *)arg3;
- (void)setMultiple:(NSDictionary *)arg1 remove:(NSArray *)arg2 applicationID:(struct __CFString { }*)arg3 userName:(struct __CFString { }*)arg4 hostName:(struct __CFString { }*)arg5;
- (void)setValue:(void*)arg1 forKey:(NSString *)arg2 appID:(NSString *)arg3;
- (void)setValue:(void*)arg1 forKey:(NSString *)arg2 applicationID:(struct __CFString { }*)arg3 userName:(struct __CFString { }*)arg4 hostName:(struct __CFString { }*)arg5;
- (void)synchronizeAppID:(NSString *)arg1;
- (void)synchronizeApplicationID:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 hostName:(struct __CFString { }*)arg3;

@end
