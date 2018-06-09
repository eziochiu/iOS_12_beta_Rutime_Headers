/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

@interface UserTransparencyViewController : UIViewController <WKNavigationDelegate> {
    <UserTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    bool  _isiPad;
    WKWebView * _myUserPrivacyWebView;
    double  _statusBarOffset;
    UINavigationBar * _transparencyNavBar;
    NSString * _userTransparencyDetails;
    NSString * _userTransparencyDetailsUnavailableMessage;
    NSString * _userTransparencyRendererPayload;
    NSString * _userTransparencyRendererURL;
    ADUserTransparencyResponse * _userTransparencyResponseData;
    UIActivityIndicatorView * activityIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <UserTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) WKWebView *myUserPrivacyWebView;
@property (nonatomic) double statusBarOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) UINavigationBar *transparencyNavBar;
@property (nonatomic, copy) NSString *userTransparencyDetails;
@property (nonatomic, retain) NSString *userTransparencyDetailsUnavailableMessage;
@property (nonatomic, retain) NSString *userTransparencyRendererPayload;
@property (nonatomic, retain) NSString *userTransparencyRendererURL;
@property (nonatomic, retain) ADUserTransparencyResponse *userTransparencyResponseData;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_reportUserTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_showErrorMessage:(id)arg1;
- (id)bundleForTransparencyDetailsViewFramework;
- (id)delegate;
- (void)errorDelegate;
- (id)errorLabel;
- (void)immediatelyLoadViewControllerBeforeNetworkRequest;
- (id)initWithUserTransparencyDetails:(id)arg1;
- (bool)isiPad;
- (void)loadWebView;
- (id)myUserPrivacyWebView;
- (id)normalizeChineseLanguage:(id)arg1;
- (void)presentViewDelegate;
- (void)requestUserTransparencyDetailsWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setMyUserPrivacyWebView:(id)arg1;
- (void)setStatusBarOffset:(double)arg1;
- (void)setTransparencyNavBar:(id)arg1;
- (void)setUserTransparencyDetails:(id)arg1;
- (void)setUserTransparencyDetailsUnavailableMessage:(id)arg1;
- (void)setUserTransparencyRendererPayload:(id)arg1;
- (void)setUserTransparencyRendererURL:(id)arg1;
- (void)setUserTransparencyResponseData:(id)arg1;
- (double)statusBarOffset;
- (id)transparencyNavBar;
- (id)userTransparencyDetails;
- (id)userTransparencyDetailsUnavailableMessage;
- (id)userTransparencyRendererPayload;
- (id)userTransparencyRendererURL;
- (id)userTransparencyResponseData;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
