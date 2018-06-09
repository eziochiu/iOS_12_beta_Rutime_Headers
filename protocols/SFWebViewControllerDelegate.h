/* made by EzioChiu.
 */

@protocol SFWebViewControllerDelegate <NSObject>

@required

- (unsigned long long)browserPersonaForWebViewController:(SFWebViewController *)arg1;
- (bool)currentLoadIsEligibleForAutoFillAuthenticationForWebViewController:(SFWebViewController *)arg1;
- (UIViewController *)presentingViewControllerForWebViewController:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (void)webViewController:(void *)arg1 createWebViewWithConfiguration:(void *)arg2 forNavigationAction:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: SFWebViewController *, WKWebViewConfiguration *, WKNavigationAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*
- (void)webViewController:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: SFWebViewController *, WKNavigationAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webViewController:(void *)arg1 decidePolicyForNavigationResponse:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: SFWebViewController *, WKNavigationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webViewController:(SFWebViewController *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didEndNavigationGestureToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didFinishDocumentLoadForNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webViewController:(void *)arg1 didReceiveAuthenticationChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: SFWebViewController *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)webViewController:(SFWebViewController *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didSameDocumentNavigation:(WKNavigation *)arg2 ofType:(long long)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (long long)webViewController:(SFWebViewController *)arg1 presentationPolicyForDialog:(_SFDialog *)arg2;
- (UIViewController *)webViewController:(SFWebViewController *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)webViewController:(SFWebViewController *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 webViewDidClose:(WKWebView *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeEstimatedProgress:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeHasOnlySecureContent:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeLoadingState:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeURL:(SFWebViewController *)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidCrash:(SFWebViewController *)arg1;
- (void)webViewControllerWillAuthenticateForAutoFill:(SFWebViewController *)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(SFWebViewController *)arg1;

@end
