/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
 */

@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate> {
    <ADTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    bool  _isiPad;
    WKWebView * _myWebView;
    double  _statusBarOffset;
    NSString * _transparencyDetails;
    NSDictionary * _transparencyDetailsData;
    NSString * _transparencyDetailsUnavailableMessage;
    UINavigationBar * _transparencyNavBar;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
    UIActivityIndicatorView * activityIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <ADTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) WKWebView *myWebView;
@property (nonatomic) double statusBarOffset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transparencyDetails;
@property (nonatomic, retain) NSDictionary *transparencyDetailsData;
@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, retain) UINavigationBar *transparencyNavBar;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_reportTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_showErrorMessage:(id)arg1;
- (id)bundleForTransparencyDetailsView;
- (id)delegate;
- (void)errorDelegate;
- (id)errorLabel;
- (id)initWithTransparencyDetails:(id)arg1;
- (bool)isiPad;
- (void)loadWebView;
- (id)myWebView;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)presentViewDelegate;
- (void)requestViewWithTransparencyDetails:(id)arg1;
- (void)requestViewWithTransparencyDetailsDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setMyWebView:(id)arg1;
- (void)setStatusBarOffset:(double)arg1;
- (void)setTransparencyDetails:(id)arg1;
- (void)setTransparencyDetailsData:(id)arg1;
- (void)setTransparencyNavBar:(id)arg1;
- (double)statusBarOffset;
- (id)transparencyDetails;
- (id)transparencyDetailsData;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyNavBar;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
