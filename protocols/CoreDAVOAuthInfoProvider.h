/* made by EzioChiu.
 */

@protocol CoreDAVOAuthInfoProvider <NSObject>

@optional

- (struct _CFURLCredential { }*)newOAuth1CredentialForChallenge:(NSURLAuthenticationChallenge *)arg1;
- (NSString *)oauth2Token;
- (unsigned long long)oauthVariant;

@end
