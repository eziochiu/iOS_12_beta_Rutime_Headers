/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTAuthenticator : NSObject {
    int  _accountAuthState;
    NSMutableArray * _deferredRequests;
    <YTAuthenticatorDelegate> * _delegate;
}

+ (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)sharedAuthenticator;

- (void)_addAccountAuthenticationObserers;
- (void)_addDeferredRequest:(id)arg1 accountAuthRequired:(bool)arg2;
- (void)_completeAuthenticationForDeferredRequests;
- (void)_failedToAuthenticateAccount:(id)arg1;
- (void)_removeAccountAuthenticationObservers;
- (void)_removeDefferredRequests;
- (id)accountUsername;
- (void)addAuthenticationHeadersToRequest:(id)arg1 accountAuthRequired:(bool)arg2;
- (bool)cachedCredentialsValid;
- (void)clearAccountInfo;
- (void)dealloc;
- (void)didAuthenticateAccount;
- (id)init;
- (void)invalidateToken;
- (bool)isAccountAuthenticated;
- (bool)loadStoredCredentials;
- (void)setAuthenticatedOauth2Token:(id)arg1;
- (void)setAuthenticatedUsername:(id)arg1 oauth2Token:(id)arg2 oauth2RefreshToken:(id)arg3 youTubeName:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)userCancelledAccountAuthentication;

@end
