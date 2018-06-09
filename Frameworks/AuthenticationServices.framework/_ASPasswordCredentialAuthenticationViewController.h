/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASPasswordCredentialAuthenticationViewController : UIViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    ASPasswordCredentialIdentity * _credentialIdentity;
    <_ASPasswordCredentialAuthenticationViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    _ASCredentialProviderExtensionHostContext * _nonUIHostContext;
    NSTimer * _nonUIRequestTimer;
    UIViewController * _remoteViewController;
    _ASCredentialProviderExtensionHostContext * _requestHostContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASPasswordCredentialAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didInstantiatePreflightViewController:(id)arg1 withRequestID:(id)arg2 error:(id)arg3;
- (void)_didInstantiateRequestViewController:(id)arg1 withRequestID:(id)arg2 error:(id)arg3;
- (void)_finishWithCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidateNonUIRequestTimerIfNeeded;
- (void)_nonUIRequestTimedOut;
- (void)_presentUI;
- (void)_setRemoteViewController:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)delegate;
- (id)initWithExtension:(id)arg1 credentialIdentity:(id)arg2;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
