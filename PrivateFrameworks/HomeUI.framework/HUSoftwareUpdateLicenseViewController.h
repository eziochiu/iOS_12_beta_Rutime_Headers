/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateLicenseViewController : UIViewController <HUPreloadableViewController, MFMailComposeViewControllerDelegate, UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate> {
    NSURL * _URL;
    id /* block */  _agreeHandler;
    id /* block */  _disagreeHandler;
    HMHTMLDocument * _document;
    NSFileManager * _fileManager;
    NSString * _license;
    NAFuture * _loadFuture;
    UIButton * _retainCopyOfTermsButton;
    UIScrollView * _scrollView;
    WKWebView * _webView;
    double  _webViewHeight;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, copy) id /* block */ agreeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ disagreeHandler;
@property (nonatomic, readonly, copy) HMHTMLDocument *document;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *license;
@property (nonatomic, readonly) NAFuture *loadFuture;
@property (nonatomic, readonly) UIButton *retainCopyOfTermsButton;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic) double webViewHeight;

- (void).cxx_destruct;
- (id)URL;
- (void)_agreeToTerms:(id)arg1;
- (void)_disagreeToTerms:(id)arg1;
- (void)_emailTermsAndConditions:(id)arg1;
- (id)_initWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (void)_saveToDesktop:(id)arg1;
- (void)_startLoadWithDocument:(id)arg1 orMaybeAURL:(id)arg2;
- (id /* block */)agreeHandler;
- (id /* block */)disagreeHandler;
- (id)document;
- (id)fileManager;
- (id)hu_preloadContent;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)license;
- (id)loadFuture;
- (void)loadLicense;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)retainCopyOfTermsButton;
- (id)scrollView;
- (void)setAgreeHandler:(id /* block */)arg1;
- (void)setDisagreeHandler:(id /* block */)arg1;
- (void)setFileManager:(id)arg1;
- (void)setWebViewHeight:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (double)webViewHeight;

@end
