/* made by EzioChiu.
 */

@protocol INSetProfileInCarIntentExport <NSObject, JSExport>

@required

- (NSNumber *)defaultProfile;
- (id)init;
- (NSString *)profileName;
- (NSNumber *)profileNumber;
- (void)setDefaultProfile:(NSNumber *)arg1;
- (void)setProfileName:(NSString *)arg1;
- (void)setProfileNumber:(NSNumber *)arg1;

@end
