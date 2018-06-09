/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler> {
    NSURL * _certificateFailingURL;
    UINavigationController * _certificateNavigationViewController;
    id /* block */  _certificateRecoveryAttempter;
    struct __SecTrust { } * _certificateTrust;
    _WKRemoteObjectInterface * _certificateWarningPageHandlerInterface;
    <WBSCertificateWarningPagePresenter> * _certificateWarningPagePresenterProxy;
    NSTimer * _crashCountResetTimer;
    unsigned long long  _crashesSinceLastSuccessfulLoad;
    <_SFPageLoadErrorControllerDelegate> * _delegate;
    <_SFDialogPresenting> * _dialogPresenter;
    NSURLRequest * _failedRequest;
    bool  _reloadAfterResume;
    bool  _reloadingFailedRequest;
    WKWebView * _webView;
}

@property (nonatomic, readonly) unsigned long long crashesSinceLastSuccessfulLoad;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFPageLoadErrorControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_SFDialogPresenting> *dialogPresenter;
@property (nonatomic, readonly) NSURLRequest *failedRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool reloadingFailedRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_certificateWarningPagePresenterProxy;
- (void)_clearCertificateWarningPageHandlerInterface;
- (void)_continueAfterCertificateAlertWithURL:(id)arg1 trust:(struct __SecTrust { }*)arg2 recoveryAttempter:(id /* block */)arg3;
- (void)_continueWithoutCredentialsUsingAlertContext:(id)arg1;
- (void)_dismissCertificateViewButtonTapped;
- (id)_genericMessageForError:(id)arg1;
- (bool)_handleCertificateError:(id)arg1 forURL:(id)arg2 isMainFrame:(bool)arg3 recoveryAttempter:(id /* block */)arg4;
- (void)_handleFrameLoadError:(id)arg1 forURL:(id)arg2 recoveryAttempter:(id /* block */)arg3;
- (void)_loadCertificateWarningPageForContext:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_resetCrashCount:(id)arg1;
- (void)_resetCrashCountSoon;
- (void)_setFailedRequest:(id)arg1;
- (void)_setUpCertificateWarningPageHandlerInterface;
- (void)_showRepeatedWebProcessCrashError:(id)arg1 URLString:(id)arg2;
- (id)_specializedMessageForError:(id)arg1 URL:(id)arg2;
- (id)_titleForError:(id)arg1;
- (void)addAlert:(id)arg1;
- (void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2;
- (void)addDialog:(id)arg1;
- (void)addDisallowedFileURLAlert;
- (void)addDisallowedUseOfJavaScriptAlert;
- (void)addDownloadFailedAlertWithDescription:(id)arg1;
- (void)addFormAlertWithTitle:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)addInvalidProfileAlert;
- (void)addInvalidURLAlert;
- (void)clearCrashCountResetTimer;
- (void)clearFailedRequest;
- (unsigned long long)crashesSinceLastSuccessfulLoad;
- (void)dealloc;
- (id)delegate;
- (id)dialogPresenter;
- (id)failedRequest;
- (void)goBackButtonClicked;
- (void)handleClientCertificateAuthenticationChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleFrameLoadError:(id)arg1;
- (void)handleSubframeCertificateError:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (void)openClockSettings;
- (void)performAction:(int)arg1 forAlert:(id)arg2;
- (void)reloadAfterError;
- (bool)reloadingFailedRequest;
- (void)scheduleResetCrashCount;
- (void)setDelegate:(id)arg1;
- (void)setDialogPresenter:(id)arg1;
- (void)showCertificateInformation;
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3;
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 learnMoreLink:(id)arg3 forError:(id)arg4;
- (bool)updateCrashesAndShowCrashError:(id)arg1 URLString:(id)arg2;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end
