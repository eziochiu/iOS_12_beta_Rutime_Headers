/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingShowPassword : SASettingCommand

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *appOrWebsiteName;
@property (nonatomic, copy) NSString *spokenAppOrWebsiteName;

+ (id)showPassword;
+ (id)showPasswordWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)appOrWebsiteName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;
- (void)setAppOrWebsiteName:(id)arg1;
- (void)setSpokenAppOrWebsiteName:(id)arg1;
- (id)spokenAppOrWebsiteName;

@end
