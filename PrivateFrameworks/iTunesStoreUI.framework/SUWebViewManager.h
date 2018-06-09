/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, UIWebViewDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate> {
    ACAccount * _account;
    SSAuthenticationContext * _authenticationContext;
    SUClientInterface * _clientInterface;
    <SUWebViewManagerDelegate> * _delegate;
    bool  _initialLoadReported;
    ISURLRequestPerformance * _initialRequestPerformance;
    NSLock * _lock;
    id  _originalFrameLoadDelegate;
    id  _originalPolicyDelegate;
    id  _originalResourceLoadDelegate;
    id  _originalUIDelegate;
    SUWebScriptReloadContext * _pendingWebScriptReloadContext;
    NSMutableSet * _requireCellularURLs;
    NSMapTable * _scriptInterfaces;
    SUScriptWindowContext * _scriptWindowContext;
    bool  _shouldSignRequests;
    NSSet * _suppressCookiesHosts;
    NSDictionary * _tidHeaders;
    long long  _usingNetworkCount;
    struct __CFSet { } * _webFramesPendingInitialRequest;
    UIWebView * _webView;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUWebViewManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ISURLRequestPerformance *initialRequestPerformance;
@property (nonatomic, retain) id originalFrameLoadDelegate;
@property (nonatomic, retain) id originalPolicyDelegate;
@property (nonatomic, retain) id originalResourceLoadDelegate;
@property (nonatomic, retain) id originalUIDelegate;
@property (nonatomic, retain) SUScriptWindowContext *scriptWindowContext;
@property (nonatomic) bool shouldSignRequests;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *tidHeaders;
@property (nonatomic, readonly) UIWebView *webView;

+ (id)defaultLocalStoragePath;

- (id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2;
- (void)_beginUsingNetwork;
- (void)_cancelUsingNetwork;
- (id)_delegate;
- (void)_endUsingNetwork;
- (void)_enumerateScriptInterfacesWithBlock:(id /* block */)arg1;
- (id)_locateStorePageViewController;
- (bool)_presentModalAlertWithMessage:(id)arg1 includingCancelButton:(bool)arg2 configurationHandler:(id /* block */)arg3;
- (void)_requestWebScriptReloadWithContext:(id)arg1;
- (id)_userIdentifier;
- (id)account;
- (id)authenticationContext;
- (void)connectToWebView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromWebView;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(bool)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithClientInterface:(id)arg1;
- (id)initialRequestPerformance;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)originalFrameLoadDelegate;
- (id)originalPolicyDelegate;
- (id)originalResourceLoadDelegate;
- (id)originalUIDelegate;
- (id)parentViewControllerForScriptInterface:(id)arg1;
- (id)performanceMetricsForScriptInterface:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scriptInterface:(id)arg1 requireCellularForResourceWithURL:(id)arg2;
- (id)scriptWindowContext;
- (void)setAccount:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialRequestPerformance:(id)arg1;
- (void)setOriginalFrameLoadDelegate:(id)arg1;
- (void)setOriginalPolicyDelegate:(id)arg1;
- (void)setOriginalResourceLoadDelegate:(id)arg1;
- (void)setOriginalUIDelegate:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (void)setShouldSignRequests:(bool)arg1;
- (void)setTidHeaders:(id)arg1;
- (bool)shouldSignRequests;
- (id)tidHeaders;
- (id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long long)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long long)arg3 line:(int)arg4 forWebFrame:(id)arg5;
- (void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned long long)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end