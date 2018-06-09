/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal> {
    <_SFAuthenticationSessionDelegate> * __delegate;
    SFAuthenticationViewController * _authViewController;
    NSString * _callbackURLScheme;
    id /* block */  _completionHandler;
    NSURL * _initialURL;
    bool  _isSessionStarted;
}

@property (nonatomic) <_SFAuthenticationSessionDelegate> *_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_delegate;
- (bool)_startRequestingFromWebAuthenticationSession:(bool)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)presentingViewControllerForAuthenticationViewController:(id)arg1;
- (void)safariViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(bool)arg3;
- (void)safariViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)set_delegate:(id)arg1;
- (bool)start;
- (bool)startASWebAuthenticationSession;

@end
