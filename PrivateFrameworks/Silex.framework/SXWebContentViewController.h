/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentViewController : UIViewController <WKNavigationDelegate, WKUIDelegate> {
    <SXWebContentDocumentStateReporting> * _documentStateReporter;
    <SXWebContentErrorReporting> * _errorReporter;
    <SXWebContentLogger> * _logger;
    <SXWebContentMessageHandlerManager> * _messageHandlerManager;
    <SXWebContentNavigationManager> * _navigationManager;
    <SXReachabilityProvider> * _reachabilityProvider;
    <SXWebContentScriptsManager> * _scriptsManager;
    <SXWebContentProcessTerminationManager> * _terminationManager;
    <SXWebContentTimeoutManager> * _timeoutManager;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXWebContentDocumentStateReporting> *documentStateReporter;
@property (nonatomic, readonly) <SXWebContentErrorReporting> *errorReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXWebContentLogger> *logger;
@property (nonatomic, readonly) <SXWebContentMessageHandlerManager> *messageHandlerManager;
@property (nonatomic, readonly) <SXWebContentNavigationManager> *navigationManager;
@property (nonatomic, readonly) <SXReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) <SXWebContentScriptsManager> *scriptsManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXWebContentProcessTerminationManager> *terminationManager;
@property (nonatomic, readonly) <SXWebContentTimeoutManager> *timeoutManager;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)documentStateReporter;
- (id)errorReporter;
- (id)initWithWebView:(id)arg1 scriptsManager:(id)arg2 messageHandlerManager:(id)arg3 navigationManager:(id)arg4 errorReporter:(id)arg5 documentStateReporter:(id)arg6 timeoutManager:(id)arg7 terminationManager:(id)arg8 reachabilityProvider:(id)arg9 logger:(id)arg10;
- (void)loadURL:(id)arg1;
- (id)logger;
- (id)messageHandlerManager;
- (id)navigationManager;
- (id)reachabilityProvider;
- (id)scriptsManager;
- (id)terminationManager;
- (id)timeoutManager;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
