/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleWebViewController : UIViewController <NULoadable, UIScrollViewDelegate, WKNavigationDelegatePrivate> {
    FCArticle * _article;
    <NULoadingDelegate> * _loadingDelegate;
    SXWebCrashRetryThrottler * _webCrashRetryThrottler;
    WKWebView * _webView;
}

@property (nonatomic, readonly) FCArticle *article;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXWebCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic, readonly) WKWebView *webView;

+ (id)webViewConfiguration;

- (void).cxx_destruct;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)article;
- (void)dealloc;
- (id)initWithArticle:(id)arg1;
- (id)loadingDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setLoadingDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)webCrashRetryThrottler;
- (id)webView;

@end
