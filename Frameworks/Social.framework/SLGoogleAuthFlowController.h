/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    id /* block */  _completion;
    bool  _waitingForAuthorizationCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(id /* block */)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(id /* block */)arg2;
- (void)_fetchNamesForToken:(id)arg1 completion:(id /* block */)arg2;
- (id)authURLForUsername:(id)arg1;
- (id)initialRedirectURL;
- (id)requestForAuthURL:(id)arg1;
- (void)setAuthFlowCompletion:(id /* block */)arg1;
- (bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)arg1;

@end
