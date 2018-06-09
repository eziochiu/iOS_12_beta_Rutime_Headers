/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTAccountAuthenticator : NSObject <NSURLConnectionDelegate> {
    NSString * _account;
    NSString * _accountRefreshToken;
    NSString * _accountToken;
    NSString * _accountYouTubeName;
}

@property (nonatomic, retain) NSString *account;
@property (nonatomic, retain) NSString *accountRefreshToken;
@property (nonatomic, retain) NSString *accountToken;
@property (nonatomic, retain) NSString *accountYouTubeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_keychainServiceForCredentialComponent:(id)arg1;
+ (id)_keychainServiceForLegacyPassword;
+ (id)sharedAuthenticator;

- (void)_postAccountTokenGenerationFailedWithError:(id)arg1;
- (void)_postNewAccountTokenAvailable;
- (void)_purgeCachedCredentials;
- (void)_readCredentialsFromKeychain;
- (void)_removeCredentialsFromKeychain;
- (void)_writeCredentialsToKeychain;
- (id)account;
- (id)accountRefreshToken;
- (id)accountToken;
- (id)accountUsername;
- (id)accountYouTubeName;
- (bool)cachedCredentialsValid;
- (void)clearAccountInfo;
- (void)dealloc;
- (id)init;
- (void)invalidateToken;
- (bool)loadStoredCredentials;
- (id)refreshTokenForCurrentAccount;
- (void)setAccount:(id)arg1;
- (void)setAccountRefreshToken:(id)arg1;
- (void)setAccountToken:(id)arg1;
- (void)setAccountYouTubeName:(id)arg1;
- (void)setAuthenticatedOAuth2Token:(id)arg1;
- (void)setAuthenticatedUsername:(id)arg1 oauth2Token:(id)arg2 oauth2RefreshToken:(id)arg3 youTubeName:(id)arg4;
- (id)tokenForCurrentAccount;

@end
