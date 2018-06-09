/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {
    <NewsTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    bool  _isClientTodayWidget;
    bool  _isiPad;
    WKWebView * _myNewsPrivacyWebView;
    double  _statusBarOffset;
    NSDictionary * _transparencyDetailsDictionary;
    NSString * _transparencyDetailsUnavailableMessage;
    UINavigationBar * _transparencyNavBar;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
    UIActivityIndicatorView * activityIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NewsTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isClientTodayWidget;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) WKWebView *myNewsPrivacyWebView;
@property (nonatomic) double statusBarOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *transparencyDetailsDictionary;
@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, retain) UINavigationBar *transparencyNavBar;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_showErrorMessage:(id)arg1;
- (id)bundleForTransparencyDetailsViewFramework;
- (id)delegate;
- (void)errorDelegate;
- (id)errorLabel;
- (id)initWithNewsTransparencyDetailsDictionary:(id)arg1;
- (bool)isClientTodayWidget;
- (bool)isDeviceLocked;
- (bool)isiPad;
- (void)loadWebView;
- (id)myNewsPrivacyWebView;
- (id)normalizeChineseLanguage:(id)arg1;
- (void)presentViewDelegate;
- (void)requestUserPassCodeUnlockUIWithBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setIsClientTodayWidget:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setMyNewsPrivacyWebView:(id)arg1;
- (void)setStatusBarOffset:(double)arg1;
- (void)setTransparencyDetailsDictionary:(id)arg1;
- (void)setTransparencyNavBar:(id)arg1;
- (double)statusBarOffset;
- (id)transparencyDetailsDictionary;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyNavBar;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
