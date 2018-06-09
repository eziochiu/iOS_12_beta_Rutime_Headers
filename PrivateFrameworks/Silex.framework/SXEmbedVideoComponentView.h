/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedVideoComponentView : SXMediaComponentView <SXViewportChangeListener, WKNavigationDelegate, WKNavigationDelegatePrivate, WKUIDelegate> {
    <SXComponentActionHandler> * _actionHandler;
    bool  _isPresentingFullscreen;
    SXWebCrashRetryThrottler * _webCrashRetryThrottler;
    WKWebView * _webView;
    bool  _webViewIsLoaded;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresentingFullscreen;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXWebCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic) bool webViewIsLoaded;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)actionHandler;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (void)handleError:(id)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 actionHandler:(id)arg7;
- (void)initializeWebViewWithURL:(id)arg1;
- (bool)isPresentingFullscreen;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)setIsPresentingFullscreen:(bool)arg1;
- (void)setWebCrashRetryThrottler:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setWebViewIsLoaded:(bool)arg1;
- (bool)shouldAllowRequestToURL:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (void)updateWebViewToWidth:(double)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;
- (id)webCrashRetryThrottler;
- (id)webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (bool)webViewIsLoaded;

@end
