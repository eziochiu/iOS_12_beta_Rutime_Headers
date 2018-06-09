/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASCredentialProviderExtensionViewController : UIViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    <_ASCredentialProviderExtensionViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    UIViewController * _remoteViewController;
    NSArray * _serviceIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASCredentialProviderExtensionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didInstantiateViewController:(id)arg1 withRequestID:(id)arg2 error:(id)arg3;
- (void)_finishWithCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_setRemoteViewController:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)delegate;
- (id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
