/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SocialServices.framework/SocialServices
 */

@interface SLGoogleAuthController : NSObject <SFSafariViewControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    id /* block */  _completion;
    id /* block */  _presentationBlock;
    NSString * _redirectURI;
    SFSafariViewController * _safariViewController;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensAndUsernameWithCompletion:(id /* block */)arg4;
+ (void)_exchangeAuthCode:(id)arg1 usingRedirect:(id)arg2 codeVerifier:(id)arg3 forTokensWithCompletion:(id /* block */)arg4;
+ (void)_fetchNamesForToken:(id)arg1 completion:(id /* block */)arg2;
+ (id)_identityFromUsername:(id)arg1 displayName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4;
+ (id)_mapOfUUIDToAuthController;
+ (void)_presentInternetOfflineError;
+ (void)_presentUsernameMismatchAlert;
+ (id)googleAuthControllerWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)googleAuthControllerWithPresentationBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (id)googleAuthControllerWithYouTubeUsername:(id)arg1 presentationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (bool)openURL:(id)arg1;

- (void).cxx_destruct;
- (void)_completeWithIdentity:(id)arg1 error:(id)arg2;
- (void)_didRedirectToURL:(id)arg1 codeVerifier:(id)arg2;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 youTube:(bool)arg4 presentationBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)_redirectPathForURI:(id)arg1;
- (void)dealloc;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(bool)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;

@end
