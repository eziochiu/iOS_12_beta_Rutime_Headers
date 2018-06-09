/* made by EzioChiu.
 */

@protocol EMAccount <NSObject>

@required

- (bool)canAuthenticateWithCurrentCredentials;
- (bool)hasPasswordCredential;
- (NSString *)hostname;
- (NSString *)password;
- (void)savePersistentAccount;
- (void)setHostname:(NSString *)arg1;
- (void)setPassword:(NSString *)arg1;
- (ACAccount *)systemAccount;

@end
